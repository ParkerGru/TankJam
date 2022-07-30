#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestDefaults
#include <openfl/net/URLRequestDefaults.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d7a2132659cec934_349_new,"openfl.net.URLRequest","new",0xe13767c1,"openfl.net.URLRequest.new","openfl/net/URLRequest.hx",349,0xe997cd0d)
namespace openfl{
namespace net{

void URLRequest_obj::__construct(::String url){
            	HX_STACKFRAME(&_hx_pos_d7a2132659cec934_349_new)
HXLINE( 350)		if (::hx::IsNotNull( url )) {
HXLINE( 352)			this->url = url;
            		}
HXLINE( 355)		this->contentType = null();
HXLINE( 356)		this->followRedirects = ::openfl::net::URLRequestDefaults_obj::followRedirects;
HXLINE( 358)		if ((::openfl::net::URLRequestDefaults_obj::idleTimeout > 0)) {
HXLINE( 360)			this->idleTimeout = ::openfl::net::URLRequestDefaults_obj::idleTimeout;
            		}
            		else {
HXLINE( 367)			this->idleTimeout = ( (Float)(30000) );
            		}
HXLINE( 371)		this->manageCookies = ::openfl::net::URLRequestDefaults_obj::manageCookies;
HXLINE( 372)		this->method = HX_("GET",76,1c,36,00);
HXLINE( 373)		this->requestHeaders = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 374)		this->userAgent = ::openfl::net::URLRequestDefaults_obj::userAgent;
            	}

Dynamic URLRequest_obj::__CreateEmpty() { return new URLRequest_obj; }

void *URLRequest_obj::_hx_vtable = 0;

Dynamic URLRequest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< URLRequest_obj > _hx_result = new URLRequest_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool URLRequest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21495269;
}


::hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String url) {
	::hx::ObjectPtr< URLRequest_obj > __this = new URLRequest_obj();
	__this->__construct(url);
	return __this;
}

::hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__alloc(::hx::Ctx *_hx_ctx,::String url) {
	URLRequest_obj *__this = (URLRequest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(URLRequest_obj), true, "openfl.net.URLRequest"));
	*(void **)__this = URLRequest_obj::_hx_vtable;
	__this->__construct(url);
	return __this;
}

URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(followRedirects,"followRedirects");
	HX_MARK_MEMBER_NAME(idleTimeout,"idleTimeout");
	HX_MARK_MEMBER_NAME(manageCookies,"manageCookies");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(followRedirects,"followRedirects");
	HX_VISIT_MEMBER_NAME(idleTimeout,"idleTimeout");
	HX_VISIT_MEMBER_NAME(manageCookies,"manageCookies");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
}

::hx::Val URLRequest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return ::hx::Val( method ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return ::hx::Val( userAgent ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return ::hx::Val( contentType ); }
		if (HX_FIELD_EQ(inName,"idleTimeout") ) { return ::hx::Val( idleTimeout ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"manageCookies") ) { return ::hx::Val( manageCookies ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return ::hx::Val( requestHeaders ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { return ::hx::Val( followRedirects ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val URLRequest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idleTimeout") ) { idleTimeout=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"manageCookies") ) { manageCookies=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { followRedirects=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("contentType",93,3c,7b,2a));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("followRedirects",26,5a,40,75));
	outFields->push(HX_("idleTimeout",ed,65,58,2d));
	outFields->push(HX_("manageCookies",6a,1f,8f,bc));
	outFields->push(HX_("method",e1,f6,5a,09));
	outFields->push(HX_("requestHeaders",b7,b2,4f,dc));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("userAgent",7a,f0,12,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo URLRequest_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(URLRequest_obj,contentType),HX_("contentType",93,3c,7b,2a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(URLRequest_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsBool,(int)offsetof(URLRequest_obj,followRedirects),HX_("followRedirects",26,5a,40,75)},
	{::hx::fsFloat,(int)offsetof(URLRequest_obj,idleTimeout),HX_("idleTimeout",ed,65,58,2d)},
	{::hx::fsBool,(int)offsetof(URLRequest_obj,manageCookies),HX_("manageCookies",6a,1f,8f,bc)},
	{::hx::fsString,(int)offsetof(URLRequest_obj,method),HX_("method",e1,f6,5a,09)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(URLRequest_obj,requestHeaders),HX_("requestHeaders",b7,b2,4f,dc)},
	{::hx::fsString,(int)offsetof(URLRequest_obj,url),HX_("url",6f,2b,59,00)},
	{::hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_("userAgent",7a,f0,12,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *URLRequest_obj_sStaticStorageInfo = 0;
#endif

static ::String URLRequest_obj_sMemberFields[] = {
	HX_("contentType",93,3c,7b,2a),
	HX_("data",2a,56,63,42),
	HX_("followRedirects",26,5a,40,75),
	HX_("idleTimeout",ed,65,58,2d),
	HX_("manageCookies",6a,1f,8f,bc),
	HX_("method",e1,f6,5a,09),
	HX_("requestHeaders",b7,b2,4f,dc),
	HX_("url",6f,2b,59,00),
	HX_("userAgent",7a,f0,12,c8),
	::String(null()) };

::hx::Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	URLRequest_obj _hx_dummy;
	URLRequest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.URLRequest",4f,73,1e,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(URLRequest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< URLRequest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLRequest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
