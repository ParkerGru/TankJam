#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#define INCLUDED_flixel_ui_FlxVirtualPad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxActionMode)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxDPadMode)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxVirtualPad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxVirtualPad_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef FlxVirtualPad_obj OBJ_;
		FlxVirtualPad_obj();

	public:
		enum { _hx_ClassId = 0x4344e826 };

		void __construct( ::flixel::ui::FlxDPadMode DPad, ::flixel::ui::FlxActionMode Action);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxVirtualPad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.ui.FlxVirtualPad"); }
		static ::hx::ObjectPtr< FlxVirtualPad_obj > __new( ::flixel::ui::FlxDPadMode DPad, ::flixel::ui::FlxActionMode Action);
		static ::hx::ObjectPtr< FlxVirtualPad_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::ui::FlxDPadMode DPad, ::flixel::ui::FlxActionMode Action);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxVirtualPad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxVirtualPad",fa,5e,1f,8f); }

		 ::flixel::ui::FlxButton buttonA;
		 ::flixel::ui::FlxButton buttonB;
		 ::flixel::ui::FlxButton buttonC;
		 ::flixel::ui::FlxButton buttonY;
		 ::flixel::ui::FlxButton buttonX;
		 ::flixel::ui::FlxButton buttonLeft;
		 ::flixel::ui::FlxButton buttonUp;
		 ::flixel::ui::FlxButton buttonRight;
		 ::flixel::ui::FlxButton buttonDown;
		 ::flixel::group::FlxTypedSpriteGroup dPad;
		 ::flixel::group::FlxTypedSpriteGroup actions;
		void destroy();

		 ::flixel::ui::FlxButton createButton(Float X,Float Y,int Width,int Height,::String Graphic, ::Dynamic OnClick);
		::Dynamic createButton_dyn();

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxVirtualPad */ 
