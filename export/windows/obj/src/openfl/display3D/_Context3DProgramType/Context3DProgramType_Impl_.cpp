#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#include <openfl/display3D/_Context3DProgramType/Context3DProgramType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_27_fromString,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","fromString",0x5dd12501,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.fromString","openfl/display3D/Context3DProgramType.hx",27,0xd8b3bd25)
HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_37_toString,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","toString",0xfbdb9252,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.toString","openfl/display3D/Context3DProgramType.hx",37,0xd8b3bd25)
HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_18_boot,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","boot",0x8910fad8,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.boot","openfl/display3D/Context3DProgramType.hx",18,0xd8b3bd25)
HX_LOCAL_STACK_FRAME(_hx_pos_f34d0745d06fd2f8_23_boot,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_","boot",0x8910fad8,"openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_.boot","openfl/display3D/Context3DProgramType.hx",23,0xd8b3bd25)
namespace openfl{
namespace display3D{
namespace _Context3DProgramType{

void Context3DProgramType_Impl__obj::__construct() { }

Dynamic Context3DProgramType_Impl__obj::__CreateEmpty() { return new Context3DProgramType_Impl__obj; }

void *Context3DProgramType_Impl__obj::_hx_vtable = 0;

Dynamic Context3DProgramType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DProgramType_Impl__obj > _hx_result = new Context3DProgramType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DProgramType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x748211f8;
}

 ::Dynamic Context3DProgramType_Impl__obj::FRAGMENT;

 ::Dynamic Context3DProgramType_Impl__obj::VERTEX;

 ::Dynamic Context3DProgramType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_27_fromString)
HXDLIN(  27)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("fragment",d0,5f,e5,ad)) ){
HXLINE(  29)			return 0;
HXDLIN(  29)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("vertex",64,db,47,a1)) ){
HXLINE(  30)			return 1;
HXDLIN(  30)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  31)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  27)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProgramType_Impl__obj,fromString,return )

::String Context3DProgramType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_37_toString)
HXDLIN(  37)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  39)			return HX_("fragment",d0,5f,e5,ad);
HXDLIN(  39)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  40)			return HX_("vertex",64,db,47,a1);
HXDLIN(  40)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  41)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  37)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProgramType_Impl__obj,toString,return )


Context3DProgramType_Impl__obj::Context3DProgramType_Impl__obj()
{
}

bool Context3DProgramType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DProgramType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DProgramType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProgramType_Impl__obj::FRAGMENT,HX_("FRAGMENT",d0,ef,6a,07)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DProgramType_Impl__obj::VERTEX,HX_("VERTEX",64,87,ca,53)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DProgramType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProgramType_Impl__obj::FRAGMENT,"FRAGMENT");
	HX_MARK_MEMBER_NAME(Context3DProgramType_Impl__obj::VERTEX,"VERTEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DProgramType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProgramType_Impl__obj::FRAGMENT,"FRAGMENT");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_Impl__obj::VERTEX,"VERTEX");
};

#endif

::hx::Class Context3DProgramType_Impl__obj::__mClass;

static ::String Context3DProgramType_Impl__obj_sStaticFields[] = {
	HX_("FRAGMENT",d0,ef,6a,07),
	HX_("VERTEX",64,87,ca,53),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DProgramType_Impl__obj::__register()
{
	Context3DProgramType_Impl__obj _hx_dummy;
	Context3DProgramType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DProgramType.Context3DProgramType_Impl_",88,6b,de,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DProgramType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DProgramType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DProgramType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DProgramType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DProgramType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DProgramType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DProgramType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DProgramType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_18_boot)
HXDLIN(  18)		FRAGMENT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f34d0745d06fd2f8_23_boot)
HXDLIN(  23)		VERTEX = 1;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DProgramType
