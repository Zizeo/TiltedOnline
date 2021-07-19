#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_WolfRootBehavior.h>

enum Variables
{
    kiSyncIdleLocomotion = 0,
    kblendDefault = 1,
    kfMinSpeed = 2,
    kSpeed = 3,
    kiSyncTurnState = 4,
    kiSyncForwardState = 5,
    kTurnDelta = 6,
    kfMinTurnDelta = 7,
    kturnSpeedMult = 8,
    kiCombatStance = 9,
    ktest = 10,
    kbHeadTrackingOn = 11,
    kTargetLocation = 12,
    kFootIKEnable = 13,
    km_onOffGain = 14,
    km_groundAscendingGain = 15,
    km_groundDescendingGain = 16,
    km_footPlantedGain = 17,
    km_footRaisedGain = 18,
    km_footUnlockGain = 19,
    km_worldFromModelFeedbackGain = 20,
    km_errorUpDownBias = 21,
    km_alignWorldFromModelGain = 22,
    km_hipOrientationGain = 23,
    km_footPlantedAnkleHeightMS = 24,
    km_footRaisedAnkleHeightMS = 25,
    km_maxAnkleHeightMS = 26,
    km_minAnkleHeightMS = 27,
    kblendFast = 28,
    kbAnimationDriven = 29,
    kbAllowRotation = 30,
    kbHeadTracking = 31,
    kbDisableHeadTrack = 32,
    kIsRecoiling = 33,
    kIsStaggering = 34,
    kIsAttacking = 35,
    kbIsWolf = 36,
    kstaggerMagnitude = 37,
    kIsBleedingOut = 38,
    kbIsSynced = 39,
    kbEquipOk = 40,
    kbCanHeadTrack = 41,
    kblendSlow = 42,
    kisIdleSitting = 43,
    kbMirroredAttack = 44,
    kiState = 45,
    kiState_WolfDefault = 46,
    kbSkeeverLunge = 47,
    kiCharacterSelector = 48,
    kfMinMoveSpeed = 49,
    kDirection = 50,
    kiIsCanine = 51,
    kiTurnMirrored = 52,
    kIsAttackReady = 53,
    kTurnDeltaDamped = 54,
    kSpeedSampled = 55,
    kIsBashing = 56,
    kwalkBackRate = 57,
    kiMovementSpeed = 58,
    kstaggerDirection = 59,
    kbFootIKDisable = 60,
    kiGetUpType = 61,
    kiState_WolfRun = 62,
    kiState_CowDefault = 63,
    kiState_DogDefault = 64,
    kiState_SabreCatDefault = 65,
    kiState_SkeeverDefault = 66,
    kiState_SkeeverLunge = 67,
    kiState_HorseDefault = 68,
    kiState_BearDefault = 69,
    kiState_DeerDefault = 70,
    kiState_GoatDefault = 71,
    kiState_HorkerDefault = 72,
    kiState_MammothDefault = 73,
    kiState_HorseSprint = 74,
    kiSyncSprintState = 75,
    kfTwistDirection = 76,
    kOldDirection = 77,
    kbNoHeadTrack = 78,
    kcamerafromx = 79,
    kcamerafromy = 80,
    kcamerafromz = 81,
    kwalkBackSpeedMult = 82,
    kIsSideAttacking = 83,
    kisIdleLay = 84,
    kbFootIKEnable = 85,
    kiState_CowSwimDefault = 86,
    kiState_HorkerSwimDefault = 87,
    kiState_BearSwimDefault = 88,
    kisSwimming = 89,
    kisMoving = 90,
    kbForceIdleStop = 91,
    kiState_DeerDefaultRun = 92,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionblendDefaultfMinSpeedSpeediSyncTurnStateiSyncForwardStateTurnDeltafMinTurnDeltaturnSpeedMultiCo"
    "mbatStancetestbHeadTrackingOnTargetLocationFootIKEnablem_onOffGainm_groundAscendingGainm_groundDescendingGainm_"
    "footPlantedGainm_footRaisedGainm_footUnlockGainm_worldFromModelFeedbackGainm_errorUpDownBiasm_"
    "alignWorldFromModelGainm_hipOrientationGainm_footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSblendFastbAnimationDrivenbAllowRotationbHeadTrackingbDisableHeadTrackIsRecoilingIsStaggeringIsAtta"
    "ckingbIsWolfstaggerMagnitudeIsBleedingOutbIsSyncedbEquipOkbCanHeadTrackblendSlowisIdleSittingbMirroredAttackiState"
    "iState_"
    "WolfDefaultbSkeeverLungeiCharacterSelectorfMinMoveSpeedDirectioniIsCanineiTurnMirroredIsAttackReadyTurnDeltaDamped"
    "SpeedSampledIsBashingwalkBackRateiMovementSpeedstaggerDirectionbFootIKDisableiGetUpTypeiState_WolfRuniState_"
    "CowDefaultiState_DogDefaultiState_SabreCatDefaultiState_SkeeverDefaultiState_SkeeverLungeiState_"
    "HorseDefaultiState_BearDefaultiState_DeerDefaultiState_GoatDefaultiState_HorkerDefaultiState_MammothDefaultiState_"
    "HorseSprintiSyncSprintStatefTwistDirectionOldDirectionbNoHeadTrackcamerafromxcamerafromycamerafromzwalkBackSpeedMu"
    "ltIsSideAttackingisIdleLaybFootIKEnableiState_CowSwimDefaultiState_HorkerSwimDefaultiState_"
    "BearSwimDefaultisSwimmingisMovingbForceIdleStopiState_DeerDefaultRun";

AnimationGraphDescriptor_WolfRootBehavior::AnimationGraphDescriptor_WolfRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{93, strlen(s_variableNames)};
    
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
            kbSkeeverLunge,
            kbFootIKEnable,
            kisMoving},
        {kSpeed,
            kTurnDelta,
            kturnSpeedMult,
            kDirection,
            kTurnDeltaDamped,
            kSpeedSampled,
            kwalkBackSpeedMult},
        {kiSyncIdleLocomotion,
            kiSyncTurnState,
            kiSyncForwardState,
            kiCombatStance,
            kiMovementSpeed,
            kiSyncSprintState}));
}
