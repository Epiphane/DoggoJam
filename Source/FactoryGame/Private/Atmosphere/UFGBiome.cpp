// This file has been automatically generated by the Unreal Header Implementation tool

#include "Atmosphere/UFGBiome.h"

UFGBiome::UFGBiome() : Super() {
	this->BaseBiome = nullptr;
	this->DebugName = TEXT("None");
	this->WeatherStatesMask = 0;
	this->FogHeight.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FogHeight.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogHeight.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogHeight.mCurveData.ExternalCurve = nullptr;
	this->FogDensity.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FogDensity.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogDensity.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogDensity.mCurveData.ExternalCurve = nullptr;
	this->FogInscatteringColor.mCurveData.ExternalCurve = nullptr;
	this->FullyDirectionalInscatteringColorDistance.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FullyDirectionalInscatteringColorDistance.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FullyDirectionalInscatteringColorDistance.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FullyDirectionalInscatteringColorDistance.mCurveData.ExternalCurve = nullptr;
	this->NonDirectionalInscatteringColorDistance.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->NonDirectionalInscatteringColorDistance.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->NonDirectionalInscatteringColorDistance.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->NonDirectionalInscatteringColorDistance.mCurveData.ExternalCurve = nullptr;
	this->DirectionalInscatteringExponent.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->DirectionalInscatteringExponent.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->DirectionalInscatteringExponent.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->DirectionalInscatteringExponent.mCurveData.ExternalCurve = nullptr;
	this->DirectionalInscatteringStartDistance.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->DirectionalInscatteringStartDistance.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->DirectionalInscatteringStartDistance.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->DirectionalInscatteringStartDistance.mCurveData.ExternalCurve = nullptr;
	this->DirectionalInscatteringColor.mCurveData.ExternalCurve = nullptr;
	this->FogHeightFalloff.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FogHeightFalloff.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogHeightFalloff.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogHeightFalloff.mCurveData.ExternalCurve = nullptr;
	this->FogMaxOpacity.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FogMaxOpacity.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogMaxOpacity.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogMaxOpacity.mCurveData.ExternalCurve = nullptr;
	this->StartDistance.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->StartDistance.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->StartDistance.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->StartDistance.mCurveData.ExternalCurve = nullptr;
	this->FogCutoffDistance.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FogCutoffDistance.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogCutoffDistance.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FogCutoffDistance.mCurveData.ExternalCurve = nullptr;
	this->SecondFogDensity.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->SecondFogDensity.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SecondFogDensity.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SecondFogDensity.mCurveData.ExternalCurve = nullptr;
	this->SecondFogHeightFalloff.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->SecondFogHeightFalloff.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SecondFogHeightFalloff.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SecondFogHeightFalloff.mCurveData.ExternalCurve = nullptr;
	this->SecondFogHeightOffset.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->SecondFogHeightOffset.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SecondFogHeightOffset.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SecondFogHeightOffset.mCurveData.ExternalCurve = nullptr;
	this->CloudColor.mCurveData.ExternalCurve = nullptr;
	this->SunLightColor.mCurveData.ExternalCurve = nullptr;
	this->MoonLightColor.mCurveData.ExternalCurve = nullptr;
	this->SunIntensity.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->SunIntensity.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SunIntensity.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->SunIntensity.mCurveData.ExternalCurve = nullptr;
	this->MoonIntensity.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->MoonIntensity.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MoonIntensity.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MoonIntensity.mCurveData.ExternalCurve = nullptr;
	this->CloudOpacity.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->CloudOpacity.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->CloudOpacity.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->CloudOpacity.mCurveData.ExternalCurve = nullptr;
	this->mBlendWeight = 0.0;
	this->WhiteTemp.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->WhiteTemp.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->WhiteTemp.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->WhiteTemp.mCurveData.ExternalCurve = nullptr;
	this->WhiteTint.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->WhiteTint.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->WhiteTint.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->WhiteTint.mCurveData.ExternalCurve = nullptr;
	this->ColorSaturation.mCurveData.ExternalCurve = nullptr;
	this->ColorContrast.mCurveData.ExternalCurve = nullptr;
	this->ColorGamma.mCurveData.ExternalCurve = nullptr;
	this->ColorGain.mCurveData.ExternalCurve = nullptr;
	this->ColorOffset.mCurveData.ExternalCurve = nullptr;
	this->ColorSaturationShadows.mCurveData.ExternalCurve = nullptr;
	this->ColorContrastShadows.mCurveData.ExternalCurve = nullptr;
	this->ColorGammaShadows.mCurveData.ExternalCurve = nullptr;
	this->ColorGainShadows.mCurveData.ExternalCurve = nullptr;
	this->ColorOffsetShadows.mCurveData.ExternalCurve = nullptr;
	this->ColorSaturationMidtones.mCurveData.ExternalCurve = nullptr;
	this->ColorContrastMidtones.mCurveData.ExternalCurve = nullptr;
	this->ColorGammaMidtones.mCurveData.ExternalCurve = nullptr;
	this->ColorGainMidtones.mCurveData.ExternalCurve = nullptr;
	this->ColorOffsetMidtones.mCurveData.ExternalCurve = nullptr;
	this->ColorSaturationHighlights.mCurveData.ExternalCurve = nullptr;
	this->ColorContrastHighlights.mCurveData.ExternalCurve = nullptr;
	this->ColorGammaHighlights.mCurveData.ExternalCurve = nullptr;
	this->ColorGainHighlights.mCurveData.ExternalCurve = nullptr;
	this->ColorOffsetHighlights.mCurveData.ExternalCurve = nullptr;
	this->ColorCorrectionHighlightsMin.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->ColorCorrectionHighlightsMin.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->ColorCorrectionHighlightsMin.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->ColorCorrectionHighlightsMin.mCurveData.ExternalCurve = nullptr;
	this->ColorCorrectionShadowsMax.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->ColorCorrectionShadowsMax.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->ColorCorrectionShadowsMax.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->ColorCorrectionShadowsMax.mCurveData.ExternalCurve = nullptr;
	this->BlueCorrection.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->BlueCorrection.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->BlueCorrection.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->BlueCorrection.mCurveData.ExternalCurve = nullptr;
	this->ExpandGamut.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->ExpandGamut.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->ExpandGamut.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->ExpandGamut.mCurveData.ExternalCurve = nullptr;
	this->SceneColorTint.mCurveData.ExternalCurve = nullptr;
	this->FilmSlope.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FilmSlope.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmSlope.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmSlope.mCurveData.ExternalCurve = nullptr;
	this->FilmToe.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FilmToe.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmToe.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmToe.mCurveData.ExternalCurve = nullptr;
	this->FilmShoulder.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FilmShoulder.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmShoulder.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmShoulder.mCurveData.ExternalCurve = nullptr;
	this->FilmBlackClip.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FilmBlackClip.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmBlackClip.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmBlackClip.mCurveData.ExternalCurve = nullptr;
	this->FilmWhiteClip.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->FilmWhiteClip.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmWhiteClip.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->FilmWhiteClip.mCurveData.ExternalCurve = nullptr;
	this->RayleighScattering.mCurveData.ExternalCurve = nullptr;
	this->RayleighScatteringScale.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->RayleighScatteringScale.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->RayleighScatteringScale.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->RayleighScatteringScale.mCurveData.ExternalCurve = nullptr;
	this->RayleighExponentialDistribution.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->RayleighExponentialDistribution.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->RayleighExponentialDistribution.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->RayleighExponentialDistribution.mCurveData.ExternalCurve = nullptr;
	this->MieScatteringScale.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->MieScatteringScale.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieScatteringScale.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieScatteringScale.mCurveData.ExternalCurve = nullptr;
	this->MieScattering.mCurveData.ExternalCurve = nullptr;
	this->MieAbsorptionScale.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->MieAbsorptionScale.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieAbsorptionScale.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieAbsorptionScale.mCurveData.ExternalCurve = nullptr;
	this->MieAbsorption.mCurveData.ExternalCurve = nullptr;
	this->MieAnisotropy.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->MieAnisotropy.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieAnisotropy.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieAnisotropy.mCurveData.ExternalCurve = nullptr;
	this->MieExponentialDistribution.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->MieExponentialDistribution.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieExponentialDistribution.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->MieExponentialDistribution.mCurveData.ExternalCurve = nullptr;
	this->OtherAbsorptionScale.mCurveData.EditorCurveData.DefaultValue = 3.40282e+38;
	this->OtherAbsorptionScale.mCurveData.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->OtherAbsorptionScale.mCurveData.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->OtherAbsorptionScale.mCurveData.ExternalCurve = nullptr;
	this->OtherAbsorption.mCurveData.ExternalCurve = nullptr;
	this->OverrideFogDensity = false;
	this->OverrideFogInscatteringColor = false;
	this->OverrideFullyDirectionalInscatteringColorDistance = false;
	this->OverrideNonDirectionalInscatteringColorDistance = false;
	this->OverrideDirectionalInscatteringExponent = false;
	this->OverrideDirectionalInscatteringStartDistance = false;
	this->OverrideDirectionalInscatteringColor = false;
	this->OverrideFogHeightFalloff = false;
	this->OverrideFogMaxOpacity = false;
	this->OverrideStartDistance = false;
	this->OverrideFogCutoffDistance = false;
	this->OverrideFogHeight = false;
	this->OverrideSecondFogDensity = false;
	this->OverrideSecondFogHeightFalloff = false;
	this->OverrideSecondFogHeightOffset = false;
	this->OverrideZenithColor = false;
	this->OverrideCloudColor = false;
	this->OverrideSunLightColor = false;
	this->OverrideMoonLightColor = false;
	this->OverrideSunIntensity = false;
	this->OverrideMoonIntensity = false;
	this->OverrideCloudOpacity = false;
	this->OverrideWhiteTemp = false;
	this->OverrideWhiteTint = false;
	this->OverrideColorSaturation = false;
	this->OverrideColorContrast = false;
	this->OverrideColorGamma = false;
	this->OverrideColorGain = false;
	this->OverrideColorOffset = false;
	this->OverrideColorSaturationShadows = false;
	this->OverrideColorContrastShadows = false;
	this->OverrideColorGammaShadows = false;
	this->OverrideColorGainShadows = false;
	this->OverrideColorOffsetShadows = false;
	this->OverrideColorSaturationMidtones = false;
	this->OverrideColorContrastMidtones = false;
	this->OverrideColorGammaMidtones = false;
	this->OverrideColorGainMidtones = false;
	this->OverrideColorOffsetMidtones = false;
	this->OverrideColorSaturationHighlights = false;
	this->OverrideColorContrastHighlights = false;
	this->OverrideColorGammaHighlights = false;
	this->OverrideColorGainHighlights = false;
	this->OverrideColorOffsetHighlights = false;
	this->OverrideColorCorrectionHighlightsMin = false;
	this->OverrideColorCorrectionShadowsMax = false;
	this->OverrideBlueCorrection = false;
	this->OverrideExpandGamut = false;
	this->OverrideSceneColorTint = false;
	this->OverrideFilmSlope = false;
	this->OverrideFilmToe = false;
	this->OverrideFilmShoulder = false;
	this->OverrideFilmBlackClip = false;
	this->OverrideFilmWhiteClip = false;
	this->OverrideRayleighScattering = false;
	this->OverrideRayleighScatteringScale = false;
	this->OverrideRayleighExponentialDistribution = false;
	this->OverrideMieScatteringScale = false;
	this->OverrideMieScattering = false;
	this->OverrideMieAbsorptionScale = false;
	this->OverrideMieAbsorption = false;
	this->OverrideMieAnisotropy = false;
	this->OverrideMieExponentialDistribution = false;
	this->OverrideOtherAbsorptionScale = false;
	this->OverrideOtherAbsorption = false;
}
