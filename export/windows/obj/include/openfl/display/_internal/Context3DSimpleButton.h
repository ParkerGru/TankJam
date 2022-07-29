#ifndef INCLUDED_openfl_display__internal_Context3DSimpleButton
#define INCLUDED_openfl_display__internal_Context3DSimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DSimpleButton)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DSimpleButton_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DSimpleButton_obj OBJ_;
		Context3DSimpleButton_obj();

	public:
		enum { _hx_ClassId = 0x66cc04f2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.Context3DSimpleButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.Context3DSimpleButton"); }

		inline static ::hx::ObjectPtr< Context3DSimpleButton_obj > __new() {
			::hx::ObjectPtr< Context3DSimpleButton_obj > __this = new Context3DSimpleButton_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DSimpleButton_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DSimpleButton_obj *__this = (Context3DSimpleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DSimpleButton_obj), false, "openfl.display._internal.Context3DSimpleButton"));
			*(void **)__this = Context3DSimpleButton_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DSimpleButton_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DSimpleButton",24,f4,2a,ae); }

		static void renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::SimpleButton simpleButton, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DSimpleButton */ 
