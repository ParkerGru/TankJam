#ifndef INCLUDED_Bullet
#define INCLUDED_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Bullet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)



class HXCPP_CLASS_ATTRIBUTES Bullet_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();

	public:
		enum { _hx_ClassId = 0x6a6fc922 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Bullet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Bullet"); }
		static ::hx::ObjectPtr< Bullet_obj > __new();
		static ::hx::ObjectPtr< Bullet_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Bullet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Bullet",62,06,25,09); }

		void update(Float elapsed);

		void shoot(int X,int Y,int VelocityX,int VelocityY);
		::Dynamic shoot_dyn();

		void angleshoot(int X,int Y,int Speed, ::flixel::math::FlxPoint Target);
		::Dynamic angleshoot_dyn();

};


#endif /* INCLUDED_Bullet */ 
