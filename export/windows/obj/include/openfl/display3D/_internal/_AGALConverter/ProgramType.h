#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#define INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,ProgramType)
namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{


class ProgramType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ProgramType_obj OBJ_;

	public:
		ProgramType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl.display3D._internal._AGALConverter.ProgramType",2b,90,24,69); }
		::String __ToString() const { return HX_("ProgramType.",30,43,41,ab) + _hx_tag; }

		static ::openfl::display3D::_internal::_AGALConverter::ProgramType FRAGMENT;
		static inline ::openfl::display3D::_internal::_AGALConverter::ProgramType FRAGMENT_dyn() { return FRAGMENT; }
		static ::openfl::display3D::_internal::_AGALConverter::ProgramType VERTEX;
		static inline ::openfl::display3D::_internal::_AGALConverter::ProgramType VERTEX_dyn() { return VERTEX; }
};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType */ 
