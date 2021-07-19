#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_DraugrBehavior.h>

enum Variables
{
    kblendMoveStart = 0,
    kblendMove1stP = 1,
    kblendMoveStop = 2,
    kTurnDelta = 3,
    kblendDefault = 4,
    kDirection = 5,
    kSpeed = 6,
    kiWantSprint = 7,
    kiSyncTurnState = 8,
    kiRightHandType = 9,
    kiLeftHandType = 10,
    kbIsSynced = 11,
    kbAnimationDriven = 12,
    kIsStaggering = 13,
    kiSyncIdleLocomotion = 14,
    kblendFast = 15,
    kIsAttackReady = 16,
    kbAllowRotation = 17,
    kIsBlocking = 18,
    kIsPlayer = 19,
    kPitch = 20,
    kIsFiringBow = 21,
    kBowZoom = 22,
    kBoolVariable = 23,
    kIsEquipping = 24,
    kIsUnequipping = 25,
    kbWeapReady = 26,
    kstaggerMagnitude = 27,
    kcurrentDefaultState = 28,
    kbEquipOk = 29,
    kiWantBlock = 30,
    ki1HMState = 31,
    kIsBashing = 32,
    kiState = 33,
    kiState_DraugrDefault = 34,
    kiState_DraugrBlocking = 35,
    kSampledSpeed = 36,
    kiEquippedItemState = 37,
    kbMLh_Ready = 38,
    kIsCastingLeft = 39,
    kIsCastingRight = 40,
    kInDualMagicState = 41,
    kIsCastingDual = 42,
    kIsInCastStateDamped = 43,
    kIsBlockHit = 44,
    kbWantCastLeft = 45,
    kIsInCastState = 46,
    kBlendAcc = 47,
    kbInMoveState = 48,
    kIsPowerAttacking = 49,
    kbCastReady = 50,
    kbVoiceReady = 51,
    kbWantCastVoice = 52,
    kTimeDelta = 53,
    kiState_DraugrRanged = 54,
    kiState_Draugr1HM = 55,
    kiState_DraugrBattleAxe = 56,
    kiState_DraugrGreatSword = 57,
    kiState_DraugrH2H = 58,
    kiState_DraugrBow = 59,
    kiState_DraugrBowDrawn = 60,
    kiState_Draugr2GSBlocking = 61,
    kiState_Draugr2HMBlocking = 62,
    kbHeadTrackingOn = 63,
    kTargetLocation = 64,
    kcamerafromx = 65,
    kcamerafromy = 66,
    kcamerafromz = 67,
    kbCanHeadTrack = 68,
    kIsBleedingOut = 69,
    kbHeadTracking = 70,
    kiState_DraugrShieldBlocking = 71,
    kblendCyclic = 72,
    kstaggerDirection = 73,
    kbInFurniture = 74,
    kiGetUpType = 75,
    ktest = 76,
};

static const char* s_variableNames =
    "blendMoveStartblendMove1stPblendMoveStopTurnDeltablendDefaultDirectionSpeediWantSprintiSyncTurnStateiRightHandType"
    "iLeftHandTypebIsSyncedbAnimationDrivenIsStaggeringiSyncIdleLocomotionblendFastIsAttackReadybAllowRotationIsBlockin"
    "gIsPlayerPitchIsFiringBowBowZoomBoolVariableIsEquippingIsUnequippingbWeapReadystaggerMagnitudecurrentDefaultStateb"
    "EquipOkiWantBlocki1HMStateIsBashingiStateiState_DraugrDefaultiState_"
    "DraugrBlockingSampledSpeediEquippedItemStatebMLh_"
    "ReadyIsCastingLeftIsCastingRightInDualMagicStateIsCastingDualIsInCastStateDampedIsBlockHitbWantCastLeftIsInCastSta"
    "teBlendAccbInMoveStateIsPowerAttackingbCastReadybVoiceReadybWantCastVoiceTimeDeltaiState_DraugrRangediState_"
    "Draugr1HMiState_DraugrBattleAxeiState_DraugrGreatSwordiState_DraugrH2HiState_DraugrBowiState_DraugrBowDrawniState_"
    "Draugr2GSBlockingiState_"
    "Draugr2HMBlockingbHeadTrackingOnTargetLocationcamerafromxcamerafromycamerafromzbCanHeadTrackIsBleedingOutbHeadTrac"
    "kingiState_DraugrShieldBlockingblendCyclicstaggerDirectionbInFurnitureiGetUpTypetest";

AnimationGraphDescriptor_DraugrBehavior::AnimationGraphDescriptor_DraugrBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{76, strlen(s_variableNames)};
    
    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
        {kbAnimationDriven,
            kIsAttackReady,
            kbAllowRotation,
            kIsFiringBow,
            kIsEquipping,
            kIsUnequipping,
            kbWeapReady,
            kbEquipOk,
            kbMLh_Ready,
            kbCastReady,
            kbCanHeadTrack,
            kbHeadTracking},
        {kTurnDelta,
            kDirection,
            kSpeed,
            kSampledSpeed},
        {kiSyncTurnState,
            kiRightHandType,
            kiLeftHandType,
            kiSyncIdleLocomotion,
            kcurrentDefaultState,
            kiState}));
}
