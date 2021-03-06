// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableResourceSink.h"

AFGBuildableResourceSink::AFGBuildableResourceSink() : Super() {
	this->mCouponInventory = nullptr;
	this->mResourceSinkSubsystem = nullptr;
	this->mCouponClass = nullptr;
	this->mProcessingTime = 3.0;
	this->mProducingTimer = 0.0;
}
void AFGBuildableResourceSink::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableResourceSink, mCouponInventory);
}
void AFGBuildableResourceSink::BeginPlay(){ }
void AFGBuildableResourceSink::Tick(float dt){ }
void AFGBuildableResourceSink::Destroyed(){ }
void AFGBuildableResourceSink::Factory_CollectInput_Implementation(){ }
bool AFGBuildableResourceSink::CanProduce_Implementation() const{ return bool(); }
int32 AFGBuildableResourceSink::ClaimCoupons(int32 numCoupons){ return int32(); }
void AFGBuildableResourceSink::ReturnUnclaimedCoupons(){ }
