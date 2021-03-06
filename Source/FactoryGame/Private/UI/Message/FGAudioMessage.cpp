// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/Message/FGAudioMessage.h"

bool FMessageDialogue::HasMoreSubtitlesToShow() const{ return bool(); }
FMessageSubtitle FMessageDialogue::PopNextSubtitle(float subtitleTimeMultiplier){ return FMessageSubtitle(); }
bool FPendingMessageQueue::HasUnplayedMessages(){ return bool(); }
bool FPendingMessageQueue::ContainsAudioMessages(){ return bool(); }
FPendingMessage FPendingMessageQueue::PopPendingMessage(){ return FPendingMessage(); }
#if WITH_EDITOR
void UFGAudioMessage::MigrateDialogueData(){ }
#endif 
UFGAudioMessage::UFGAudioMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mAkAudioComponent = nullptr;
	this->mCurrentDialogue.AudioEvent = nullptr;
	this->mCurrentDialogue.OverlapWithNextDialogue = 0.0;
	this->mSubtitleTimeMultiplier = 0.065;
	this->mOverrideText = INVTEXT("");
	this->mShowOnlyOverrideText = false;
	this->mAudioMessageInputComponent = nullptr;
}
void UFGAudioMessage::PostLoad(){ Super::PostLoad(); }
void UFGAudioMessage::NativeConstruct(){ }
void UFGAudioMessage::NativeDestruct(){ }
void UFGAudioMessage::StartPlayback(){ }
void UFGAudioMessage::OnSkipButtonPressed(){ }
void UFGAudioMessage::OnSkipButtonReleased(){ }
void UFGAudioMessage::PlayNextDialogue_Implementation(){ }
void UFGAudioMessage::ContinuePlayback(){ }
void UFGAudioMessage::CancelPlayback(){ }
void UFGAudioMessage::FinishPlayback(){ }
FAudioSubtitlePair UFGAudioMessage::GetCurrentDialogue(){ return FAudioSubtitlePair(); }
EMessagePriorityType UFGAudioMessage::GetMessagePriorityType(TSubclassOf< UFGAudioMessage > message, UObject* worldContext){ return EMessagePriorityType(); }
