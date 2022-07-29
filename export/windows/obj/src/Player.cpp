#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_12_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",12,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_1[] = {
	(int)67,(int)75,(int)32,
};
static const int _hx_array_data_6c4d5f81_2[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_6c4d5f81_3[] = {
	(int)13,(int)14,(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)22,(int)23,
};
static const int _hx_array_data_6c4d5f81_4[] = {
	(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,(int)30,(int)31,(int)32,(int)33,(int)34,
};
static const int _hx_array_data_6c4d5f81_5[] = {
	(int)35,(int)36,(int)37,(int)38,(int)39,(int)40,(int)41,(int)42,(int)43,(int)44,(int)45,(int)46,(int)47,(int)48,(int)49,(int)50,(int)51,(int)52,(int)53,
};
static const int _hx_array_data_6c4d5f81_6[] = {
	(int)54,(int)55,(int)56,(int)57,(int)58,(int)59,(int)60,(int)61,(int)62,(int)63,(int)64,(int)65,(int)66,(int)67,(int)68,(int)69,(int)70,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_68_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",68,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_8[] = {
	(int)37,(int)65,
};
static const int _hx_array_data_6c4d5f81_9[] = {
	(int)39,(int)68,
};
static const int _hx_array_data_6c4d5f81_10[] = {
	(int)88,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_150_climb,"Player","climb",0x3c389448,"Player.climb","Player.hx",150,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_12[] = {
	(int)38,(int)87,
};
static const int _hx_array_data_6c4d5f81_13[] = {
	(int)40,(int)83,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_182_jump,"Player","jump",0x1abc40fb,"Player.jump","Player.hx",182,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_215_shoot,"Player","shoot",0x70019132,"Player.shoot","Player.hx",215,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_224_shoot,"Player","shoot",0x70019132,"Player.shoot","Player.hx",224,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_248_kill,"Player","kill",0x1b5c5bab,"Player.kill","Player.hx",248,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_14_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",14,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_15_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",15,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_16_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",16,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_17_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",17,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_18_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",18,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_19_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",19,0xa27fc9dd)

void Player_obj::__construct(int X,int Y, ::PlayState Parent, ::flixel::effects::particles::FlxTypedEmitter Gibs, ::flixel::group::FlxTypedGroup Bullets){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_12_new)
HXLINE(  38)		this->_onLadder = false;
HXLINE(  36)		this->climbing = false;
HXLINE(  33)		this->_ygrid = 0;
HXLINE(  32)		this->_xgridright = 0;
HXLINE(  31)		this->_xgridleft = 0;
HXLINE(  29)		this->_jumpKeys = ::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_1,3);
HXLINE(  28)		this->_timesJumped = 0;
HXLINE(  27)		this->_jumpTime = ((Float)-1);
HXLINE(  43)		super::__construct(null(),null(),null());
HXLINE(  45)		this->_bullets = Bullets;
HXLINE(  47)		{
HXLINE(  47)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  47)			bool _hx_tmp;
HXDLIN(  47)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  47)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  47)					_hx_tmp = false;
            				}
            			}
HXDLIN(  47)			if (_hx_tmp) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  47)				this->set_x(((( (Float)(_hx_tmp) ) - this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  47)			bool _hx_tmp1;
HXDLIN(  47)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  47)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  47)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  47)			if (_hx_tmp1) {
HXLINE(  47)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  47)				this->set_y(((( (Float)(_hx_tmp) ) - this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  48)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(((HX_("assets/images/",ab,47,cb,9f) + HX_("John",2b,5f,3e,31)) + HX_(".png",3b,2d,bd,1e)),((HX_("assets/images/",ab,47,cb,9f) + HX_("John",2b,5f,3e,31)) + HX_(".xml",69,3e,c3,1e))));
HXLINE(  49)		this->animation->addByIndices(HX_("idle",14,a7,b3,45),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_2,13),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  50)		this->animation->addByIndices(HX_("look_up",7b,db,27,1d),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_3,10),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  51)		this->animation->addByIndices(HX_("crouch",7a,a7,ba,82),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_4,11),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  52)		this->animation->addByIndices(HX_("jump",ee,c4,69,46),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_5,19),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  53)		this->animation->addByIndices(HX_("run",4b,e7,56,00),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_6,17),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  54)		this->scale->set(((Float)5.1),((Float)5.1));
HXLINE(  55)		this->drag->set(720,720);
HXLINE(  56)		this->maxVelocity->set(90,250);
HXLINE(  57)		this->acceleration->set_y(( (Float)(620) ));
HXLINE(  61)		this->_cooldown = ((Float)0.4);
HXLINE(  62)		this->_gibs = Gibs;
HXLINE(  64)		this->_parent = Parent;
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33e526a5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_68_update)
HXLINE(  70)		this->acceleration->set_x(( (Float)(0) ));
HXLINE(  72)		if (this->climbing) {
HXLINE(  75)			this->acceleration->set_y(( (Float)(0) ));
            		}
            		else {
HXLINE(  80)			this->acceleration->set_y(( (Float)(620) ));
            		}
HXLINE(  83)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_8,2),1)) {
HXLINE(  85)			this->set_flipX(true);
HXLINE(  86)			this->acceleration->set_x(-(this->drag->x));
            		}
            		else {
HXLINE(  88)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_9,2),1)) {
HXLINE(  90)				this->set_flipX(false);
HXLINE(  91)				this->acceleration->set_x(this->drag->x);
            			}
            		}
HXLINE(  94)		this->jump(elapsed);
HXLINE(  97)		if ((this->_jumpTime < 0)) {
HXLINE(  99)			this->climb();
            		}
HXLINE( 103)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_10,1),1)) {
HXLINE( 106)			this->shoot();
            		}
HXLINE( 110)		bool _hx_tmp;
HXDLIN( 110)		if (!((this->velocity->x > 0))) {
HXLINE( 110)			_hx_tmp = (this->velocity->x < 0);
            		}
            		else {
HXLINE( 110)			_hx_tmp = true;
            		}
HXDLIN( 110)		if (_hx_tmp) {
HXLINE( 112)			this->animation->play(HX_("run",4b,e7,56,00),null(),null(),null());
            		}
            		else {
HXLINE( 114)			bool _hx_tmp;
HXDLIN( 114)			if ((this->velocity->x == 0)) {
HXLINE( 114)				_hx_tmp = (this->velocity->y == 0);
            			}
            			else {
HXLINE( 114)				_hx_tmp = false;
            			}
HXDLIN( 114)			if (_hx_tmp) {
HXLINE( 116)				this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            		}
HXLINE( 118)		if ((this->velocity->y < 0)) {
HXLINE( 120)			this->animation->play(HX_("jump",ee,c4,69,46),null(),null(),null());
            		}
HXLINE( 123)		 ::Player _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 123)		_hx_tmp1->_cooldown = (_hx_tmp1->_cooldown + elapsed);
HXLINE( 126)		if ((this->x <= 0)) {
HXLINE( 128)			this->set_x(( (Float)(0) ));
            		}
HXLINE( 132)		this->_xgridleft = ::Std_obj::_hx_int(((this->x + 3) / ( (Float)(16) )));
HXLINE( 133)		Float _hx_tmp2 = this->x;
HXDLIN( 133)		this->_xgridright = ::Std_obj::_hx_int((((_hx_tmp2 + this->get_width()) - ( (Float)(3) )) / ( (Float)(16) )));
HXLINE( 135)		Float _hx_tmp3 = this->y;
HXDLIN( 135)		this->_ygrid = ::Std_obj::_hx_int((((_hx_tmp3 + this->get_height()) - ( (Float)(1) )) / ( (Float)(16) )));
HXLINE( 138)		bool _hx_tmp4;
HXDLIN( 138)		if (((this->touching & 4096) > 0)) {
HXLINE( 138)			_hx_tmp4 = !(::flixel::FlxG_obj::keys->checkKeyArrayState(this->_jumpKeys,1));
            		}
            		else {
HXLINE( 138)			_hx_tmp4 = false;
            		}
HXDLIN( 138)		if (_hx_tmp4) {
HXLINE( 140)			this->_jumpTime = ( (Float)(-1) );
HXLINE( 142)			this->_timesJumped = 0;
            		}
HXLINE( 145)		this->super::update(elapsed);
            	}


void Player_obj::climb(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_150_climb)
HXDLIN( 150)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_12,2),1)) {
HXLINE( 152)			if (this->_onLadder) {
HXLINE( 154)				this->climbing = true;
HXLINE( 155)				this->_timesJumped = 0;
            			}
            			else {
HXLINE( 158)				this->animation->play(HX_("look_up",7b,db,27,1d),null(),null(),null());
            			}
            		}
            		else {
HXLINE( 162)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_13,2),1)) {
HXLINE( 164)				if (this->_onLadder) {
HXLINE( 166)					this->climbing = true;
HXLINE( 167)					this->_timesJumped = 0;
            				}
HXLINE( 170)				if (this->climbing) {
HXLINE( 172)					this->velocity->set_y(( (Float)(90) ));
            				}
            				else {
HXLINE( 176)					this->animation->play(HX_("crouch",7a,a7,ba,82),null(),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,climb,(void))

void Player_obj::jump(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_182_jump)
HXLINE( 183)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->_jumpKeys,2)) {
HXLINE( 185)			bool _hx_tmp;
HXDLIN( 185)			if ((this->velocity->y != 0)) {
HXLINE( 185)				_hx_tmp = (this->_timesJumped < 2);
            			}
            			else {
HXLINE( 185)				_hx_tmp = true;
            			}
HXDLIN( 185)			if (_hx_tmp) {
HXLINE( 188)				this->_timesJumped++;
HXLINE( 189)				this->_jumpTime = ( (Float)(0) );
HXLINE( 190)				this->_onLadder = false;
            			}
            		}
HXLINE( 195)		bool _hx_tmp;
HXDLIN( 195)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->_jumpKeys,1)) {
HXLINE( 195)			_hx_tmp = (this->_jumpTime >= 0);
            		}
            		else {
HXLINE( 195)			_hx_tmp = false;
            		}
HXDLIN( 195)		if (_hx_tmp) {
HXLINE( 197)			this->climbing = false;
HXLINE( 198)			 ::Player _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)			_hx_tmp->_jumpTime = (_hx_tmp->_jumpTime + elapsed);
HXLINE( 201)			if ((this->_jumpTime > ((Float)0.25))) {
HXLINE( 203)				this->_jumpTime = ( (Float)(-1) );
            			}
            			else {
HXLINE( 205)				if ((this->_jumpTime > 0)) {
HXLINE( 207)					this->velocity->set_y((((Float)-0.6) * this->maxVelocity->y));
            				}
            			}
            		}
            		else {
HXLINE( 211)			this->_jumpTime = ((Float)-1.0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,jump,(void))

void Player_obj::shoot(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_215_shoot)
HXLINE( 217)		int bulletX = ::Math_obj::floor(this->x);
HXLINE( 218)		int bulletY = ::Math_obj::floor((this->y + 4));
HXLINE( 219)		int bXVeloc = 0;
HXLINE( 220)		int bYVeloc = 0;
HXLINE( 222)		if ((this->_cooldown >= ((Float)0.4))) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			 ::Bullet _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_224_shoot)
HXLINE( 224)				return  ::Bullet_obj::__alloc( HX_CTX );
            			}
            			HX_END_LOCAL_FUNC0(return)

HXLINE( 224)			this->_blt = this->_bullets->recycle(null(), ::Dynamic(new _hx_Closure_0()),null(),null()).StaticCast<  ::Bullet >();
HXLINE( 226)			if (::hx::IsNotNull( this->_blt )) {
HXLINE( 228)				if (this->flipX) {
HXLINE( 231)					bulletX = (bulletX - ::Math_obj::floor((this->_blt->get_width() - ( (Float)(8) ))));
HXLINE( 232)					bXVeloc = -200;
            				}
            				else {
HXLINE( 236)					bulletX = (bulletX + ::Math_obj::floor((this->get_width() - ( (Float)(8) ))));
HXLINE( 237)					bXVeloc = 200;
            				}
HXLINE( 240)				this->_blt->shoot(bulletX,bulletY,bXVeloc,bYVeloc);
HXLINE( 242)				this->_cooldown = ( (Float)(0) );
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,shoot,(void))

void Player_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_248_kill)
HXLINE( 249)		if (!(this->alive)) {
HXLINE( 251)			return;
            		}
HXLINE( 254)		this->super::kill();
HXLINE( 256)		::flixel::FlxG_obj::cameras->shake(((Float)0.005),((Float)0.35),null(),null(),null());
HXLINE( 257)		::flixel::FlxG_obj::cameras->flash(-2410972,((Float)0.35),null(),null());
HXLINE( 259)		if (::hx::IsNotNull( this->_gibs )) {
HXLINE( 261)			this->_gibs->focusOn(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 262)			this->_gibs->start(true,((Float)2.80),null());
            		}
            	}


int Player_obj::RUN_SPEED;

int Player_obj::GRAVITY;

int Player_obj::JUMP_SPEED;

int Player_obj::JUMPS_ALLOWED;

int Player_obj::BULLET_SPEED;

Float Player_obj::GUN_DELAY;


::hx::ObjectPtr< Player_obj > Player_obj::__new(int X,int Y, ::PlayState Parent, ::flixel::effects::particles::FlxTypedEmitter Gibs, ::flixel::group::FlxTypedGroup Bullets) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(X,Y,Parent,Gibs,Bullets);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx,int X,int Y, ::PlayState Parent, ::flixel::effects::particles::FlxTypedEmitter Gibs, ::flixel::group::FlxTypedGroup Bullets) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(X,Y,Parent,Gibs,Bullets);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(_gibs,"_gibs");
	HX_MARK_MEMBER_NAME(_bullets,"_bullets");
	HX_MARK_MEMBER_NAME(_blt,"_blt");
	HX_MARK_MEMBER_NAME(_cooldown,"_cooldown");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_jumpTime,"_jumpTime");
	HX_MARK_MEMBER_NAME(_timesJumped,"_timesJumped");
	HX_MARK_MEMBER_NAME(_jumpKeys,"_jumpKeys");
	HX_MARK_MEMBER_NAME(_xgridleft,"_xgridleft");
	HX_MARK_MEMBER_NAME(_xgridright,"_xgridright");
	HX_MARK_MEMBER_NAME(_ygrid,"_ygrid");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(climbing,"climbing");
	HX_MARK_MEMBER_NAME(_onLadder,"_onLadder");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_gibs,"_gibs");
	HX_VISIT_MEMBER_NAME(_bullets,"_bullets");
	HX_VISIT_MEMBER_NAME(_blt,"_blt");
	HX_VISIT_MEMBER_NAME(_cooldown,"_cooldown");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_jumpTime,"_jumpTime");
	HX_VISIT_MEMBER_NAME(_timesJumped,"_timesJumped");
	HX_VISIT_MEMBER_NAME(_jumpKeys,"_jumpKeys");
	HX_VISIT_MEMBER_NAME(_xgridleft,"_xgridleft");
	HX_VISIT_MEMBER_NAME(_xgridright,"_xgridright");
	HX_VISIT_MEMBER_NAME(_ygrid,"_ygrid");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(climbing,"climbing");
	HX_VISIT_MEMBER_NAME(_onLadder,"_onLadder");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_blt") ) { return ::hx::Val( _blt ); }
		if (HX_FIELD_EQ(inName,"jump") ) { return ::hx::Val( jump_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_gibs") ) { return ::hx::Val( _gibs ); }
		if (HX_FIELD_EQ(inName,"climb") ) { return ::hx::Val( climb_dyn() ); }
		if (HX_FIELD_EQ(inName,"shoot") ) { return ::hx::Val( shoot_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ygrid") ) { return ::hx::Val( _ygrid ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return ::hx::Val( _parent ); }
		if (HX_FIELD_EQ(inName,"_player") ) { return ::hx::Val( _player ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { return ::hx::Val( _bullets ); }
		if (HX_FIELD_EQ(inName,"climbing") ) { return ::hx::Val( climbing ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cooldown") ) { return ::hx::Val( _cooldown ); }
		if (HX_FIELD_EQ(inName,"_jumpTime") ) { return ::hx::Val( _jumpTime ); }
		if (HX_FIELD_EQ(inName,"_jumpKeys") ) { return ::hx::Val( _jumpKeys ); }
		if (HX_FIELD_EQ(inName,"_onLadder") ) { return ::hx::Val( _onLadder ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_xgridleft") ) { return ::hx::Val( _xgridleft ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_xgridright") ) { return ::hx::Val( _xgridright ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timesJumped") ) { return ::hx::Val( _timesJumped ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_blt") ) { _blt=inValue.Cast<  ::Bullet >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_gibs") ) { _gibs=inValue.Cast<  ::flixel::effects::particles::FlxTypedEmitter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ygrid") ) { _ygrid=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast<  ::PlayState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bullets") ) { _bullets=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"climbing") ) { climbing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_cooldown") ) { _cooldown=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpTime") ) { _jumpTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpKeys") ) { _jumpKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onLadder") ) { _onLadder=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_xgridleft") ) { _xgridleft=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_xgridright") ) { _xgridright=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timesJumped") ) { _timesJumped=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_gibs",52,18,76,f7));
	outFields->push(HX_("_bullets",72,c1,a7,63));
	outFields->push(HX_("_blt",6b,00,16,3f));
	outFields->push(HX_("_cooldown",0a,43,38,41));
	outFields->push(HX_("_parent",c9,16,f5,5b));
	outFields->push(HX_("_jumpTime",7a,c3,65,41));
	outFields->push(HX_("_timesJumped",34,af,de,f5));
	outFields->push(HX_("_jumpKeys",61,d9,6f,3b));
	outFields->push(HX_("_xgridleft",06,6e,e1,9b));
	outFields->push(HX_("_xgridright",fd,e4,6b,40));
	outFields->push(HX_("_ygrid",00,4f,cf,eb));
	outFields->push(HX_("_player",00,fd,2f,a6));
	outFields->push(HX_("climbing",0d,4f,cd,a8));
	outFields->push(HX_("_onLadder",c0,ba,11,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::effects::particles::FlxTypedEmitter */ ,(int)offsetof(Player_obj,_gibs),HX_("_gibs",52,18,76,f7)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Player_obj,_bullets),HX_("_bullets",72,c1,a7,63)},
	{::hx::fsObject /*  ::Bullet */ ,(int)offsetof(Player_obj,_blt),HX_("_blt",6b,00,16,3f)},
	{::hx::fsFloat,(int)offsetof(Player_obj,_cooldown),HX_("_cooldown",0a,43,38,41)},
	{::hx::fsObject /*  ::PlayState */ ,(int)offsetof(Player_obj,_parent),HX_("_parent",c9,16,f5,5b)},
	{::hx::fsFloat,(int)offsetof(Player_obj,_jumpTime),HX_("_jumpTime",7a,c3,65,41)},
	{::hx::fsInt,(int)offsetof(Player_obj,_timesJumped),HX_("_timesJumped",34,af,de,f5)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Player_obj,_jumpKeys),HX_("_jumpKeys",61,d9,6f,3b)},
	{::hx::fsInt,(int)offsetof(Player_obj,_xgridleft),HX_("_xgridleft",06,6e,e1,9b)},
	{::hx::fsInt,(int)offsetof(Player_obj,_xgridright),HX_("_xgridright",fd,e4,6b,40)},
	{::hx::fsInt,(int)offsetof(Player_obj,_ygrid),HX_("_ygrid",00,4f,cf,eb)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Player_obj,_player),HX_("_player",00,fd,2f,a6)},
	{::hx::fsBool,(int)offsetof(Player_obj,climbing),HX_("climbing",0d,4f,cd,a8)},
	{::hx::fsBool,(int)offsetof(Player_obj,_onLadder),HX_("_onLadder",c0,ba,11,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Player_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Player_obj::RUN_SPEED,HX_("RUN_SPEED",13,cc,dc,35)},
	{::hx::fsInt,(void *) &Player_obj::GRAVITY,HX_("GRAVITY",2e,42,d3,f7)},
	{::hx::fsInt,(void *) &Player_obj::JUMP_SPEED,HX_("JUMP_SPEED",16,0a,cf,cd)},
	{::hx::fsInt,(void *) &Player_obj::JUMPS_ALLOWED,HX_("JUMPS_ALLOWED",2e,8f,5d,5f)},
	{::hx::fsInt,(void *) &Player_obj::BULLET_SPEED,HX_("BULLET_SPEED",6a,72,dd,7d)},
	{::hx::fsFloat,(void *) &Player_obj::GUN_DELAY,HX_("GUN_DELAY",04,89,3a,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("_gibs",52,18,76,f7),
	HX_("_bullets",72,c1,a7,63),
	HX_("_blt",6b,00,16,3f),
	HX_("_cooldown",0a,43,38,41),
	HX_("_parent",c9,16,f5,5b),
	HX_("_jumpTime",7a,c3,65,41),
	HX_("_timesJumped",34,af,de,f5),
	HX_("_jumpKeys",61,d9,6f,3b),
	HX_("_xgridleft",06,6e,e1,9b),
	HX_("_xgridright",fd,e4,6b,40),
	HX_("_ygrid",00,4f,cf,eb),
	HX_("_player",00,fd,2f,a6),
	HX_("climbing",0d,4f,cd,a8),
	HX_("_onLadder",c0,ba,11,72),
	HX_("update",09,86,05,87),
	HX_("climb",f5,84,5e,48),
	HX_("jump",ee,c4,69,46),
	HX_("shoot",df,81,27,7c),
	HX_("kill",9e,df,09,47),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(Player_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::JUMPS_ALLOWED,"JUMPS_ALLOWED");
	HX_MARK_MEMBER_NAME(Player_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(Player_obj::GUN_DELAY,"GUN_DELAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(Player_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::JUMPS_ALLOWED,"JUMPS_ALLOWED");
	HX_VISIT_MEMBER_NAME(Player_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(Player_obj::GUN_DELAY,"GUN_DELAY");
};

#endif

::hx::Class Player_obj::__mClass;

static ::String Player_obj_sStaticFields[] = {
	HX_("RUN_SPEED",13,cc,dc,35),
	HX_("GRAVITY",2e,42,d3,f7),
	HX_("JUMP_SPEED",16,0a,cf,cd),
	HX_("JUMPS_ALLOWED",2e,8f,5d,5f),
	HX_("BULLET_SPEED",6a,72,dd,7d),
	HX_("GUN_DELAY",04,89,3a,7b),
	::String(null())
};

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Player_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Player_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_14_boot)
HXDLIN(  14)		RUN_SPEED = 90;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_15_boot)
HXDLIN(  15)		GRAVITY = 620;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_16_boot)
HXDLIN(  16)		JUMP_SPEED = 250;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_17_boot)
HXDLIN(  17)		JUMPS_ALLOWED = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_18_boot)
HXDLIN(  18)		BULLET_SPEED = 200;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_19_boot)
HXDLIN(  19)		GUN_DELAY = ((Float)0.4);
            	}
}

