// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableAttachmentSplitter.h"
#include "Hologram/FGAttachmentSplitterHologram.h"

AFGBuildableAttachmentSplitter::AFGBuildableAttachmentSplitter() : Super() {
	this->mCurrentOutputIndex = -1;
	this->mCurrentInventoryIndex = 0;
	this->mPowerInfoClass = nullptr;
	this->mMinimumProducingTime = -1.0;
	this->mMinimumStoppedTime = -1.0;
	this->mHologramClass = AFGAttachmentSplitterHologram::StaticClass();
}
void AFGBuildableAttachmentSplitter::BeginPlay(){ }
void AFGBuildableAttachmentSplitter::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildableAttachmentSplitter::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableAttachmentSplitter::Factory_Tick(float deltaTime){ }
bool AFGBuildableAttachmentSplitter::Factory_GrabOutput_Implementation(UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
void AFGBuildableAttachmentSplitter::FillDistributionTable(float deltaTime){ }
uint8 AFGBuildableAttachmentSplitter::EstimatedMaxNumGrabFromConveyor(UFGFactoryConnectionComponent* factoryConnection, float dt) const{ return uint8(); }
