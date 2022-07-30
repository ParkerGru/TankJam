#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#define INCLUDED_flixel_graphics_atlas_FlxAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxNode)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxTileFrames)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES FlxAtlas_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAtlas_obj OBJ_;
		FlxAtlas_obj();

	public:
		enum { _hx_ClassId = 0x27a7f739 };

		void __construct(::String name,::hx::Null< bool >  __o_powerOfTwo,::hx::Null< int >  __o_border,::hx::Null< bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.atlas.FlxAtlas")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.atlas.FlxAtlas"); }
		static ::hx::ObjectPtr< FlxAtlas_obj > __new(::String name,::hx::Null< bool >  __o_powerOfTwo,::hx::Null< int >  __o_border,::hx::Null< bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize);
		static ::hx::ObjectPtr< FlxAtlas_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::hx::Null< bool >  __o_powerOfTwo,::hx::Null< int >  __o_border,::hx::Null< bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAtlas_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxAtlas",99,57,b7,e3); }

		static void __boot();
		static  ::openfl::geom::Point point;
		static  ::openfl::geom::Matrix matrix;
		static  ::flixel::math::FlxPoint defaultMinSize;
		static  ::flixel::math::FlxPoint defaultMaxSize;
		 ::flixel::graphics::atlas::FlxNode root;
		::String name;
		 ::haxe::ds::StringMap nodes;
		 ::openfl::display::BitmapData bitmapData;
		bool persist;
		int border;
		int width;
		int height;
		int minWidth;
		int minHeight;
		int maxWidth;
		int maxHeight;
		bool allowRotation;
		bool powerOfTwo;
		 ::flixel::graphics::FlxGraphic _graphic;
		::Array< ::Dynamic> _tempStorage;
		void initRoot();
		::Dynamic initRoot_dyn();

		 ::flixel::graphics::atlas::FlxNode addNode( ::Dynamic Graphic,::String Key);
		::Dynamic addNode_dyn();

		void wrapRoot();
		::Dynamic wrapRoot_dyn();

		 ::flixel::graphics::atlas::FlxNode tryInsert( ::openfl::display::BitmapData data,::String key);
		::Dynamic tryInsert_dyn();

		bool needToDivideHorizontally( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight);
		::Dynamic needToDivideHorizontally_dyn();

		 ::flixel::graphics::atlas::FlxNode divideNode( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight,bool divideHorizontally, ::openfl::display::BitmapData firstGrandChildData,::String firstGrandChildKey,::hx::Null< bool >  firstGrandChildRotated);
		::Dynamic divideNode_dyn();

		 ::flixel::graphics::atlas::FlxNode insertFirstNodeInRoot( ::openfl::display::BitmapData data,::String key);
		::Dynamic insertFirstNodeInRoot_dyn();

		 ::flixel::graphics::atlas::FlxNode expand( ::openfl::display::BitmapData data,::String key);
		::Dynamic expand_dyn();

		void expandRoot(Float newWidth,Float newHeight,bool divideHorizontally,::hx::Null< bool >  decideHowToDivide);
		::Dynamic expandRoot_dyn();

		void expandBitmapData();
		::Dynamic expandBitmapData_dyn();

		int getNextPowerOfTwo(Float number);
		::Dynamic getNextPowerOfTwo_dyn();

		 ::flixel::graphics::frames::FlxTileFrames addNodeWithSpacesAndBorders( ::Dynamic Graphic,::String Key, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder, ::flixel::math::FlxRect region);
		::Dynamic addNodeWithSpacesAndBorders_dyn();

		 ::flixel::graphics::frames::FlxAtlasFrames getAtlasFrames();
		::Dynamic getAtlasFrames_dyn();

		void addNodeToAtlasFrames( ::flixel::graphics::atlas::FlxNode node);
		::Dynamic addNodeToAtlasFrames_dyn();

		bool hasNodeWithName(::String nodeName);
		::Dynamic hasNodeWithName_dyn();

		 ::flixel::graphics::atlas::FlxNode getNode(::String key);
		::Dynamic getNode_dyn();

		 ::flixel::graphics::atlas::FlxAtlas addNodes(::Array< ::Dynamic> bitmaps,::Array< ::String > keys);
		::Dynamic addNodes_dyn();

		void addFromAtlasObjects(::Array< ::Dynamic> objects);
		::Dynamic addFromAtlasObjects_dyn();

		int bitmapSorter( ::Dynamic obj1, ::Dynamic obj2);
		::Dynamic bitmapSorter_dyn();

		 ::flixel::graphics::atlas::FlxAtlas createQueue();
		::Dynamic createQueue_dyn();

		 ::flixel::graphics::atlas::FlxAtlas addToQueue( ::openfl::display::BitmapData data,::String key);
		::Dynamic addToQueue_dyn();

		 ::flixel::graphics::atlas::FlxAtlas generateFromQueue();
		::Dynamic generateFromQueue_dyn();

		void onClear( ::flixel::FlxState _);
		::Dynamic onClear_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void clear();
		::Dynamic clear_dyn();

		::String getLibGdxData();
		::Dynamic getLibGdxData_dyn();

		void deleteSubtree( ::flixel::graphics::atlas::FlxNode node);
		::Dynamic deleteSubtree_dyn();

		 ::flixel::graphics::atlas::FlxNode findNodeToInsert(int insertWidth,int insertHeight);
		::Dynamic findNodeToInsert_dyn();

		 ::openfl::display::BitmapData set_bitmapData( ::openfl::display::BitmapData value);
		::Dynamic set_bitmapData_dyn();

		 ::flixel::graphics::FlxGraphic get_graphic();
		::Dynamic get_graphic_dyn();

		bool set_persist(bool value);
		::Dynamic set_persist_dyn();

		int set_minWidth(int value);
		::Dynamic set_minWidth_dyn();

		int set_minHeight(int value);
		::Dynamic set_minHeight_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int set_width(int value);
		::Dynamic set_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		int set_height(int value);
		::Dynamic set_height_dyn();

		int set_maxWidth(int value);
		::Dynamic set_maxWidth_dyn();

		int set_maxHeight(int value);
		::Dynamic set_maxHeight_dyn();

		bool set_powerOfTwo(bool value);
		::Dynamic set_powerOfTwo_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_flixel_graphics_atlas_FlxAtlas */ 
