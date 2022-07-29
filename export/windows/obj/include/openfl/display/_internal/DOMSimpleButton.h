#ifndef INCLUDED_openfl_display__internal_DOMSimpleButton
#define INCLUDED_openfl_display__internal_DOMSimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMSimpleButton)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMSimpleButton_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMSimpleButton_obj OBJ_;
		DOMSimpleButton_obj();

	public:
		enum { _hx_ClassId = 0x250e2278 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMSimpleButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMSimpleButton"); }

		inline static ::hx::ObjectPtr< DOMSimpleButton_obj > __new() {
			::hx::ObjectPtr< DOMSimpleButton_obj > __this = new DOMSimpleButton_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMSimpleButton_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMSimpleButton_obj *__this = (DOMSimpleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMSimpleButton_obj), false, "openfl.display._internal.DOMSimpleButton"));
			*(void **)__this = DOMSimpleButton_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMSimpleButton_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMSimpleButton",46,41,8b,8e); }

		static void renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableClear( ::openfl::display::SimpleButton simpleButton, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawableClear_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMSimpleButton */ 
