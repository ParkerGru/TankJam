#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e74b11cf5585adaf_8_new,"flixel.input.FlxPointer","new",0x20c36c33,"flixel.input.FlxPointer.new","flixel/input/FlxPointer.hx",8,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_32_getWorldPosition,"flixel.input.FlxPointer","getWorldPosition",0x52927af2,"flixel.input.FlxPointer.getWorldPosition","flixel/input/FlxPointer.hx",32,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_56_getScreenPosition,"flixel.input.FlxPointer","getScreenPosition",0xae561a7e,"flixel.input.FlxPointer.getScreenPosition","flixel/input/FlxPointer.hx",56,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_81_getPositionInCameraView,"flixel.input.FlxPointer","getPositionInCameraView",0x0470c541,"flixel.input.FlxPointer.getPositionInCameraView","flixel/input/FlxPointer.hx",81,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_98_getPosition,"flixel.input.FlxPointer","getPosition",0x9fea8a32,"flixel.input.FlxPointer.getPosition","flixel/input/FlxPointer.hx",98,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_115_overlaps,"flixel.input.FlxPointer","overlaps",0xe0967a59,"flixel.input.FlxPointer.overlaps","flixel/input/FlxPointer.hx",115,0xe6a2529b)
static const bool _hx_array_data_c28ed6c1_6[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_123_overlaps,"flixel.input.FlxPointer","overlaps",0xe0967a59,"flixel.input.FlxPointer.overlaps","flixel/input/FlxPointer.hx",123,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_145_setGlobalScreenPositionUnsafe,"flixel.input.FlxPointer","setGlobalScreenPositionUnsafe",0x8f7aed13,"flixel.input.FlxPointer.setGlobalScreenPositionUnsafe","flixel/input/FlxPointer.hx",145,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_154_toString,"flixel.input.FlxPointer","toString",0xd3da77f9,"flixel.input.FlxPointer.toString","flixel/input/FlxPointer.hx",154,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_162_updatePositions,"flixel.input.FlxPointer","updatePositions",0xb47050b4,"flixel.input.FlxPointer.updatePositions","flixel/input/FlxPointer.hx",162,0xe6a2529b)
HX_LOCAL_STACK_FRAME(_hx_pos_e74b11cf5585adaf_19_boot,"flixel.input.FlxPointer","boot",0x825440ff,"flixel.input.FlxPointer.boot","flixel/input/FlxPointer.hx",19,0xe6a2529b)
namespace flixel{
namespace input{

void FlxPointer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_8_new)
HXLINE(  17)		this->_globalScreenY = 0;
HXLINE(  16)		this->_globalScreenX = 0;
HXLINE(  14)		this->screenY = 0;
HXLINE(  13)		this->screenX = 0;
HXLINE(  11)		this->y = 0;
HXLINE(  10)		this->x = 0;
            	}

Dynamic FlxPointer_obj::__CreateEmpty() { return new FlxPointer_obj; }

void *FlxPointer_obj::_hx_vtable = 0;

Dynamic FlxPointer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPointer_obj > _hx_result = new FlxPointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxPointer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62adae31;
}

 ::flixel::math::FlxPoint FlxPointer_obj::getWorldPosition( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_32_getWorldPosition)
HXLINE(  33)		if (::hx::IsNull( Camera )) {
HXLINE(  35)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  37)		if (::hx::IsNull( point )) {
HXLINE(  39)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  39)			point1->_inPool = false;
HXDLIN(  39)			point = point1;
            		}
HXLINE(  41)		this->getScreenPosition(Camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE(  42)		point->set_x((::flixel::input::FlxPointer_obj::_cachedPoint->x + Camera->scroll->x));
HXLINE(  43)		point->set_y((::flixel::input::FlxPointer_obj::_cachedPoint->y + Camera->scroll->y));
HXLINE(  44)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getWorldPosition,return )

 ::flixel::math::FlxPoint FlxPointer_obj::getScreenPosition( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_56_getScreenPosition)
HXLINE(  57)		if (::hx::IsNull( Camera )) {
HXLINE(  59)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  61)		if (::hx::IsNull( point )) {
HXLINE(  63)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  63)			point1->_inPool = false;
HXDLIN(  63)			point = point1;
            		}
HXLINE(  66)		point->set_x((((( (Float)(this->_globalScreenX) ) - Camera->x) + ((((Float)0.5) * ( (Float)(Camera->width) )) * (Camera->zoom - Camera->initialZoom))) / Camera->zoom));
HXLINE(  67)		point->set_y((((( (Float)(this->_globalScreenY) ) - Camera->y) + ((((Float)0.5) * ( (Float)(Camera->height) )) * (Camera->zoom - Camera->initialZoom))) / Camera->zoom));
HXLINE(  69)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getScreenPosition,return )

 ::flixel::math::FlxPoint FlxPointer_obj::getPositionInCameraView( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_81_getPositionInCameraView)
HXLINE(  82)		if (::hx::IsNull( Camera )) {
HXLINE(  83)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  85)		if (::hx::IsNull( point )) {
HXLINE(  86)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  86)			point1->_inPool = false;
HXDLIN(  86)			point = point1;
            		}
HXLINE(  88)		point->set_x((((( (Float)(this->_globalScreenX) ) - Camera->x) / Camera->zoom) + Camera->viewOffsetX));
HXLINE(  89)		point->set_y((((( (Float)(this->_globalScreenY) ) - Camera->y) / Camera->zoom) + Camera->viewOffsetY));
HXLINE(  91)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getPositionInCameraView,return )

 ::flixel::math::FlxPoint FlxPointer_obj::getPosition( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_98_getPosition)
HXLINE(  99)		if (::hx::IsNull( point )) {
HXLINE( 100)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 100)			point1->_inPool = false;
HXDLIN( 100)			point = point1;
            		}
HXLINE( 101)		return point->set(this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointer_obj,getPosition,return )

bool FlxPointer_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_115_overlaps)
HXDLIN( 115)		 ::flixel::input::FlxPointer _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 116)		::Array< bool > result = ::Array_obj< bool >::fromData( _hx_array_data_c28ed6c1_6,1);
HXLINE( 118)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 119)		if (::hx::IsNotNull( group )) {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::flixel::input::FlxPointer,_gthis, ::flixel::FlxCamera,Camera,::Array< bool >,result) HXARGC(1)
            			void _hx_run( ::flixel::FlxBasic basic){
            				HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_123_overlaps)
HXLINE( 123)				if (_gthis->overlaps(basic,Camera)) {
HXLINE( 125)					result[0] = true;
HXLINE( 126)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 121)			group->forEachExists( ::Dynamic(new _hx_Closure_0(_gthis,Camera,result)),null());
            		}
            		else {
HXLINE( 132)			this->getPosition(::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 133)			 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 134)			result[0] = object->overlapsPoint(::flixel::input::FlxPointer_obj::_cachedPoint,true,Camera);
            		}
HXLINE( 137)		return result->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,overlaps,return )

void FlxPointer_obj::setGlobalScreenPositionUnsafe(Float newX,Float newY){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_145_setGlobalScreenPositionUnsafe)
HXLINE( 146)		this->_globalScreenX = ::Std_obj::_hx_int((newX / ::flixel::FlxG_obj::scaleMode->scale->x));
HXLINE( 147)		this->_globalScreenY = ::Std_obj::_hx_int((newY / ::flixel::FlxG_obj::scaleMode->scale->y));
HXLINE( 149)		this->updatePositions();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,setGlobalScreenPositionUnsafe,(void))

::String FlxPointer_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_154_toString)
HXDLIN( 154)		 ::Dynamic value = this->x;
HXDLIN( 154)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 154)		_this->label = HX_("x",78,00,00,00);
HXDLIN( 154)		_this->value = value;
HXDLIN( 154)		 ::Dynamic value1 = this->y;
HXDLIN( 154)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 154)		_this1->label = HX_("y",79,00,00,00);
HXDLIN( 154)		_this1->value = value1;
HXDLIN( 154)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,toString,return )

void FlxPointer_obj::updatePositions(){
            	HX_STACKFRAME(&_hx_pos_e74b11cf5585adaf_162_updatePositions)
HXLINE( 163)		this->getScreenPosition(::flixel::FlxG_obj::camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 164)		this->screenX = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->x);
HXLINE( 165)		this->screenY = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->y);
HXLINE( 167)		this->getWorldPosition(::flixel::FlxG_obj::camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 168)		this->x = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->x);
HXLINE( 169)		this->y = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,updatePositions,(void))

 ::flixel::math::FlxPoint FlxPointer_obj::_cachedPoint;


::hx::ObjectPtr< FlxPointer_obj > FlxPointer_obj::__new() {
	::hx::ObjectPtr< FlxPointer_obj > __this = new FlxPointer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxPointer_obj > FlxPointer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxPointer_obj *__this = (FlxPointer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPointer_obj), false, "flixel.input.FlxPointer"));
	*(void **)__this = FlxPointer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxPointer_obj::FlxPointer_obj()
{
}

::hx::Val FlxPointer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return ::hx::Val( screenX ); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return ::hx::Val( screenY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { return ::hx::Val( _globalScreenX ); }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { return ::hx::Val( _globalScreenY ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updatePositions") ) { return ::hx::Val( updatePositions_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return ::hx::Val( getWorldPosition_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return ::hx::Val( getScreenPosition_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getPositionInCameraView") ) { return ::hx::Val( getPositionInCameraView_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setGlobalScreenPositionUnsafe") ) { return ::hx::Val( setGlobalScreenPositionUnsafe_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPointer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedPoint") ) { outValue = ( _cachedPoint ); return true; }
	}
	return false;
}

::hx::Val FlxPointer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { _globalScreenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { _globalScreenY=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPointer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedPoint") ) { _cachedPoint=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxPointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("screenX",6c,c3,36,2a));
	outFields->push(HX_("screenY",6d,c3,36,2a));
	outFields->push(HX_("_globalScreenX",8a,ec,c1,8e));
	outFields->push(HX_("_globalScreenY",8b,ec,c1,8e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPointer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,screenX),HX_("screenX",6c,c3,36,2a)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,screenY),HX_("screenY",6d,c3,36,2a)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenX),HX_("_globalScreenX",8a,ec,c1,8e)},
	{::hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenY),HX_("_globalScreenY",8b,ec,c1,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxPointer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxPointer_obj::_cachedPoint,HX_("_cachedPoint",0f,9f,83,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPointer_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("screenX",6c,c3,36,2a),
	HX_("screenY",6d,c3,36,2a),
	HX_("_globalScreenX",8a,ec,c1,8e),
	HX_("_globalScreenY",8b,ec,c1,8e),
	HX_("getWorldPosition",a5,3e,0b,e6),
	HX_("getScreenPosition",6b,93,88,24),
	HX_("getPositionInCameraView",ee,2d,2c,bb),
	HX_("getPosition",5f,63,ee,f0),
	HX_("overlaps",0c,d3,2a,45),
	HX_("setGlobalScreenPositionUnsafe",80,95,b5,56),
	HX_("toString",ac,d0,6e,38),
	HX_("updatePositions",61,c4,dc,1f),
	::String(null()) };

static void FlxPointer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointer_obj::_cachedPoint,"_cachedPoint");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPointer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointer_obj::_cachedPoint,"_cachedPoint");
};

#endif

::hx::Class FlxPointer_obj::__mClass;

static ::String FlxPointer_obj_sStaticFields[] = {
	HX_("_cachedPoint",0f,9f,83,a5),
	::String(null())
};

void FlxPointer_obj::__register()
{
	FlxPointer_obj _hx_dummy;
	FlxPointer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxPointer",c1,d6,8e,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPointer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPointer_obj::__SetStatic;
	__mClass->mMarkFunc = FlxPointer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxPointer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPointer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPointer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPointer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPointer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPointer_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_e74b11cf5585adaf_19_boot)
HXDLIN(  19)		_cachedPoint =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
            	}
}

} // end namespace flixel
} // end namespace input
