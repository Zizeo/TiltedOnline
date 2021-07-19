#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_HorseRootBehavior.h>

enum Variables
{
    kiSyncIdleLocomotion = 0,
    kblendDefault = 1,
    kfMinSpeed = 2,
    kSpeed = 3,
    kiSyncTurnDirection = 4,
    kiSyncForwardState = 5,
    kTurnDelta = 6,
    kfMinTurnDelta = 7,
    kturnSpeedMult = 8,
    kiCombatStance = 9,
    kbHeadTrackingOn = 10,
    kTargetLocation = 11,
    km_onOffGain = 12,
    km_groundAscendingGain = 13,
    km_groundDescendingGain = 14,
    km_footPlantedGain = 15,
    km_footRaisedGain = 16,
    km_footUnlockGain = 17,
    km_worldFromModelFeedbackGain = 18,
    km_errorUpDownBias = 19,
    km_alignWorldFromModelGain = 20,
    km_hipOrientationGain = 21,
    km_footPlantedAnkleHeightMS = 22,
    km_footRaisedAnkleHeightMS = 23,
    km_maxAnkleHeightMS = 24,
    km_minAnkleHeightMS = 25,
    kblendFast = 26,
    kbAnimationDriven = 27,
    kbAllowRotation = 28,
    kbHeadTracking = 29,
    kbDisableHeadTrack = 30,
    kIsRecoiling = 31,
    kIsStaggering = 32,
    kIsAttacking = 33,
    kstaggerMagnitude = 34,
    kIsBleedingOut = 35,
    kbIsSynced = 36,
    kbEquipOk = 37,
    kbCanHeadTrack = 38,
    kblendVerySlow = 39,
    kisIdleSitting = 40,
    kbMirroredAttack = 41,
    kiState = 42,
    kiCharacterSelector = 43,
    kfMinMoveSpeed = 44,
    kDirection = 45,
    kIsAttackReady = 46,
    kiState_HorseDefault = 47,
    kTurnDeltaDamped = 48,
    kiSyncSprintState = 49,
    kiState_HorseSprint = 50,
    kfTwistDirection = 51,
    kIsSprinting = 52,
    kHorseSpeedSampled = 53,
    kDirectionDamped = 54,
    kDirectionRange = 55,
    kDirectionRangeDamped = 56,
    kIsBashing = 57,
    kIsDismounting = 58,
    kblendFromAnimDriven = 59,
    kwalkBackRate = 60,
    kwalkBackSpeedMult = 61,
    kcamerafromx = 62,
    kcamerafromy = 63,
    kcamerafromz = 64,
    kbInJumpState = 65,
    kiState_HorseFall = 66,
    kiGetUpType = 67,
    kbInSwimState = 68,
    kiState_HorseSwim = 69,
    kstaggerDirection = 70,
    kblendSlow = 71,
    kbForceIdleStop = 72,
    kbHorseFootIKEnable = 73,
    kbNoHeadTrack = 74,
    kisMoving = 75,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionblendDefaultfMinSpeedSpeediSyncTurnDirectioniSyncForwardStateTurnDeltafMinTurnDeltaturnSpeedMul"
    "tiCombatStancebHeadTrackingOnTargetLocationm_onOffGainm_groundAscendingGainm_groundDescendingGainm_"
    "footPlantedGainm_footRaisedGainm_footUnlockGainm_worldFromModelFeedbackGainm_errorUpDownBiasm_"
    "alignWorldFromModelGainm_hipOrientationGainm_footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSblendFastbAnimationDrivenbAllowRotationbHeadTrackingbDisableHeadTrackIsRecoilingIsStaggeringIsAtta"
    "ckingstaggerMagnitudeIsBleedingOutbIsSyncedbEquipOkbCanHeadTrackblendVerySlowisIdleSittingbMirroredAttackiStateiCh"
    "aracterSelectorfMinMoveSpeedDirectionIsAttackReadyiState_HorseDefaultTurnDeltaDampediSyncSprintStateiState_"
    "HorseSprintfTwistDirectionIsSprintingHorseSpeedSampledDirectionDampedDirectionRangeDirectionRangeDampedIsBashingIs"
    "DismountingblendFromAnimDrivenwalkBackRatewalkBackSpeedMultcamerafromxcamerafromycamerafromzbInJumpStateiState_"
    "HorseFalliGetUpTypebInSwimStateiState_"
    "HorseSwimstaggerDirectionblendSlowbForceIdleStopbHorseFootIKEnablebNoHeadTrackisMoving";

AnimationGraphDescriptor_HorseRootBehavior::AnimationGraphDescriptor_HorseRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{76, strlen(s_variableNames)};
    
    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
        {kbHeadTrackingOn,
            kbAnimationDriven,
            kbAllowRotation,
            kbHeadTracking,
            kbDisableHeadTrack,
            kIsRecoiling,
            kIsStaggering,
            kIsAttacking,
            kisMoving,
            kIsSprinting,
            kbHorseFootIKEnable,},
        {kSpeed,
            kTurnDelta,
            kturnSpeedMult,
            kDirection,
            kTurnDeltaDamped,
            kwalkBackSpeedMult,
            kHorseSpeedSampled,},
        {kiSyncIdleLocomotion,
            kiSyncForwardState,
            kiCombatStance,
            kiState,
            kiSyncSprintState,}));
}
