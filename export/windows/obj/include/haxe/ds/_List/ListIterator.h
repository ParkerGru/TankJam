#ifndef INCLUDED_haxe_ds__List_ListIterator
#define INCLUDED_haxe_ds__List_ListIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ds,_List,ListIterator)
HX_DECLARE_CLASS3(haxe,ds,_List,ListNode)

namespace haxe{
namespace ds{
namespace _List{


class HXCPP_CLASS_ATTRIBUTES ListIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ListIterator_obj OBJ_;
		ListIterator_obj();

	public:
		enum { _hx_ClassId = 0x7cc93b54 };

		void __construct( ::haxe::ds::_List::ListNode head);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds._List.ListIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ds._List.ListIterator"); }
		static ::hx::ObjectPtr< ListIterator_obj > __new( ::haxe::ds::_List::ListNode head);
		static ::hx::ObjectPtr< ListIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::_List::ListNode head);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListIterator",8c,fc,31,c4); }

		 ::haxe::ds::_List::ListNode head;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace haxe
} // end namespace ds
} // end namespace _List

#endif /* INCLUDED_haxe_ds__List_ListIterator */ 
