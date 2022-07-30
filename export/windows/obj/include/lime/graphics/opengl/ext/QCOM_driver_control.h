#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control
#define INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0a23424fb5ae89d7_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_driver_control)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_driver_control_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QCOM_driver_control_obj OBJ_;
		QCOM_driver_control_obj();

	public:
		enum { _hx_ClassId = 0x503219e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_driver_control")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_driver_control"); }

		inline static ::hx::ObjectPtr< QCOM_driver_control_obj > __new() {
			::hx::ObjectPtr< QCOM_driver_control_obj > __this = new QCOM_driver_control_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QCOM_driver_control_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QCOM_driver_control_obj *__this = (QCOM_driver_control_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_driver_control_obj), false, "lime.graphics.opengl.ext.QCOM_driver_control"));
			*(void **)__this = QCOM_driver_control_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0a23424fb5ae89d7_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QCOM_driver_control_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_driver_control",35,0f,f7,9e); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_driver_control */ 
