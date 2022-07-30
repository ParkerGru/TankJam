#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_916b41f5f19492cb_13_new,"Bullet","new",0xf3208054,"Bullet.new","Bullet.hx",13,0xb42ce59c)
HX_LOCAL_STACK_FRAME(_hx_pos_916b41f5f19492cb_22_update,"Bullet","update",0xa9584695,"Bullet.update","Bullet.hx",22,0xb42ce59c)
HX_LOCAL_STACK_FRAME(_hx_pos_916b41f5f19492cb_50_shoot,"Bullet","shoot",0x3f7716d3,"Bullet.shoot","Bullet.hx",50,0xb42ce59c)
HX_LOCAL_STACK_FRAME(_hx_pos_916b41f5f19492cb_60_angleshoot,"Bullet","angleshoot",0x2b4b77b8,"Bullet.angleshoot","Bullet.hx",60,0xb42ce59c)

void Bullet_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_916b41f5f19492cb_13_new)
HXLINE(  14)		super::__construct(null(),null(),null());
HXLINE(  16)		this->loadGraphic(HX_("assets/art/bullet.png",35,f7,2d,c6),false,null(),null(),null(),null());
HXLINE(  18)		this->set_exists(false);
            	}

Dynamic Bullet_obj::__CreateEmpty() { return new Bullet_obj; }

void *Bullet_obj::_hx_vtable = 0;

Dynamic Bullet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bullet_obj > _hx_result = new Bullet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Bullet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6a6fc922) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x6a6fc922;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Bullet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_916b41f5f19492cb_22_update)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if (!(this->alive)) {
HXLINE(  24)			_hx_tmp = this->animation->get_finished();
            		}
            		else {
HXLINE(  24)			_hx_tmp = false;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  27)			this->set_exists(false);
            		}
HXLINE(  30)		bool _hx_tmp1;
HXDLIN(  30)		if (!((this->getScreenPosition(null(),null())->x < -64))) {
HXLINE(  30)			Float _hx_tmp = this->getScreenPosition(null(),null())->x;
HXDLIN(  30)			_hx_tmp1 = (_hx_tmp > (::flixel::FlxG_obj::width + 64));
            		}
            		else {
HXLINE(  30)			_hx_tmp1 = true;
            		}
HXDLIN(  30)		if (_hx_tmp1) {
HXLINE(  33)			this->kill();
            		}
            		else {
HXLINE(  35)			if ((this->touching != 0)) {
HXLINE(  38)				this->kill();
            			}
            			else {
HXLINE(  42)				this->super::update(elapsed);
            			}
            		}
            	}


void Bullet_obj::shoot(int X,int Y,int VelocityX,int VelocityY){
            	HX_STACKFRAME(&_hx_pos_916b41f5f19492cb_50_shoot)
HXLINE(  52)		this->super::reset(X,Y);
HXLINE(  54)		this->set_solid(true);
HXLINE(  55)		this->velocity->set_x(( (Float)(VelocityX) ));
HXLINE(  56)		this->velocity->set_y(( (Float)(VelocityY) ));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,shoot,(void))

void Bullet_obj::angleshoot(int X,int Y,int Speed, ::flixel::math::FlxPoint Target){
            	HX_STACKFRAME(&_hx_pos_916b41f5f19492cb_60_angleshoot)
HXLINE(  61)		this->super::reset(X,Y);
HXLINE(  63)		this->set_solid(true);
HXLINE(  64)		Float Target1 = Target->y;
HXDLIN(  64)		Float rangle = this->y;
HXDLIN(  64)		Float rangle1 = (Target1 - (rangle + (this->get_height() / ( (Float)(2) ))));
HXDLIN(  64)		Float Target2 = Target->x;
HXDLIN(  64)		Float rangle2 = this->x;
HXDLIN(  64)		Float rangle3 = ::Math_obj::atan2(rangle1,(Target2 - (rangle2 + (this->get_width() / ( (Float)(2) )))));
HXLINE(  65)		this->velocity->set_x((::Math_obj::cos(rangle3) * ( (Float)(Speed) )));
HXLINE(  66)		this->velocity->set_y((::Math_obj::sin(rangle3) * ( (Float)(Speed) )));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,angleshoot,(void))


::hx::ObjectPtr< Bullet_obj > Bullet_obj::__new() {
	::hx::ObjectPtr< Bullet_obj > __this = new Bullet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Bullet_obj > Bullet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Bullet_obj *__this = (Bullet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Bullet_obj), true, "Bullet"));
	*(void **)__this = Bullet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Bullet_obj::Bullet_obj()
{
}

::hx::Val Bullet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return ::hx::Val( shoot_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleshoot") ) { return ::hx::Val( angleshoot_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Bullet_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Bullet_obj_sStaticStorageInfo = 0;
#endif

static ::String Bullet_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("shoot",df,81,27,7c),
	HX_("angleshoot",2c,81,7f,ec),
	::String(null()) };

::hx::Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	Bullet_obj _hx_dummy;
	Bullet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Bullet",62,06,25,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Bullet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Bullet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bullet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bullet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

