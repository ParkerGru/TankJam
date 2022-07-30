#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_FlxActionMode
#include <flixel/ui/FlxActionMode.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::FlxActionMode FlxActionMode_obj::A;

::flixel::ui::FlxActionMode FlxActionMode_obj::A_B;

::flixel::ui::FlxActionMode FlxActionMode_obj::A_B_C;

::flixel::ui::FlxActionMode FlxActionMode_obj::A_B_X_Y;

::flixel::ui::FlxActionMode FlxActionMode_obj::NONE;

bool FlxActionMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A",41,00,00,00)) { outValue = FlxActionMode_obj::A; return true; }
	if (inName==HX_("A_B",84,a5,31,00)) { outValue = FlxActionMode_obj::A_B; return true; }
	if (inName==HX_("A_B_C",88,61,09,ac)) { outValue = FlxActionMode_obj::A_B_C; return true; }
	if (inName==HX_("A_B_X_Y",f7,15,5b,ca)) { outValue = FlxActionMode_obj::A_B_X_Y; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = FlxActionMode_obj::NONE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxActionMode_obj)

int FlxActionMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("A",41,00,00,00)) return 1;
	if (inName==HX_("A_B",84,a5,31,00)) return 2;
	if (inName==HX_("A_B_C",88,61,09,ac)) return 3;
	if (inName==HX_("A_B_X_Y",f7,15,5b,ca)) return 4;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	return super::__FindIndex(inName);
}

int FlxActionMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("A",41,00,00,00)) return 0;
	if (inName==HX_("A_B",84,a5,31,00)) return 0;
	if (inName==HX_("A_B_C",88,61,09,ac)) return 0;
	if (inName==HX_("A_B_X_Y",f7,15,5b,ca)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxActionMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A",41,00,00,00)) return A;
	if (inName==HX_("A_B",84,a5,31,00)) return A_B;
	if (inName==HX_("A_B_C",88,61,09,ac)) return A_B_C;
	if (inName==HX_("A_B_X_Y",f7,15,5b,ca)) return A_B_X_Y;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	return super::__Field(inName,inCallProp);
}

static ::String FlxActionMode_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("A",41,00,00,00),
	HX_("A_B",84,a5,31,00),
	HX_("A_B_C",88,61,09,ac),
	HX_("A_B_X_Y",f7,15,5b,ca),
	::String(null())
};

::hx::Class FlxActionMode_obj::__mClass;

Dynamic __Create_FlxActionMode_obj() { return new FlxActionMode_obj; }

void FlxActionMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.ui.FlxActionMode",e3,87,3a,2d), ::hx::TCanCast< FlxActionMode_obj >,FlxActionMode_obj_sStaticFields,0,
	&__Create_FlxActionMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxActionMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxActionMode_obj::__GetStatic;
}

void FlxActionMode_obj::__boot()
{
A = ::hx::CreateConstEnum< FlxActionMode_obj >(HX_("A",41,00,00,00),1);
A_B = ::hx::CreateConstEnum< FlxActionMode_obj >(HX_("A_B",84,a5,31,00),2);
A_B_C = ::hx::CreateConstEnum< FlxActionMode_obj >(HX_("A_B_C",88,61,09,ac),3);
A_B_X_Y = ::hx::CreateConstEnum< FlxActionMode_obj >(HX_("A_B_X_Y",f7,15,5b,ca),4);
NONE = ::hx::CreateConstEnum< FlxActionMode_obj >(HX_("NONE",b8,da,ca,33),0);
}


} // end namespace flixel
} // end namespace ui
