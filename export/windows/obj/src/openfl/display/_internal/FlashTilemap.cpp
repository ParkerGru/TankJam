#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_display__internal_FlashTilemap
#include <openfl/display/_internal/FlashTilemap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4392489b4e4b671d_27_render,"openfl.display._internal.FlashTilemap","render",0x6f5d1fea,"openfl.display._internal.FlashTilemap.render","openfl/display/_internal/FlashTilemap.hx",27,0x8cf1a181)
HX_LOCAL_STACK_FRAME(_hx_pos_4392489b4e4b671d_48_renderTileContainer,"openfl.display._internal.FlashTilemap","renderTileContainer",0xe133b9e9,"openfl.display._internal.FlashTilemap.renderTileContainer","openfl/display/_internal/FlashTilemap.hx",48,0x8cf1a181)
HX_LOCAL_STACK_FRAME(_hx_pos_4392489b4e4b671d_19_boot,"openfl.display._internal.FlashTilemap","boot",0xc3672bc6,"openfl.display._internal.FlashTilemap.boot","openfl/display/_internal/FlashTilemap.hx",19,0x8cf1a181)
HX_LOCAL_STACK_FRAME(_hx_pos_4392489b4e4b671d_21_boot,"openfl.display._internal.FlashTilemap","boot",0xc3672bc6,"openfl.display._internal.FlashTilemap.boot","openfl/display/_internal/FlashTilemap.hx",21,0x8cf1a181)
HX_LOCAL_STACK_FRAME(_hx_pos_4392489b4e4b671d_22_boot,"openfl.display._internal.FlashTilemap","boot",0xc3672bc6,"openfl.display._internal.FlashTilemap.boot","openfl/display/_internal/FlashTilemap.hx",22,0x8cf1a181)
HX_LOCAL_STACK_FRAME(_hx_pos_4392489b4e4b671d_23_boot,"openfl.display._internal.FlashTilemap","boot",0xc3672bc6,"openfl.display._internal.FlashTilemap.boot","openfl/display/_internal/FlashTilemap.hx",23,0x8cf1a181)
HX_LOCAL_STACK_FRAME(_hx_pos_4392489b4e4b671d_24_boot,"openfl.display._internal.FlashTilemap","boot",0xc3672bc6,"openfl.display._internal.FlashTilemap.boot","openfl/display/_internal/FlashTilemap.hx",24,0x8cf1a181)
namespace openfl{
namespace display{
namespace _internal{

void FlashTilemap_obj::__construct() { }

Dynamic FlashTilemap_obj::__CreateEmpty() { return new FlashTilemap_obj; }

void *FlashTilemap_obj::_hx_vtable = 0;

Dynamic FlashTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashTilemap_obj > _hx_result = new FlashTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlashTilemap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ccf900c;
}

 ::openfl::geom::ColorTransform FlashTilemap_obj::alphaColorTransform;

 ::openfl::display::Bitmap FlashTilemap_obj::bitmap;

 ::openfl::geom::Point FlashTilemap_obj::destPoint;

 ::openfl::geom::Rectangle FlashTilemap_obj::sourceRect;

void FlashTilemap_obj::render( ::openfl::display::Tilemap tilemap){
            	HX_STACKFRAME(&_hx_pos_4392489b4e4b671d_27_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlashTilemap_obj,render,(void))

void FlashTilemap_obj::renderTileContainer( ::openfl::display::TileContainer group, ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool smooth,bool alphaEnabled,Float worldAlpha,bool colorTransformEnabled, ::openfl::geom::ColorTransform defaultColorTransform,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData){
            	HX_STACKFRAME(&_hx_pos_4392489b4e4b671d_48_renderTileContainer)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(FlashTilemap_obj,renderTileContainer,(void))


FlashTilemap_obj::FlashTilemap_obj()
{
}

bool FlashTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { outValue = ( bitmap ); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destPoint") ) { outValue = ( destPoint ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceRect") ) { outValue = ( sourceRect ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alphaColorTransform") ) { outValue = ( alphaColorTransform ); return true; }
		if (HX_FIELD_EQ(inName,"renderTileContainer") ) { outValue = renderTileContainer_dyn(); return true; }
	}
	return false;
}

bool FlashTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=ioValue.Cast<  ::openfl::display::Bitmap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destPoint") ) { destPoint=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceRect") ) { sourceRect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alphaColorTransform") ) { alphaColorTransform=ioValue.Cast<  ::openfl::geom::ColorTransform >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlashTilemap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlashTilemap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(void *) &FlashTilemap_obj::alphaColorTransform,HX_("alphaColorTransform",87,fb,46,ad)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(void *) &FlashTilemap_obj::bitmap,HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(void *) &FlashTilemap_obj::destPoint,HX_("destPoint",8e,62,7b,60)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlashTilemap_obj::sourceRect,HX_("sourceRect",9f,33,0b,74)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlashTilemap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashTilemap_obj::alphaColorTransform,"alphaColorTransform");
	HX_MARK_MEMBER_NAME(FlashTilemap_obj::bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(FlashTilemap_obj::destPoint,"destPoint");
	HX_MARK_MEMBER_NAME(FlashTilemap_obj::sourceRect,"sourceRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlashTilemap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashTilemap_obj::alphaColorTransform,"alphaColorTransform");
	HX_VISIT_MEMBER_NAME(FlashTilemap_obj::bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(FlashTilemap_obj::destPoint,"destPoint");
	HX_VISIT_MEMBER_NAME(FlashTilemap_obj::sourceRect,"sourceRect");
};

#endif

::hx::Class FlashTilemap_obj::__mClass;

static ::String FlashTilemap_obj_sStaticFields[] = {
	HX_("alphaColorTransform",87,fb,46,ad),
	HX_("bitmap",ef,0f,0c,f1),
	HX_("destPoint",8e,62,7b,60),
	HX_("sourceRect",9f,33,0b,74),
	HX_("render",56,6b,29,05),
	HX_("renderTileContainer",fd,ba,73,84),
	::String(null())
};

void FlashTilemap_obj::__register()
{
	FlashTilemap_obj _hx_dummy;
	FlashTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.FlashTilemap",5a,e1,d1,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlashTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlashTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = FlashTilemap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlashTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlashTilemap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlashTilemap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlashTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4392489b4e4b671d_19_boot)
HXDLIN(  19)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4392489b4e4b671d_21_boot)
HXDLIN(  21)		alphaColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4392489b4e4b671d_22_boot)
HXDLIN(  22)		bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4392489b4e4b671d_23_boot)
HXDLIN(  23)		destPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4392489b4e4b671d_24_boot)
HXDLIN(  24)		sourceRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal