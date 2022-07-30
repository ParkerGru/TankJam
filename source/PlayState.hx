package;

import flixel.util.FlxTimer;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTileblock;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxVirtualPad;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;
import openfl.display.BitmapData;
import openfl.geom.ColorTransform;
import flixel.input.keyboard.FlxKey;
import flixel.input.keyboard.FlxKeyList;

class PlayState extends FlxState
{
	inline static var GUY_SPEED = 150; // how fast we want our guy to move
	public static inline var RUN_SPEED:Int = 150;
	public var GRAVITY:Int = 620;
	public static inline var JUMP_SPEED:Int = 250;
	public static inline var JUMPS_ALLOWED:Int = 1;
	public static inline var BULLET_SPEED:Int = 200;
	public static inline var GUN_DELAY:Float = 0.4;
	var climbing:Bool = false;
	var _onLadder:Bool = false;

	var _jumpTime:Float = -1;
	var _timesJumped:Int = 0;
	var _xgridleft:Int = 0;
	var _xgridright:Int = 0;
	var _ygrid:Int = 0;
	var guy:FlxSprite; 
	var guy2:FlxSprite; 
	var _ground:FlxTileblock;

	override public function create():Void
	{
		guy = new FlxSprite();
		guy.frames = AssetPaths.getSparrowAtlas('steve');
		guy.animation.addByIndices('idle', 'steve', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], '', 30, true);
		guy.animation.addByIndices('look_up', 'steve', [13, 14, 15, 16, 17, 18, 19, 20, 22, 23], '', 30, false);
		guy.animation.addByIndices('crouch', 'steve', [24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34], '', 30, false);
		guy.animation.addByIndices('jump', 'steve', [35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53], '', 30, true);
		guy.animation.addByIndices('run', 'steve', [54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70], '', 30, true);
		guy.antialiasing = false;
		guy.drag.set(RUN_SPEED * 8, RUN_SPEED * 8);
		guy.scale.set(0.3, 0.3);
		guy.maxVelocity.set(RUN_SPEED, JUMP_SPEED);
		guy.acceleration.y = GRAVITY;

		guy2 = new FlxSprite();
		guy2.frames = AssetPaths.getSparrowAtlas('John');
		guy2.animation.addByIndices('idle', 'John', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], '', 30, true);
		guy2.animation.addByIndices('look_up', 'John', [13, 14, 15, 16, 17, 18, 19, 20, 22, 23], '', 30, false);
		guy2.animation.addByIndices('crouch', 'John', [24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34], '', 30, false);
		guy2.animation.addByIndices('jump', 'John', [35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53], '', 30, true);
		guy2.animation.addByIndices('run', 'John', [54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70], '', 30, true);
		guy2.antialiasing = false;
		guy2.drag.set(RUN_SPEED * 8, RUN_SPEED * 8);
		guy2.scale.set(0.3, 0.3);
		guy2.maxVelocity.set(RUN_SPEED, JUMP_SPEED);
		guy2.acceleration.y = GRAVITY;



		// build a gradient sky for the background - make it as big as our screen, and, it's going to be stationary
		var sky:FlxSprite = FlxGradient.createGradientFlxSprite(FlxG.width, FlxG.height, [0xff6dcff6, 0xff333333], 16);
		sky.scrollFactor.set();
		add(sky);

		// this is just a solid-gradient to go behind our ground
		var _sprSolid = FlxGradient.createGradientFlxSprite(FlxG.width, 64, [0xff333333, 0xff000000], 8);
		_sprSolid.y = FlxG.height - 64;
		_sprSolid.scrollFactor.set();
		add(_sprSolid);

		// a tileblock of ground tiles - will move with the player
		 _ground = new FlxTileblock(0, FlxG.height - 64, FlxG.width * 4, 64);
		_ground.loadTiles("assets/tiles.png", 16, 16, 1);
		add(_ground);

		// we're going to have some snow or ash flakes drifting down at different 'levels'. We need a lot of them for the effect to work nicely

		// Set up our camera to follow the guy, and stay within the confines of our 'world'
		add(guy);
		add(guy2);
		guy2.flipX = true;	
		FlxG.camera.follow(guy);
		FlxG.camera.setScrollBounds(0, FlxG.width * 4, 0, FlxG.height);

		#if mobile
		_vPad = new FlxVirtualPad(FlxDPadMode.LEFT_RIGHT, FlxActionMode.NONE);
		add(_vPad);
		#end

		super.create();
	}

	function jump(elapsed:Float):Void
	{
		if (FlxG.keys.pressed.SPACE)
		{
	    	if ((guy.velocity.y == 0) || (_timesJumped < JUMPS_ALLOWED)) // Only allow two jumps
			{
				guy.animation.play('jump');
				_timesJumped++;
				_jumpTime = 0;
				_onLadder = false;
			}
		}

		// You can also use space or any other key you want
		if (FlxG.keys.pressed.SPACE && (_jumpTime >= 0))
		{
			climbing = false;
			_jumpTime += elapsed;

			// You can't jump for more than 0.25 seconds
			if (_jumpTime > 0.25)
			{
				_jumpTime = -1;
			}
			else if (_jumpTime > 0)
			{
				guy.velocity.y = -0.6 * guy.maxVelocity.y;
			}
		}
		else
			_jumpTime = -1.0;
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		var jumping:Bool = false;
		super.update(elapsed);
		// Reset to 0 when no button is pushed
		guy.acceleration.x = 0;
		guy2.acceleration.x = 0;
		guy.acceleration.y = GRAVITY;

		if(FlxG.keys.anyPressed([RIGHT, D])) {
		guy.flipX = false;
		guy.velocity.x = GUY_SPEED;
		}

		else if (FlxG.keys.anyPressed([LEFT, A]))
		{
			guy.flipX = true;
			guy.velocity.x = -GUY_SPEED;
		}

		jump(elapsed);

		if (guy.velocity.x > 0 || guy.velocity.x < 0)
		{
			if(!jumping) {
			guy.animation.play("run");
			}
			else {
			guy.animation.play("jump");
			}
		}


		if (guy.velocity.x == 0 && guy.velocity.y == 0)
		{
			if (FlxG.keys.anyPressed([UP, W]))
			{
				if (guy.animation.curAnim.finished)
				{
					guy.animation.finish();
				}
				else
				{
					guy.animation.play('look_up');
				}
			}
			else if (FlxG.keys.anyPressed([DOWN, S]))
			{
				if (guy.animation.curAnim.finished)
				{
					guy.animation.finish();
					jumping = false;
				}
				else {
				guy.animation.play('crouch');
				jumping = false;
				}
				
			
			}
			else
			{
				guy.animation.play("idle");
				jumping = false;
			}
		}
        
		if (FlxG.collide(guy, _ground))
		{
			guy.acceleration.y = 0;
		}

		if (FlxG.collide(guy2, _ground))
		{
			guy2.acceleration.y = 0;
		}

	}


	/**
	 * This function will 'bake' a color transformation onto a bitmap to cut down on draw time (thanks Lars!)
	 * @param	color	the color you want to transform the bitmap with
	 * @param	asset	the asset key of the bitmap
	 * @param	alpha	if you want to apply alpha to the bitmap
	 * @return	the key to get the modified bitmap
	 */
	function bakeColors(color:FlxColor, asset:String, ?alpha:Float = 1):String
	{
		var bmpData:BitmapData = FlxG.bitmap.get(asset).bitmap.clone();

		var colorTransform:ColorTransform = new ColorTransform();
		colorTransform.redMultiplier = color.redFloat;
		colorTransform.greenMultiplier = color.greenFloat;
		colorTransform.blueMultiplier = color.blueFloat;
		colorTransform.alphaMultiplier = alpha;

		bmpData.colorTransform(bmpData.rect, colorTransform);
		var key:String = asset + "_color=" + color;
		FlxG.bitmap.add(bmpData, false, key);
		return key;
	}
}