#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_814219dbbef64044_14_getSparrowAtlas,"AssetPaths","getSparrowAtlas",0x7f9ffa25,"AssetPaths.getSparrowAtlas","AssetPaths.hx",14,0xc62bce40)
HX_LOCAL_STACK_FRAME(_hx_pos_a71b198b2cf5b646_30_boot,"AssetPaths","boot",0x7f6e2362,"AssetPaths.boot","flixel/system/macros/FlxAssetPaths.hx",30,0x71054749)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78a931fe;
}

 ::flixel::graphics::frames::FlxAtlasFrames AssetPaths_obj::getSparrowAtlas(::String key){
            	HX_STACKFRAME(&_hx_pos_814219dbbef64044_14_getSparrowAtlas)
HXDLIN(  14)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".png",3b,2d,bd,1e)),((HX_("assets/images/",ab,47,cb,9f) + key) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,getSparrowAtlas,return )

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::icon16__png;

::String AssetPaths_obj::icon32__png;

::String AssetPaths_obj::icon64__png;

::String AssetPaths_obj::commander__png;

::String AssetPaths_obj::commander__xml;

::String AssetPaths_obj::John__png;

::String AssetPaths_obj::John__xml;

::String AssetPaths_obj::steve__png;

::String AssetPaths_obj::steve__xml;

::String AssetPaths_obj::tim__png;

::String AssetPaths_obj::tim__xml;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

bool AssetPaths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_("data_goes_here__txt",ec,22,23,e8)},
	{::hx::fsString,(void *) &AssetPaths_obj::icon16__png,HX_("icon16__png",2b,de,72,c1)},
	{::hx::fsString,(void *) &AssetPaths_obj::icon32__png,HX_("icon32__png",31,5a,30,7b)},
	{::hx::fsString,(void *) &AssetPaths_obj::icon64__png,HX_("icon64__png",32,77,a7,c4)},
	{::hx::fsString,(void *) &AssetPaths_obj::commander__png,HX_("commander__png",11,d8,32,2b)},
	{::hx::fsString,(void *) &AssetPaths_obj::commander__xml,HX_("commander__xml",3f,e9,38,2b)},
	{::hx::fsString,(void *) &AssetPaths_obj::John__png,HX_("John__png",7e,82,d3,98)},
	{::hx::fsString,(void *) &AssetPaths_obj::John__xml,HX_("John__xml",ac,93,d9,98)},
	{::hx::fsString,(void *) &AssetPaths_obj::steve__png,HX_("steve__png",d6,5f,e0,06)},
	{::hx::fsString,(void *) &AssetPaths_obj::steve__xml,HX_("steve__xml",04,71,e6,06)},
	{::hx::fsString,(void *) &AssetPaths_obj::tim__png,HX_("tim__png",31,7d,41,80)},
	{::hx::fsString,(void *) &AssetPaths_obj::tim__xml,HX_("tim__xml",5f,8e,47,80)},
	{::hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_("music_goes_here__txt",d1,aa,c8,0f)},
	{::hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_("sounds_go_here__txt",e4,a8,cb,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::icon16__png,"icon16__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::icon32__png,"icon32__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::icon64__png,"icon64__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::commander__png,"commander__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::commander__xml,"commander__xml");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::John__png,"John__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::John__xml,"John__xml");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::steve__png,"steve__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::steve__xml,"steve__xml");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tim__png,"tim__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tim__xml,"tim__xml");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::icon16__png,"icon16__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::icon32__png,"icon32__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::icon64__png,"icon64__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::commander__png,"commander__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::commander__xml,"commander__xml");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::John__png,"John__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::John__xml,"John__xml");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::steve__png,"steve__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::steve__xml,"steve__xml");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tim__png,"tim__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tim__xml,"tim__xml");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

::hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("data_goes_here__txt",ec,22,23,e8),
	HX_("icon16__png",2b,de,72,c1),
	HX_("icon32__png",31,5a,30,7b),
	HX_("icon64__png",32,77,a7,c4),
	HX_("commander__png",11,d8,32,2b),
	HX_("commander__xml",3f,e9,38,2b),
	HX_("John__png",7e,82,d3,98),
	HX_("John__xml",ac,93,d9,98),
	HX_("steve__png",d6,5f,e0,06),
	HX_("steve__xml",04,71,e6,06),
	HX_("tim__png",31,7d,41,80),
	HX_("tim__xml",5f,8e,47,80),
	HX_("music_goes_here__txt",d1,aa,c8,0f),
	HX_("sounds_go_here__txt",e4,a8,cb,02),
	::String(null())
};

void AssetPaths_obj::__register()
{
	AssetPaths_obj _hx_dummy;
	AssetPaths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AssetPaths",3e,0f,e6,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetPaths_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		data_goes_here__txt = HX_("assets/data/data-goes-here.txt",5f,4b,b2,8e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		icon16__png = HX_("assets/icon16.png",25,f8,58,8c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		icon32__png = HX_("assets/icon32.png",df,5e,75,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		icon64__png = HX_("assets/icon64.png",fe,9c,54,65);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		commander__png = HX_("assets/images/commander.png",28,c5,13,57);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		commander__xml = HX_("assets/images/commander.xml",56,d6,19,57);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		John__png = HX_("assets/images/John.png",91,68,7d,58);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		John__xml = HX_("assets/images/John.xml",bf,79,83,58);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		steve__png = HX_("assets/images/steve.png",83,fe,69,31);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		steve__xml = HX_("assets/images/steve.xml",b1,0f,70,31);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		tim__png = HX_("assets/images/tim.png",48,ee,8a,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		tim__xml = HX_("assets/images/tim.xml",76,ff,90,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		music_goes_here__txt = HX_("assets/music/music-goes-here.txt",6b,32,60,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		sounds_go_here__txt = HX_("assets/sounds/sounds-go-here.txt",8d,b6,3d,a7);
            	}
}

