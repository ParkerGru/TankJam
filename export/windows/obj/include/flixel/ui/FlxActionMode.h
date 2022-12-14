#ifndef INCLUDED_flixel_ui_FlxActionMode
#define INCLUDED_flixel_ui_FlxActionMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,ui,FlxActionMode)
namespace flixel{
namespace ui{


class FlxActionMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxActionMode_obj OBJ_;

	public:
		FlxActionMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.ui.FlxActionMode",e3,87,3a,2d); }
		::String __ToString() const { return HX_("FlxActionMode.",a3,dc,44,3d) + _hx_tag; }

		static ::flixel::ui::FlxActionMode A;
		static inline ::flixel::ui::FlxActionMode A_dyn() { return A; }
		static ::flixel::ui::FlxActionMode A_B;
		static inline ::flixel::ui::FlxActionMode A_B_dyn() { return A_B; }
		static ::flixel::ui::FlxActionMode A_B_C;
		static inline ::flixel::ui::FlxActionMode A_B_C_dyn() { return A_B_C; }
		static ::flixel::ui::FlxActionMode A_B_X_Y;
		static inline ::flixel::ui::FlxActionMode A_B_X_Y_dyn() { return A_B_X_Y; }
		static ::flixel::ui::FlxActionMode NONE;
		static inline ::flixel::ui::FlxActionMode NONE_dyn() { return NONE; }
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxActionMode */ 
