#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_223f15e5be8ee429_29_new,"flixel.input.FlxSwipe","new",0xecc12d70,"flixel.input.FlxSwipe.new","flixel/input/FlxSwipe.hx",29,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_39_toString,"flixel.input.FlxSwipe","toString",0xb726199c,"flixel.input.FlxSwipe.toString","flixel/input/FlxSwipe.hx",39,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_51_get_distance,"flixel.input.FlxSwipe","get_distance",0xd139c82e,"flixel.input.FlxSwipe.get_distance","flixel/input/FlxSwipe.hx",51,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_56_get_angle,"flixel.input.FlxSwipe","get_angle",0xc834293a,"flixel.input.FlxSwipe.get_angle","flixel/input/FlxSwipe.hx",56,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_61_get_duration,"flixel.input.FlxSwipe","get_duration",0x79ce444d,"flixel.input.FlxSwipe.get_duration","flixel/input/FlxSwipe.hx",61,0xe38cac7e)
namespace flixel{
namespace input{

void FlxSwipe_obj::__construct(int ID, ::flixel::math::FlxPoint StartPosition, ::flixel::math::FlxPoint EndPosition,int StartTimeInTicks){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_29_new)
HXLINE(  30)		this->ID = ID;
HXLINE(  31)		this->startPosition = StartPosition;
HXLINE(  32)		this->endPosition = EndPosition;
HXLINE(  33)		this->_startTimeInTicks = StartTimeInTicks;
HXLINE(  34)		this->_endTimeInTicks = ::flixel::FlxG_obj::game->ticks;
            	}

Dynamic FlxSwipe_obj::__CreateEmpty() { return new FlxSwipe_obj; }

void *FlxSwipe_obj::_hx_vtable = 0;

Dynamic FlxSwipe_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSwipe_obj > _hx_result = new FlxSwipe_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxSwipe_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37477ab6;
}

::String FlxSwipe_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_39_toString)
HXLINE(  40)		 ::Dynamic value = this->ID;
HXDLIN(  40)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  40)		_this->label = HX_("ID",db,3f,00,00);
HXDLIN(  40)		_this->value = value;
HXLINE(  41)		 ::Dynamic value1 = this->startPosition;
HXDLIN(  41)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  41)		_this1->label = HX_("start",62,74,0b,84);
HXDLIN(  41)		_this1->value = value1;
HXLINE(  42)		 ::Dynamic value2 = this->endPosition;
HXDLIN(  42)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  42)		_this2->label = HX_("end",db,03,4d,00);
HXDLIN(  42)		_this2->value = value2;
HXLINE(  43)		Float dx = (this->startPosition->x - this->endPosition->x);
HXDLIN(  43)		Float dy = (this->startPosition->y - this->endPosition->y);
HXDLIN(  43)		 ::Dynamic value3 = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
HXDLIN(  43)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  43)		_this3->label = HX_("distance",35,93,f9,6b);
HXDLIN(  43)		_this3->value = value3;
HXLINE(  44)		 ::Dynamic value4 = this->startPosition->angleBetween(this->endPosition);
HXDLIN(  44)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  44)		_this4->label = HX_("angle",d3,43,e2,22);
HXDLIN(  44)		_this4->value = value4;
HXLINE(  45)		 ::Dynamic value5 = (( (Float)((this->_endTimeInTicks - this->_startTimeInTicks)) ) / ( (Float)(1000) ));
HXDLIN(  45)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  45)		_this5->label = HX_("duration",54,0f,8e,14);
HXDLIN(  45)		_this5->value = value5;
HXLINE(  39)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,toString,return )

Float FlxSwipe_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_51_get_distance)
HXDLIN(  51)		Float dx = (this->startPosition->x - this->endPosition->x);
HXDLIN(  51)		Float dy = (this->startPosition->y - this->endPosition->y);
HXDLIN(  51)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_distance,return )

Float FlxSwipe_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_56_get_angle)
HXDLIN(  56)		return this->startPosition->angleBetween(this->endPosition);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_angle,return )

Float FlxSwipe_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_61_get_duration)
HXDLIN(  61)		return (( (Float)((this->_endTimeInTicks - this->_startTimeInTicks)) ) / ( (Float)(1000) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_duration,return )


::hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__new(int ID, ::flixel::math::FlxPoint StartPosition, ::flixel::math::FlxPoint EndPosition,int StartTimeInTicks) {
	::hx::ObjectPtr< FlxSwipe_obj > __this = new FlxSwipe_obj();
	__this->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return __this;
}

::hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__alloc(::hx::Ctx *_hx_ctx,int ID, ::flixel::math::FlxPoint StartPosition, ::flixel::math::FlxPoint EndPosition,int StartTimeInTicks) {
	FlxSwipe_obj *__this = (FlxSwipe_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSwipe_obj), true, "flixel.input.FlxSwipe"));
	*(void **)__this = FlxSwipe_obj::_hx_vtable;
	__this->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return __this;
}

FlxSwipe_obj::FlxSwipe_obj()
{
}

void FlxSwipe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSwipe);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	HX_MARK_MEMBER_NAME(endPosition,"endPosition");
	HX_MARK_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_MARK_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxSwipe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	HX_VISIT_MEMBER_NAME(endPosition,"endPosition");
	HX_VISIT_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_VISIT_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
}

::hx::Val FlxSwipe_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ::hx::Val( ID ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_angle() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_distance() ); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { return ::hx::Val( endPosition ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return ::hx::Val( get_distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return ::hx::Val( startPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { return ::hx::Val( _endTimeInTicks ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { return ::hx::Val( _startTimeInTicks ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSwipe_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { endPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { _endTimeInTicks=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { _startTimeInTicks=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSwipe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ID",db,3f,00,00));
	outFields->push(HX_("startPosition",2b,03,b6,cf));
	outFields->push(HX_("endPosition",a4,33,b9,82));
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("_startTimeInTicks",e1,34,b7,36));
	outFields->push(HX_("_endTimeInTicks",48,30,b2,c2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSwipe_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxSwipe_obj,ID),HX_("ID",db,3f,00,00)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSwipe_obj,startPosition),HX_("startPosition",2b,03,b6,cf)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSwipe_obj,endPosition),HX_("endPosition",a4,33,b9,82)},
	{::hx::fsInt,(int)offsetof(FlxSwipe_obj,_startTimeInTicks),HX_("_startTimeInTicks",e1,34,b7,36)},
	{::hx::fsInt,(int)offsetof(FlxSwipe_obj,_endTimeInTicks),HX_("_endTimeInTicks",48,30,b2,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSwipe_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSwipe_obj_sMemberFields[] = {
	HX_("ID",db,3f,00,00),
	HX_("startPosition",2b,03,b6,cf),
	HX_("endPosition",a4,33,b9,82),
	HX_("_startTimeInTicks",e1,34,b7,36),
	HX_("_endTimeInTicks",48,30,b2,c2),
	HX_("toString",ac,d0,6e,38),
	HX_("get_distance",3e,47,13,21),
	HX_("get_angle",2a,a0,8b,66),
	HX_("get_duration",5d,c3,a7,c9),
	::String(null()) };

::hx::Class FlxSwipe_obj::__mClass;

void FlxSwipe_obj::__register()
{
	FlxSwipe_obj _hx_dummy;
	FlxSwipe_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxSwipe",7e,f5,e9,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSwipe_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSwipe_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSwipe_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSwipe_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
