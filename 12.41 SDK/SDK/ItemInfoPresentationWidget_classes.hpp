#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2A0 - 0x288)
// WidgetBlueprintGeneratedClass ItemInfoPresentationWidget.ItemInfoPresentationWidget_C
class UItemInfoPresentationWidget_C : public UFortItemInfoPresentationWidget
{
public:
	class UWidgetAnimation*                      FadeAnim;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitialState;                                      // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroAnim;                                         // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemInfoPresentationWidget_C* GetDefaultObj();

	void HandleOutro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}


