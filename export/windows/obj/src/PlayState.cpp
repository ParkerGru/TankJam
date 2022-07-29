#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_20_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",20,0xb30d7781)
static const int _hx_array_data_46c2835d_1[] = {
	(int)32,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_44_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",44,0xb30d7781)
static const int _hx_array_data_46c2835d_3[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_46c2835d_4[] = {
	(int)13,(int)14,(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)22,(int)23,
};
static const int _hx_array_data_46c2835d_5[] = {
	(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,(int)30,(int)31,(int)32,(int)33,(int)34,
};
static const int _hx_array_data_46c2835d_6[] = {
	(int)35,(int)36,(int)37,(int)38,(int)39,(int)40,(int)41,(int)42,(int)43,(int)44,(int)45,(int)46,(int)47,(int)48,(int)49,(int)50,(int)51,(int)52,(int)53,
};
static const int _hx_array_data_46c2835d_7[] = {
	(int)54,(int)55,(int)56,(int)57,(int)58,(int)59,(int)60,(int)61,(int)62,(int)63,(int)64,(int)65,(int)66,(int)67,(int)68,(int)69,(int)70,
};
static const int _hx_array_data_46c2835d_8[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_46c2835d_9[] = {
	(int)13,(int)14,(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)22,(int)23,
};
static const int _hx_array_data_46c2835d_10[] = {
	(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,(int)30,(int)31,(int)32,(int)33,(int)34,
};
static const int _hx_array_data_46c2835d_11[] = {
	(int)35,(int)36,(int)37,(int)38,(int)39,(int)40,(int)41,(int)42,(int)43,(int)44,(int)45,(int)46,(int)47,(int)48,(int)49,(int)50,(int)51,(int)52,(int)53,
};
static const int _hx_array_data_46c2835d_12[] = {
	(int)54,(int)55,(int)56,(int)57,(int)58,(int)59,(int)60,(int)61,(int)62,(int)63,(int)64,(int)65,(int)66,(int)67,(int)68,(int)69,(int)70,
};
static const int _hx_array_data_46c2835d_13[] = {
	(int)-9580554,(int)-13421773,
};
static const int _hx_array_data_46c2835d_14[] = {
	(int)-13421773,(int)-16777216,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_107_jump,"PlayState","jump",0xac4b9f9f,"PlayState.jump","PlayState.hx",107,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_143_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",143,0xb30d7781)
static const int _hx_array_data_46c2835d_17[] = {
	(int)39,(int)68,
};
static const int _hx_array_data_46c2835d_18[] = {
	(int)37,(int)65,
};
static const int _hx_array_data_46c2835d_19[] = {
	(int)38,(int)87,
};
static const int _hx_array_data_46c2835d_20[] = {
	(int)40,(int)83,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_230_bakeColors,"PlayState","bakeColors",0x613be91a,"PlayState.bakeColors","PlayState.hx",230,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_22_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",22,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_23_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",23,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_25_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",25,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_26_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",26,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_27_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",27,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_28_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",28,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_20_new)
HXLINE(  38)		this->_ygrid = 0;
HXLINE(  37)		this->_xgridright = 0;
HXLINE(  36)		this->_xgridleft = 0;
HXLINE(  34)		this->_jumpKeys = ::Array_obj< int >::fromData( _hx_array_data_46c2835d_1,1);
HXLINE(  33)		this->_timesJumped = 0;
HXLINE(  32)		this->_jumpTime = ((Float)-1);
HXLINE(  30)		this->_onLadder = false;
HXLINE(  29)		this->climbing = false;
HXLINE(  24)		this->GRAVITY = 620;
HXLINE(  20)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_44_create)
HXLINE(  45)		this->guy =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  46)		 ::flixel::FlxSprite _hx_tmp = this->guy;
HXDLIN(  46)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(((HX_("assets/images/",ab,47,cb,9f) + HX_("steve",d3,80,0e,84)) + HX_(".png",3b,2d,bd,1e)),((HX_("assets/images/",ab,47,cb,9f) + HX_("steve",d3,80,0e,84)) + HX_(".xml",69,3e,c3,1e))));
HXLINE(  47)		this->guy->animation->addByIndices(HX_("idle",14,a7,b3,45),HX_("steve",d3,80,0e,84),::Array_obj< int >::fromData( _hx_array_data_46c2835d_3,13),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  48)		this->guy->animation->addByIndices(HX_("look_up",7b,db,27,1d),HX_("steve",d3,80,0e,84),::Array_obj< int >::fromData( _hx_array_data_46c2835d_4,10),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  49)		this->guy->animation->addByIndices(HX_("crouch",7a,a7,ba,82),HX_("steve",d3,80,0e,84),::Array_obj< int >::fromData( _hx_array_data_46c2835d_5,11),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  50)		this->guy->animation->addByIndices(HX_("jump",ee,c4,69,46),HX_("steve",d3,80,0e,84),::Array_obj< int >::fromData( _hx_array_data_46c2835d_6,19),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  51)		this->guy->animation->addByIndices(HX_("run",4b,e7,56,00),HX_("steve",d3,80,0e,84),::Array_obj< int >::fromData( _hx_array_data_46c2835d_7,17),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  52)		this->guy->set_antialiasing(false);
HXLINE(  53)		this->guy->drag->set(1200,1200);
HXLINE(  54)		this->guy->scale->set(((Float)0.3),((Float)0.3));
HXLINE(  55)		this->guy->maxVelocity->set(150,250);
HXLINE(  56)		this->guy->acceleration->set_y(( (Float)(this->GRAVITY) ));
HXLINE(  58)		this->guy2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  59)		 ::flixel::FlxSprite _hx_tmp1 = this->guy2;
HXDLIN(  59)		_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(((HX_("assets/images/",ab,47,cb,9f) + HX_("John",2b,5f,3e,31)) + HX_(".png",3b,2d,bd,1e)),((HX_("assets/images/",ab,47,cb,9f) + HX_("John",2b,5f,3e,31)) + HX_(".xml",69,3e,c3,1e))));
HXLINE(  60)		this->guy2->animation->addByIndices(HX_("idle",14,a7,b3,45),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_46c2835d_8,13),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  61)		this->guy2->animation->addByIndices(HX_("look_up",7b,db,27,1d),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_46c2835d_9,10),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  62)		this->guy2->animation->addByIndices(HX_("crouch",7a,a7,ba,82),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_46c2835d_10,11),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  63)		this->guy2->animation->addByIndices(HX_("jump",ee,c4,69,46),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_46c2835d_11,19),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  64)		this->guy2->animation->addByIndices(HX_("run",4b,e7,56,00),HX_("John",2b,5f,3e,31),::Array_obj< int >::fromData( _hx_array_data_46c2835d_12,17),HX_("",00,00,00,00),24,true,null(),null());
HXLINE(  65)		this->guy2->set_antialiasing(false);
HXLINE(  66)		this->guy2->drag->set(1200,1200);
HXLINE(  67)		this->guy2->scale->set(((Float)0.3),((Float)0.3));
HXLINE(  68)		this->guy2->maxVelocity->set(150,250);
HXLINE(  69)		this->guy2->acceleration->set_y(( (Float)(this->GRAVITY) ));
HXLINE(  74)		 ::flixel::FlxSprite sky = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,::Array_obj< int >::fromData( _hx_array_data_46c2835d_13,2),16,null(),null());
HXLINE(  75)		sky->scrollFactor->set(null(),null());
HXLINE(  76)		this->add(sky);
HXLINE(  79)		 ::flixel::FlxSprite _sprSolid = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(::flixel::FlxG_obj::width,64,::Array_obj< int >::fromData( _hx_array_data_46c2835d_14,2),8,null(),null());
HXLINE(  80)		_sprSolid->set_y(( (Float)((::flixel::FlxG_obj::height - 64)) ));
HXLINE(  81)		_sprSolid->scrollFactor->set(null(),null());
HXLINE(  82)		this->add(_sprSolid);
HXLINE(  85)		this->_ground =  ::flixel::tile::FlxTileblock_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 64),(::flixel::FlxG_obj::width * 4),64);
HXLINE(  86)		this->_ground->loadTiles(HX_("assets/tiles.png",74,fd,69,a9),16,16,1);
HXLINE(  87)		this->add(this->_ground);
HXLINE(  92)		this->add(this->guy);
HXLINE(  93)		this->add(this->guy2);
HXLINE(  94)		this->guy2->set_flipX(true);
HXLINE(  95)		::flixel::FlxG_obj::camera->follow(this->guy,null(),null());
HXLINE(  96)		::flixel::FlxG_obj::camera->setScrollBounds(0,(::flixel::FlxG_obj::width * 4),0,::flixel::FlxG_obj::height);
HXLINE( 103)		this->super::create();
            	}


void PlayState_obj::jump(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_107_jump)
HXLINE( 108)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->_jumpKeys,2)) {
HXLINE( 110)			bool _hx_tmp;
HXDLIN( 110)			if ((this->guy->velocity->y != 0)) {
HXLINE( 110)				_hx_tmp = (this->_timesJumped < 1);
            			}
            			else {
HXLINE( 110)				_hx_tmp = true;
            			}
HXDLIN( 110)			if (_hx_tmp) {
HXLINE( 112)				this->guy->animation->play(HX_("jump",ee,c4,69,46),null(),null(),null());
HXLINE( 113)				this->_timesJumped++;
HXLINE( 114)				this->_jumpTime = ( (Float)(0) );
HXLINE( 115)				this->_onLadder = false;
            			}
            		}
HXLINE( 120)		bool _hx_tmp;
HXDLIN( 120)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->_jumpKeys,1)) {
HXLINE( 120)			_hx_tmp = (this->_jumpTime >= 0);
            		}
            		else {
HXLINE( 120)			_hx_tmp = false;
            		}
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 122)			this->climbing = false;
HXLINE( 123)			 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 123)			_hx_tmp->_jumpTime = (_hx_tmp->_jumpTime + elapsed);
HXLINE( 126)			if ((this->_jumpTime > ((Float)0.25))) {
HXLINE( 128)				this->_jumpTime = ( (Float)(-1) );
            			}
            			else {
HXLINE( 130)				if ((this->_jumpTime > 0)) {
HXLINE( 132)					this->guy->velocity->set_y((((Float)-0.6) * this->guy->maxVelocity->y));
            				}
            			}
            		}
            		else {
HXLINE( 136)			this->_jumpTime = ((Float)-1.0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,jump,(void))

void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_143_update)
HXLINE( 144)		bool jumping = false;
HXLINE( 145)		this->super::update(elapsed);
HXLINE( 147)		this->guy->acceleration->set_x(( (Float)(0) ));
HXLINE( 148)		this->guy2->acceleration->set_x(( (Float)(0) ));
HXLINE( 149)		this->guy->acceleration->set_y(( (Float)(this->GRAVITY) ));
HXLINE( 151)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_17,2),1)) {
HXLINE( 152)			this->guy->set_flipX(false);
HXLINE( 153)			this->guy->velocity->set_x(( (Float)(150) ));
            		}
            		else {
HXLINE( 156)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_18,2),1)) {
HXLINE( 158)				this->guy->set_flipX(true);
HXLINE( 159)				this->guy->velocity->set_x(( (Float)(-150) ));
            			}
            		}
HXLINE( 162)		this->jump(elapsed);
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (!((this->guy->velocity->x > 0))) {
HXLINE( 164)			_hx_tmp = (this->guy->velocity->x < 0);
            		}
            		else {
HXLINE( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 166)			if (!(jumping)) {
HXLINE( 167)				this->guy->animation->play(HX_("run",4b,e7,56,00),null(),null(),null());
            			}
            			else {
HXLINE( 170)				this->guy->animation->play(HX_("jump",ee,c4,69,46),null(),null(),null());
            			}
            		}
HXLINE( 175)		bool _hx_tmp1;
HXDLIN( 175)		if ((this->guy->velocity->x == 0)) {
HXLINE( 175)			_hx_tmp1 = (this->guy->velocity->y == 0);
            		}
            		else {
HXLINE( 175)			_hx_tmp1 = false;
            		}
HXDLIN( 175)		if (_hx_tmp1) {
HXLINE( 177)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_19,2),1)) {
HXLINE( 179)				if (this->guy->animation->_curAnim->finished) {
HXLINE( 181)					this->guy->animation->finish();
            				}
            				else {
HXLINE( 185)					this->guy->animation->play(HX_("look_up",7b,db,27,1d),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 188)				if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_20,2),1)) {
HXLINE( 190)					if (this->guy->animation->_curAnim->finished) {
HXLINE( 192)						this->guy->animation->finish();
HXLINE( 193)						jumping = false;
            					}
            					else {
HXLINE( 196)						this->guy->animation->play(HX_("crouch",7a,a7,ba,82),null(),null(),null());
HXLINE( 197)						jumping = false;
            					}
            				}
            				else {
HXLINE( 204)					this->guy->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 205)					jumping = false;
            				}
            			}
            		}
HXLINE( 209)		 ::Dynamic NotifyCallback = null();
HXDLIN( 209)		if (::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->guy) ),( ( ::flixel::FlxBasic)(this->_ground) ),NotifyCallback,::flixel::FlxObject_obj::separate_dyn())) {
HXLINE( 211)			this->guy->acceleration->set_y(( (Float)(0) ));
            		}
HXLINE( 214)		 ::Dynamic NotifyCallback1 = null();
HXDLIN( 214)		if (::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->guy2) ),( ( ::flixel::FlxBasic)(this->_ground) ),NotifyCallback1,::flixel::FlxObject_obj::separate_dyn())) {
HXLINE( 216)			this->guy2->acceleration->set_y(( (Float)(0) ));
            		}
            	}


::String PlayState_obj::bakeColors(int color,::String asset, ::Dynamic __o_alpha){
            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = 1;
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_230_bakeColors)
HXLINE( 231)		 ::openfl::display::BitmapData bmpData = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(asset)) )->bitmap->clone();
HXLINE( 233)		 ::openfl::geom::ColorTransform colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 234)		colorTransform->redMultiplier = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 235)		colorTransform->greenMultiplier = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 236)		colorTransform->blueMultiplier = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 237)		colorTransform->alphaMultiplier = ( (Float)(alpha) );
HXLINE( 239)		bmpData->colorTransform(bmpData->rect,colorTransform);
HXLINE( 240)		::String key = ((asset + HX_("_color=",19,d7,fd,34)) + color);
HXLINE( 241)		::flixel::FlxG_obj::bitmap->add(bmpData,false,key);
HXLINE( 242)		return key;
            	}


HX_DEFINE_DYNAMIC_FUNC3(PlayState_obj,bakeColors,return )

int PlayState_obj::GUY_SPEED;

int PlayState_obj::RUN_SPEED;

int PlayState_obj::JUMP_SPEED;

int PlayState_obj::JUMPS_ALLOWED;

int PlayState_obj::BULLET_SPEED;

Float PlayState_obj::GUN_DELAY;


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_MARK_MEMBER_NAME(climbing,"climbing");
	HX_MARK_MEMBER_NAME(_onLadder,"_onLadder");
	HX_MARK_MEMBER_NAME(_jumpTime,"_jumpTime");
	HX_MARK_MEMBER_NAME(_timesJumped,"_timesJumped");
	HX_MARK_MEMBER_NAME(_jumpKeys,"_jumpKeys");
	HX_MARK_MEMBER_NAME(_xgridleft,"_xgridleft");
	HX_MARK_MEMBER_NAME(_xgridright,"_xgridright");
	HX_MARK_MEMBER_NAME(_ygrid,"_ygrid");
	HX_MARK_MEMBER_NAME(guy,"guy");
	HX_MARK_MEMBER_NAME(guy2,"guy2");
	HX_MARK_MEMBER_NAME(_ground,"_ground");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(GRAVITY,"GRAVITY");
	HX_VISIT_MEMBER_NAME(climbing,"climbing");
	HX_VISIT_MEMBER_NAME(_onLadder,"_onLadder");
	HX_VISIT_MEMBER_NAME(_jumpTime,"_jumpTime");
	HX_VISIT_MEMBER_NAME(_timesJumped,"_timesJumped");
	HX_VISIT_MEMBER_NAME(_jumpKeys,"_jumpKeys");
	HX_VISIT_MEMBER_NAME(_xgridleft,"_xgridleft");
	HX_VISIT_MEMBER_NAME(_xgridright,"_xgridright");
	HX_VISIT_MEMBER_NAME(_ygrid,"_ygrid");
	HX_VISIT_MEMBER_NAME(guy,"guy");
	HX_VISIT_MEMBER_NAME(guy2,"guy2");
	HX_VISIT_MEMBER_NAME(_ground,"_ground");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"guy") ) { return ::hx::Val( guy ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guy2") ) { return ::hx::Val( guy2 ); }
		if (HX_FIELD_EQ(inName,"jump") ) { return ::hx::Val( jump_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ygrid") ) { return ::hx::Val( _ygrid ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { return ::hx::Val( GRAVITY ); }
		if (HX_FIELD_EQ(inName,"_ground") ) { return ::hx::Val( _ground ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"climbing") ) { return ::hx::Val( climbing ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onLadder") ) { return ::hx::Val( _onLadder ); }
		if (HX_FIELD_EQ(inName,"_jumpTime") ) { return ::hx::Val( _jumpTime ); }
		if (HX_FIELD_EQ(inName,"_jumpKeys") ) { return ::hx::Val( _jumpKeys ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_xgridleft") ) { return ::hx::Val( _xgridleft ); }
		if (HX_FIELD_EQ(inName,"bakeColors") ) { return ::hx::Val( bakeColors_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_xgridright") ) { return ::hx::Val( _xgridright ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timesJumped") ) { return ::hx::Val( _timesJumped ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"guy") ) { guy=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guy2") ) { guy2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ygrid") ) { _ygrid=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GRAVITY") ) { GRAVITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ground") ) { _ground=inValue.Cast<  ::flixel::tile::FlxTileblock >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"climbing") ) { climbing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onLadder") ) { _onLadder=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpTime") ) { _jumpTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpKeys") ) { _jumpKeys=inValue.Cast< ::Array< int > >(); return inValue; }
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

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("GRAVITY",2e,42,d3,f7));
	outFields->push(HX_("climbing",0d,4f,cd,a8));
	outFields->push(HX_("_onLadder",c0,ba,11,72));
	outFields->push(HX_("_jumpTime",7a,c3,65,41));
	outFields->push(HX_("_timesJumped",34,af,de,f5));
	outFields->push(HX_("_jumpKeys",61,d9,6f,3b));
	outFields->push(HX_("_xgridleft",06,6e,e1,9b));
	outFields->push(HX_("_xgridright",fd,e4,6b,40));
	outFields->push(HX_("_ygrid",00,4f,cf,eb));
	outFields->push(HX_("guy",8b,8e,4e,00));
	outFields->push(HX_("guy2",47,2b,6e,44));
	outFields->push(HX_("_ground",26,34,9f,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(PlayState_obj,GRAVITY),HX_("GRAVITY",2e,42,d3,f7)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,climbing),HX_("climbing",0d,4f,cd,a8)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,_onLadder),HX_("_onLadder",c0,ba,11,72)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,_jumpTime),HX_("_jumpTime",7a,c3,65,41)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,_timesJumped),HX_("_timesJumped",34,af,de,f5)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PlayState_obj,_jumpKeys),HX_("_jumpKeys",61,d9,6f,3b)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,_xgridleft),HX_("_xgridleft",06,6e,e1,9b)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,_xgridright),HX_("_xgridright",fd,e4,6b,40)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,_ygrid),HX_("_ygrid",00,4f,cf,eb)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,guy),HX_("guy",8b,8e,4e,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,guy2),HX_("guy2",47,2b,6e,44)},
	{::hx::fsObject /*  ::flixel::tile::FlxTileblock */ ,(int)offsetof(PlayState_obj,_ground),HX_("_ground",26,34,9f,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PlayState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PlayState_obj::GUY_SPEED,HX_("GUY_SPEED",53,63,e9,ee)},
	{::hx::fsInt,(void *) &PlayState_obj::RUN_SPEED,HX_("RUN_SPEED",13,cc,dc,35)},
	{::hx::fsInt,(void *) &PlayState_obj::JUMP_SPEED,HX_("JUMP_SPEED",16,0a,cf,cd)},
	{::hx::fsInt,(void *) &PlayState_obj::JUMPS_ALLOWED,HX_("JUMPS_ALLOWED",2e,8f,5d,5f)},
	{::hx::fsInt,(void *) &PlayState_obj::BULLET_SPEED,HX_("BULLET_SPEED",6a,72,dd,7d)},
	{::hx::fsFloat,(void *) &PlayState_obj::GUN_DELAY,HX_("GUN_DELAY",04,89,3a,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("GRAVITY",2e,42,d3,f7),
	HX_("climbing",0d,4f,cd,a8),
	HX_("_onLadder",c0,ba,11,72),
	HX_("_jumpTime",7a,c3,65,41),
	HX_("_timesJumped",34,af,de,f5),
	HX_("_jumpKeys",61,d9,6f,3b),
	HX_("_xgridleft",06,6e,e1,9b),
	HX_("_xgridright",fd,e4,6b,40),
	HX_("_ygrid",00,4f,cf,eb),
	HX_("guy",8b,8e,4e,00),
	HX_("guy2",47,2b,6e,44),
	HX_("_ground",26,34,9f,8a),
	HX_("create",fc,66,0f,7c),
	HX_("jump",ee,c4,69,46),
	HX_("update",09,86,05,87),
	HX_("bakeColors",a9,73,23,d5),
	::String(null()) };

static void PlayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::GUY_SPEED,"GUY_SPEED");
	HX_MARK_MEMBER_NAME(PlayState_obj::RUN_SPEED,"RUN_SPEED");
	HX_MARK_MEMBER_NAME(PlayState_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_MARK_MEMBER_NAME(PlayState_obj::JUMPS_ALLOWED,"JUMPS_ALLOWED");
	HX_MARK_MEMBER_NAME(PlayState_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_MARK_MEMBER_NAME(PlayState_obj::GUN_DELAY,"GUN_DELAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::GUY_SPEED,"GUY_SPEED");
	HX_VISIT_MEMBER_NAME(PlayState_obj::RUN_SPEED,"RUN_SPEED");
	HX_VISIT_MEMBER_NAME(PlayState_obj::JUMP_SPEED,"JUMP_SPEED");
	HX_VISIT_MEMBER_NAME(PlayState_obj::JUMPS_ALLOWED,"JUMPS_ALLOWED");
	HX_VISIT_MEMBER_NAME(PlayState_obj::BULLET_SPEED,"BULLET_SPEED");
	HX_VISIT_MEMBER_NAME(PlayState_obj::GUN_DELAY,"GUN_DELAY");
};

#endif

::hx::Class PlayState_obj::__mClass;

static ::String PlayState_obj_sStaticFields[] = {
	HX_("GUY_SPEED",53,63,e9,ee),
	HX_("RUN_SPEED",13,cc,dc,35),
	HX_("JUMP_SPEED",16,0a,cf,cd),
	HX_("JUMPS_ALLOWED",2e,8f,5d,5f),
	HX_("BULLET_SPEED",6a,72,dd,7d),
	HX_("GUN_DELAY",04,89,3a,7b),
	::String(null())
};

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlayState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlayState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlayState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_22_boot)
HXDLIN(  22)		GUY_SPEED = 150;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_23_boot)
HXDLIN(  23)		RUN_SPEED = 150;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_25_boot)
HXDLIN(  25)		JUMP_SPEED = 250;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_26_boot)
HXDLIN(  26)		JUMPS_ALLOWED = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_27_boot)
HXDLIN(  27)		BULLET_SPEED = 200;
            	}
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_28_boot)
HXDLIN(  28)		GUN_DELAY = ((Float)0.4);
            	}
}

