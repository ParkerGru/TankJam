#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_95af95d3889446aa_84_new,"flixel.graphics.atlas.FlxNode","new",0xeedfd332,"flixel.graphics.atlas.FlxNode.new","flixel/graphics/atlas/FlxNode.hx",84,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_95_destroy,"flixel.graphics.atlas.FlxNode","destroy",0x006100cc,"flixel.graphics.atlas.FlxNode.destroy","flixel/graphics/atlas/FlxNode.hx",95,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_108_canPlace,"flixel.graphics.atlas.FlxNode","canPlace",0xb6bfba85,"flixel.graphics.atlas.FlxNode.canPlace","flixel/graphics/atlas/FlxNode.hx",108,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_120_getTileFrames,"flixel.graphics.atlas.FlxNode","getTileFrames",0xf6655efc,"flixel.graphics.atlas.FlxNode.getTileFrames","flixel/graphics/atlas/FlxNode.hx",120,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_141_getImageFrame,"flixel.graphics.atlas.FlxNode","getImageFrame",0xf79a185a,"flixel.graphics.atlas.FlxNode.getImageFrame","flixel/graphics/atlas/FlxNode.hx",141,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_153_get_isEmpty,"flixel.graphics.atlas.FlxNode","get_isEmpty",0xd9c0632c,"flixel.graphics.atlas.FlxNode.get_isEmpty","flixel/graphics/atlas/FlxNode.hx",153,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_158_get_x,"flixel.graphics.atlas.FlxNode","get_x",0x3d1080a1,"flixel.graphics.atlas.FlxNode.get_x","flixel/graphics/atlas/FlxNode.hx",158,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_163_get_y,"flixel.graphics.atlas.FlxNode","get_y",0x3d1080a2,"flixel.graphics.atlas.FlxNode.get_y","flixel/graphics/atlas/FlxNode.hx",163,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_168_get_width,"flixel.graphics.atlas.FlxNode","get_width",0xb520feaf,"flixel.graphics.atlas.FlxNode.get_width","flixel/graphics/atlas/FlxNode.hx",168,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_172_set_width,"flixel.graphics.atlas.FlxNode","set_width",0x9871eabb,"flixel.graphics.atlas.FlxNode.set_width","flixel/graphics/atlas/FlxNode.hx",172,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_179_get_height,"flixel.graphics.atlas.FlxNode","get_height",0x7e0d531e,"flixel.graphics.atlas.FlxNode.get_height","flixel/graphics/atlas/FlxNode.hx",179,0x6d18bb9f)
HX_LOCAL_STACK_FRAME(_hx_pos_95af95d3889446aa_183_set_height,"flixel.graphics.atlas.FlxNode","set_height",0x818af192,"flixel.graphics.atlas.FlxNode.set_height","flixel/graphics/atlas/FlxNode.hx",183,0x6d18bb9f)
namespace flixel{
namespace graphics{
namespace atlas{

void FlxNode_obj::__construct( ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,::hx::Null< bool >  __o_filled,::String __o_key,::hx::Null< bool >  __o_rotated){
            		bool filled = __o_filled.Default(false);
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            		bool rotated = __o_rotated.Default(false);
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_84_new)
HXLINE(  85)		this->filled = filled;
HXLINE(  86)		this->left = null();
HXLINE(  87)		this->right = null();
HXLINE(  88)		this->rect = rect;
HXLINE(  89)		this->key = key;
HXLINE(  90)		this->atlas = atlas;
HXLINE(  91)		this->rotated = rotated;
            	}

Dynamic FlxNode_obj::__CreateEmpty() { return new FlxNode_obj; }

void *FlxNode_obj::_hx_vtable = 0;

Dynamic FlxNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxNode_obj > _hx_result = new FlxNode_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e838670;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_atlas_FlxNode__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::atlas::FlxNode_obj::destroy,
};

void *FlxNode_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_atlas_FlxNode__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxNode_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_95_destroy)
HXLINE(  96)		this->key = null();
HXLINE(  97)		this->left = null();
HXLINE(  98)		this->right = null();
HXLINE(  99)		this->rect = null();
HXLINE( 100)		this->atlas = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,destroy,(void))

bool FlxNode_obj::canPlace(int width,int height){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_108_canPlace)
HXDLIN( 108)		if ((this->rect->width >= width)) {
HXDLIN( 108)			return (this->rect->height >= height);
            		}
            		else {
HXDLIN( 108)			return false;
            		}
HXDLIN( 108)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxNode_obj,canPlace,return )

 ::flixel::graphics::frames::FlxTileFrames FlxNode_obj::getTileFrames( ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_120_getTileFrames)
HXLINE( 121)		::flixel::FlxG_obj::bitmap->add(this->atlas->bitmapData,false,this->atlas->name);
HXLINE( 122)		 ::flixel::graphics::frames::FlxAtlasFrames _this = this->atlas->getAtlasFrames();
HXDLIN( 122)		 ::flixel::graphics::frames::FlxFrame frame = ( ( ::flixel::graphics::frames::FlxFrame)(_this->framesHash->get(this->key)) );
HXLINE( 124)		if (::hx::IsNotNull( frame )) {
HXLINE( 126)			 ::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::fromFrame(frame,tileSize,tileSpacing);
HXLINE( 127)			if (::hx::IsNotNull( tileBorder )) {
HXLINE( 128)				tileFrames = Dynamic( tileFrames->addBorder(tileBorder)).StaticCast<  ::flixel::graphics::frames::FlxTileFrames >();
            			}
HXLINE( 129)			return tileFrames;
            		}
HXLINE( 132)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxNode_obj,getTileFrames,return )

 ::flixel::graphics::frames::FlxImageFrame FlxNode_obj::getImageFrame(){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_141_getImageFrame)
HXLINE( 142)		::flixel::FlxG_obj::bitmap->add(this->atlas->bitmapData,false,this->atlas->name);
HXLINE( 143)		 ::flixel::graphics::frames::FlxAtlasFrames _this = this->atlas->getAtlasFrames();
HXDLIN( 143)		 ::flixel::graphics::frames::FlxFrame frame = ( ( ::flixel::graphics::frames::FlxFrame)(_this->framesHash->get(this->key)) );
HXLINE( 145)		if (::hx::IsNotNull( frame )) {
HXLINE( 146)			return ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(frame);
            		}
HXLINE( 148)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,getImageFrame,return )

bool FlxNode_obj::get_isEmpty(){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_153_get_isEmpty)
HXDLIN( 153)		bool _hx_tmp;
HXDLIN( 153)		if (!(this->filled)) {
HXDLIN( 153)			_hx_tmp = ::hx::IsNull( this->left );
            		}
            		else {
HXDLIN( 153)			_hx_tmp = false;
            		}
HXDLIN( 153)		if (_hx_tmp) {
HXDLIN( 153)			return ::hx::IsNull( this->right );
            		}
            		else {
HXDLIN( 153)			return false;
            		}
HXDLIN( 153)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_isEmpty,return )

int FlxNode_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_158_get_x)
HXDLIN( 158)		return ::Std_obj::_hx_int(this->rect->x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_x,return )

int FlxNode_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_163_get_y)
HXDLIN( 163)		return ::Std_obj::_hx_int(this->rect->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_y,return )

int FlxNode_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_168_get_width)
HXDLIN( 168)		return ::Std_obj::_hx_int(this->rect->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_width,return )

int FlxNode_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_172_set_width)
HXLINE( 173)		this->rect->width = ( (Float)(value) );
HXLINE( 174)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxNode_obj,set_width,return )

int FlxNode_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_179_get_height)
HXDLIN( 179)		return ::Std_obj::_hx_int(this->rect->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_height,return )

int FlxNode_obj::set_height(int value){
            	HX_STACKFRAME(&_hx_pos_95af95d3889446aa_183_set_height)
HXLINE( 184)		this->rect->height = ( (Float)(value) );
HXLINE( 185)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxNode_obj,set_height,return )


::hx::ObjectPtr< FlxNode_obj > FlxNode_obj::__new( ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,::hx::Null< bool >  __o_filled,::String __o_key,::hx::Null< bool >  __o_rotated) {
	::hx::ObjectPtr< FlxNode_obj > __this = new FlxNode_obj();
	__this->__construct(rect,atlas,__o_filled,__o_key,__o_rotated);
	return __this;
}

::hx::ObjectPtr< FlxNode_obj > FlxNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::math::FlxRect rect, ::flixel::graphics::atlas::FlxAtlas atlas,::hx::Null< bool >  __o_filled,::String __o_key,::hx::Null< bool >  __o_rotated) {
	FlxNode_obj *__this = (FlxNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxNode_obj), true, "flixel.graphics.atlas.FlxNode"));
	*(void **)__this = FlxNode_obj::_hx_vtable;
	__this->__construct(rect,atlas,__o_filled,__o_key,__o_rotated);
	return __this;
}

FlxNode_obj::FlxNode_obj()
{
}

void FlxNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxNode);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(filled,"filled");
	HX_MARK_MEMBER_NAME(atlas,"atlas");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_END_CLASS();
}

void FlxNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(filled,"filled");
	HX_VISIT_MEMBER_NAME(atlas,"atlas");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
}

::hx::Val FlxNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return ::hx::Val( key ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		if (HX_FIELD_EQ(inName,"rect") ) { return ::hx::Val( rect ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right ); }
		if (HX_FIELD_EQ(inName,"atlas") ) { return ::hx::Val( atlas ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { return ::hx::Val( filled ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isEmpty() ); }
		if (HX_FIELD_EQ(inName,"rotated") ) { return ::hx::Val( rotated ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canPlace") ) { return ::hx::Val( canPlace_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return ::hx::Val( get_isEmpty_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileFrames") ) { return ::hx::Val( getTileFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImageFrame") ) { return ::hx::Val( getImageFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast<  ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast<  ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlas") ) { atlas=inValue.Cast<  ::flixel::graphics::atlas::FlxAtlas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { filled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< int >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("key",9f,89,51,00));
	outFields->push(HX_("filled",a2,0d,2f,85));
	outFields->push(HX_("atlas",4b,4d,dd,26));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("isEmpty",43,de,5f,0c));
	outFields->push(HX_("rotated",a9,49,1d,f1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::atlas::FlxNode */ ,(int)offsetof(FlxNode_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsObject /*  ::flixel::graphics::atlas::FlxNode */ ,(int)offsetof(FlxNode_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxNode_obj,rect),HX_("rect",24,4d,a7,4b)},
	{::hx::fsString,(int)offsetof(FlxNode_obj,key),HX_("key",9f,89,51,00)},
	{::hx::fsBool,(int)offsetof(FlxNode_obj,filled),HX_("filled",a2,0d,2f,85)},
	{::hx::fsObject /*  ::flixel::graphics::atlas::FlxAtlas */ ,(int)offsetof(FlxNode_obj,atlas),HX_("atlas",4b,4d,dd,26)},
	{::hx::fsBool,(int)offsetof(FlxNode_obj,rotated),HX_("rotated",a9,49,1d,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxNode_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxNode_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("rect",24,4d,a7,4b),
	HX_("key",9f,89,51,00),
	HX_("filled",a2,0d,2f,85),
	HX_("atlas",4b,4d,dd,26),
	HX_("rotated",a9,49,1d,f1),
	HX_("destroy",fa,2c,86,24),
	HX_("canPlace",97,36,21,33),
	HX_("getTileFrames",aa,e1,8e,6d),
	HX_("getImageFrame",08,9b,c3,6e),
	HX_("get_isEmpty",5a,3e,5a,92),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	::String(null()) };

::hx::Class FlxNode_obj::__mClass;

void FlxNode_obj::__register()
{
	FlxNode_obj _hx_dummy;
	FlxNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.atlas.FlxNode",40,12,0e,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
