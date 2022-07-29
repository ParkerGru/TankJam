#ifndef INCLUDED_flixel_util_FlxSave
#define INCLUDED_flixel_util_FlxSave

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,FlxSaveStatus)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,SharedObject)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxSave_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSave_obj OBJ_;
		FlxSave_obj();

	public:
		enum { _hx_ClassId = 0x051f3151 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxSave")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.FlxSave"); }
		static ::hx::ObjectPtr< FlxSave_obj > __new();
		static ::hx::ObjectPtr< FlxSave_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSave_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxSave",af,c4,a5,dc); }

		 ::Dynamic data;
		::String name;
		::String path;
		 ::openfl::net::SharedObject _sharedObject;
		 ::Dynamic _onComplete;
		Dynamic _onComplete_dyn() { return _onComplete;}
		bool _closeRequested;
		void destroy();
		::Dynamic destroy_dyn();

		bool bind(::String Name,::String Path);
		::Dynamic bind_dyn();

		bool close(::hx::Null< int >  MinFileSize, ::Dynamic OnComplete);
		::Dynamic close_dyn();

		bool flush(::hx::Null< int >  MinFileSize, ::Dynamic OnComplete);
		::Dynamic flush_dyn();

		bool erase();
		::Dynamic erase_dyn();

		bool onDone( ::flixel::util::FlxSaveStatus Result);
		::Dynamic onDone_dyn();

		bool checkBinding();
		::Dynamic checkBinding_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSave */ 
