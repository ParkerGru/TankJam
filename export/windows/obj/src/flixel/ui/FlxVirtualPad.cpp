#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxActionMode
#include <flixel/ui/FlxActionMode.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxDPadMode
#include <flixel/ui/FlxDPadMode.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#include <flixel/ui/FlxVirtualPad.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28b5c20fe90f2f2d_45_new,"flixel.ui.FlxVirtualPad","new",0xc70c1fa4,"flixel.ui.FlxVirtualPad.new","flixel/ui/FlxVirtualPad.hx",45,0x865d16ec)
HX_LOCAL_STACK_FRAME(_hx_pos_28b5c20fe90f2f2d_101_destroy,"flixel.ui.FlxVirtualPad","destroy",0x76516e3e,"flixel.ui.FlxVirtualPad.destroy","flixel/ui/FlxVirtualPad.hx",101,0x865d16ec)
HX_LOCAL_STACK_FRAME(_hx_pos_28b5c20fe90f2f2d_130_createButton,"flixel.ui.FlxVirtualPad","createButton",0xad434a4a,"flixel.ui.FlxVirtualPad.createButton","flixel/ui/FlxVirtualPad.hx",130,0x865d16ec)
namespace flixel{
namespace ui{

void FlxVirtualPad_obj::__construct( ::flixel::ui::FlxDPadMode DPad, ::flixel::ui::FlxActionMode Action){
            	HX_GC_STACKFRAME(&_hx_pos_28b5c20fe90f2f2d_45_new)
HXLINE(  46)		super::__construct(null(),null(),null());
HXLINE(  47)		this->scrollFactor->set(null(),null());
HXLINE(  49)		if (::hx::IsNull( DPad )) {
HXLINE(  50)			DPad = ::flixel::ui::FlxDPadMode_obj::FULL_dyn();
            		}
HXLINE(  51)		if (::hx::IsNull( Action )) {
HXLINE(  52)			Action = ::flixel::ui::FlxActionMode_obj::A_B_C_dyn();
            		}
HXLINE(  54)		this->dPad =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  55)		this->dPad->scrollFactor->set(null(),null());
HXLINE(  57)		this->actions =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  58)		this->actions->scrollFactor->set(null(),null());
HXLINE(  60)		switch((int)(DPad->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE(  63)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->dPad;
HXDLIN(  63)				_hx_tmp->add(this->add((this->buttonUp = this->createButton(( (Float)(0) ),( (Float)((::flixel::FlxG_obj::height - 85)) ),44,45,HX_("up",5b,66,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  64)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp1 = this->dPad;
HXDLIN(  64)				_hx_tmp1->add(this->add((this->buttonDown = this->createButton(( (Float)(0) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("down",62,f8,6d,42),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            			case (int)2: {
HXLINE(  66)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->dPad;
HXDLIN(  66)				_hx_tmp->add(this->add((this->buttonLeft = this->createButton(( (Float)(0) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("left",07,08,b0,47),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  67)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp1 = this->dPad;
HXDLIN(  67)				_hx_tmp1->add(this->add((this->buttonRight = this->createButton(( (Float)(42) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("right",dc,0b,64,e9),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            			case (int)3: {
HXLINE(  69)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->dPad;
HXDLIN(  69)				_hx_tmp->add(this->add((this->buttonUp = this->createButton(( (Float)(35) ),( (Float)((::flixel::FlxG_obj::height - 81)) ),44,45,HX_("up",5b,66,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  70)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp1 = this->dPad;
HXDLIN(  70)				_hx_tmp1->add(this->add((this->buttonLeft = this->createButton(( (Float)(0) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("left",07,08,b0,47),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  71)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp2 = this->dPad;
HXDLIN(  71)				_hx_tmp2->add(this->add((this->buttonRight = this->createButton(( (Float)(69) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("right",dc,0b,64,e9),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            			case (int)4: {
HXLINE(  73)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->dPad;
HXDLIN(  73)				_hx_tmp->add(this->add((this->buttonUp = this->createButton(( (Float)(35) ),( (Float)((::flixel::FlxG_obj::height - 116)) ),44,45,HX_("up",5b,66,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  74)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp1 = this->dPad;
HXDLIN(  74)				_hx_tmp1->add(this->add((this->buttonLeft = this->createButton(( (Float)(0) ),( (Float)((::flixel::FlxG_obj::height - 81)) ),44,45,HX_("left",07,08,b0,47),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  75)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp2 = this->dPad;
HXDLIN(  75)				_hx_tmp2->add(this->add((this->buttonRight = this->createButton(( (Float)(69) ),( (Float)((::flixel::FlxG_obj::height - 81)) ),44,45,HX_("right",dc,0b,64,e9),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  76)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp3 = this->dPad;
HXDLIN(  76)				_hx_tmp3->add(this->add((this->buttonDown = this->createButton(( (Float)(35) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("down",62,f8,6d,42),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            		}
HXLINE(  80)		switch((int)(Action->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE(  83)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->actions;
HXDLIN(  83)				_hx_tmp->add(this->add((this->buttonA = this->createButton(( (Float)((::flixel::FlxG_obj::width - 44)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("a",61,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            			case (int)2: {
HXLINE(  85)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->actions;
HXDLIN(  85)				_hx_tmp->add(this->add((this->buttonA = this->createButton(( (Float)((::flixel::FlxG_obj::width - 44)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("a",61,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  86)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp1 = this->actions;
HXDLIN(  86)				_hx_tmp1->add(this->add((this->buttonB = this->createButton(( (Float)((::flixel::FlxG_obj::width - 86)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("b",62,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            			case (int)3: {
HXLINE(  88)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->actions;
HXDLIN(  88)				_hx_tmp->add(this->add((this->buttonA = this->createButton(( (Float)((::flixel::FlxG_obj::width - 128)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("a",61,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  89)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp1 = this->actions;
HXDLIN(  89)				_hx_tmp1->add(this->add((this->buttonB = this->createButton(( (Float)((::flixel::FlxG_obj::width - 86)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("b",62,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  90)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp2 = this->actions;
HXDLIN(  90)				_hx_tmp2->add(this->add((this->buttonC = this->createButton(( (Float)((::flixel::FlxG_obj::width - 44)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("c",63,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            			case (int)4: {
HXLINE(  92)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp = this->actions;
HXDLIN(  92)				_hx_tmp->add(this->add((this->buttonY = this->createButton(( (Float)((::flixel::FlxG_obj::width - 86)) ),( (Float)((::flixel::FlxG_obj::height - 85)) ),44,45,HX_("y",79,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  93)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp1 = this->actions;
HXDLIN(  93)				_hx_tmp1->add(this->add((this->buttonX = this->createButton(( (Float)((::flixel::FlxG_obj::width - 44)) ),( (Float)((::flixel::FlxG_obj::height - 85)) ),44,45,HX_("x",78,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  94)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp2 = this->actions;
HXDLIN(  94)				_hx_tmp2->add(this->add((this->buttonB = this->createButton(( (Float)((::flixel::FlxG_obj::width - 86)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("b",62,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  95)				 ::flixel::group::FlxTypedSpriteGroup _hx_tmp3 = this->actions;
HXDLIN(  95)				_hx_tmp3->add(this->add((this->buttonA = this->createButton(( (Float)((::flixel::FlxG_obj::width - 44)) ),( (Float)((::flixel::FlxG_obj::height - 45)) ),44,45,HX_("a",61,00,00,00),null())))).StaticCast<  ::flixel::FlxSprite >();
            			}
            			break;
            		}
            	}

Dynamic FlxVirtualPad_obj::__CreateEmpty() { return new FlxVirtualPad_obj; }

void *FlxVirtualPad_obj::_hx_vtable = 0;

Dynamic FlxVirtualPad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxVirtualPad_obj > _hx_result = new FlxVirtualPad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxVirtualPad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4344e826) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x4344e826;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxVirtualPad_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_28b5c20fe90f2f2d_101_destroy)
HXLINE( 102)		this->super::destroy();
HXLINE( 104)		this->dPad = ( ( ::flixel::group::FlxTypedSpriteGroup)(::flixel::util::FlxDestroyUtil_obj::destroy(this->dPad)) );
HXLINE( 105)		this->actions = ( ( ::flixel::group::FlxTypedSpriteGroup)(::flixel::util::FlxDestroyUtil_obj::destroy(this->actions)) );
HXLINE( 107)		this->dPad = null();
HXLINE( 108)		this->actions = null();
HXLINE( 109)		this->buttonA = null();
HXLINE( 110)		this->buttonB = null();
HXLINE( 111)		this->buttonC = null();
HXLINE( 112)		this->buttonY = null();
HXLINE( 113)		this->buttonX = null();
HXLINE( 114)		this->buttonLeft = null();
HXLINE( 115)		this->buttonUp = null();
HXLINE( 116)		this->buttonDown = null();
HXLINE( 117)		this->buttonRight = null();
            	}


 ::flixel::ui::FlxButton FlxVirtualPad_obj::createButton(Float X,Float Y,int Width,int Height,::String Graphic, ::Dynamic OnClick){
            	HX_GC_STACKFRAME(&_hx_pos_28b5c20fe90f2f2d_130_createButton)
HXLINE( 131)		 ::flixel::ui::FlxButton button =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,X,Y,null(),null());
HXLINE( 132)		 ::flixel::graphics::frames::FlxFrame frame = ( ( ::flixel::graphics::frames::FlxFrame)(::flixel::_hx_system::FlxAssets_obj::getVirtualInputFrames()->framesHash->get(Graphic)) );
HXLINE( 133)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(Width,Height);
HXDLIN( 133)		point->_inPool = false;
HXDLIN( 133)		button->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromFrame(frame,point,null()));
HXLINE( 134)		{
HXLINE( 134)			button->set_width(( (Float)(button->frameWidth) ));
HXDLIN( 134)			button->set_height(( (Float)(button->frameHeight) ));
            		}
HXLINE( 135)		button->set_solid(false);
HXLINE( 136)		button->set_immovable(true);
HXLINE( 137)		button->scrollFactor->set(null(),null());
HXLINE( 143)		if (::hx::IsNotNull( OnClick )) {
HXLINE( 144)			button->onDown->callback = OnClick;
            		}
HXLINE( 146)		return button;
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxVirtualPad_obj,createButton,return )


::hx::ObjectPtr< FlxVirtualPad_obj > FlxVirtualPad_obj::__new( ::flixel::ui::FlxDPadMode DPad, ::flixel::ui::FlxActionMode Action) {
	::hx::ObjectPtr< FlxVirtualPad_obj > __this = new FlxVirtualPad_obj();
	__this->__construct(DPad,Action);
	return __this;
}

::hx::ObjectPtr< FlxVirtualPad_obj > FlxVirtualPad_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::ui::FlxDPadMode DPad, ::flixel::ui::FlxActionMode Action) {
	FlxVirtualPad_obj *__this = (FlxVirtualPad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxVirtualPad_obj), true, "flixel.ui.FlxVirtualPad"));
	*(void **)__this = FlxVirtualPad_obj::_hx_vtable;
	__this->__construct(DPad,Action);
	return __this;
}

FlxVirtualPad_obj::FlxVirtualPad_obj()
{
}

void FlxVirtualPad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVirtualPad);
	HX_MARK_MEMBER_NAME(buttonA,"buttonA");
	HX_MARK_MEMBER_NAME(buttonB,"buttonB");
	HX_MARK_MEMBER_NAME(buttonC,"buttonC");
	HX_MARK_MEMBER_NAME(buttonY,"buttonY");
	HX_MARK_MEMBER_NAME(buttonX,"buttonX");
	HX_MARK_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_MARK_MEMBER_NAME(buttonUp,"buttonUp");
	HX_MARK_MEMBER_NAME(buttonRight,"buttonRight");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(dPad,"dPad");
	HX_MARK_MEMBER_NAME(actions,"actions");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxVirtualPad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonA,"buttonA");
	HX_VISIT_MEMBER_NAME(buttonB,"buttonB");
	HX_VISIT_MEMBER_NAME(buttonC,"buttonC");
	HX_VISIT_MEMBER_NAME(buttonY,"buttonY");
	HX_VISIT_MEMBER_NAME(buttonX,"buttonX");
	HX_VISIT_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_VISIT_MEMBER_NAME(buttonUp,"buttonUp");
	HX_VISIT_MEMBER_NAME(buttonRight,"buttonRight");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(dPad,"dPad");
	HX_VISIT_MEMBER_NAME(actions,"actions");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxVirtualPad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { return ::hx::Val( dPad ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { return ::hx::Val( buttonA ); }
		if (HX_FIELD_EQ(inName,"buttonB") ) { return ::hx::Val( buttonB ); }
		if (HX_FIELD_EQ(inName,"buttonC") ) { return ::hx::Val( buttonC ); }
		if (HX_FIELD_EQ(inName,"buttonY") ) { return ::hx::Val( buttonY ); }
		if (HX_FIELD_EQ(inName,"buttonX") ) { return ::hx::Val( buttonX ); }
		if (HX_FIELD_EQ(inName,"actions") ) { return ::hx::Val( actions ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { return ::hx::Val( buttonUp ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { return ::hx::Val( buttonLeft ); }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return ::hx::Val( buttonDown ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { return ::hx::Val( buttonRight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createButton") ) { return ::hx::Val( createButton_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxVirtualPad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { dPad=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { buttonA=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonB") ) { buttonB=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonC") ) { buttonC=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonY") ) { buttonY=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonX") ) { buttonX=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actions") ) { actions=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { buttonUp=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { buttonLeft=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { buttonRight=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVirtualPad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buttonA",0f,52,75,ca));
	outFields->push(HX_("buttonB",10,52,75,ca));
	outFields->push(HX_("buttonC",11,52,75,ca));
	outFields->push(HX_("buttonY",27,52,75,ca));
	outFields->push(HX_("buttonX",26,52,75,ca));
	outFields->push(HX_("buttonLeft",19,77,a6,b1));
	outFields->push(HX_("buttonUp",ed,8c,32,5c));
	outFields->push(HX_("buttonRight",8a,cc,0e,37));
	outFields->push(HX_("buttonDown",74,67,64,ac));
	outFields->push(HX_("dPad",4f,5f,56,42));
	outFields->push(HX_("actions",fd,03,2e,67));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxVirtualPad_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonA),HX_("buttonA",0f,52,75,ca)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonB),HX_("buttonB",10,52,75,ca)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonC),HX_("buttonC",11,52,75,ca)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonY),HX_("buttonY",27,52,75,ca)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonX),HX_("buttonX",26,52,75,ca)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonLeft),HX_("buttonLeft",19,77,a6,b1)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonUp),HX_("buttonUp",ed,8c,32,5c)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonRight),HX_("buttonRight",8a,cc,0e,37)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(FlxVirtualPad_obj,buttonDown),HX_("buttonDown",74,67,64,ac)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(FlxVirtualPad_obj,dPad),HX_("dPad",4f,5f,56,42)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(FlxVirtualPad_obj,actions),HX_("actions",fd,03,2e,67)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxVirtualPad_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxVirtualPad_obj_sMemberFields[] = {
	HX_("buttonA",0f,52,75,ca),
	HX_("buttonB",10,52,75,ca),
	HX_("buttonC",11,52,75,ca),
	HX_("buttonY",27,52,75,ca),
	HX_("buttonX",26,52,75,ca),
	HX_("buttonLeft",19,77,a6,b1),
	HX_("buttonUp",ed,8c,32,5c),
	HX_("buttonRight",8a,cc,0e,37),
	HX_("buttonDown",74,67,64,ac),
	HX_("dPad",4f,5f,56,42),
	HX_("actions",fd,03,2e,67),
	HX_("destroy",fa,2c,86,24),
	HX_("createButton",0e,a2,35,fc),
	::String(null()) };

::hx::Class FlxVirtualPad_obj::__mClass;

void FlxVirtualPad_obj::__register()
{
	FlxVirtualPad_obj _hx_dummy;
	FlxVirtualPad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.ui.FlxVirtualPad",b2,bd,5a,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxVirtualPad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxVirtualPad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxVirtualPad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxVirtualPad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace ui
