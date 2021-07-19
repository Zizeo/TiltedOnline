#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_SkeeverRootBehavior.h>

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
    kiState_SkeeverDefault = 46,
    kiState_SkeeverLunge = 47,
    kbSkeeverLunge = 48,
    kiCharacterSelector = 49,
    kfMinMoveSpeed = 50,
    kDirection = 51,
    kiIsCanine = 52,
    kiTurnMirrored = 53,
    kIsAttackReady = 54,
    kTurnDeltaDamped = 55,
    kSpeedSampled = 56,
    kIsBashing = 57,
    kwalkBackRate = 58,
    kstaggerDirection = 59,
    kbNoHeadTrack = 60,
    kiGetUpType = 61,
    kbFootIKDisable = 62,
    kiState_CowDefault = 63,
    kiState_DogDefault = 64,
    kiState_WolfDefault = 65,
    kiState_SabreCatDefault = 66,
    kiState_HorseDefault = 67,
    kiState_BearDefault = 68,
    kiState_DeerDefault = 69,
    kiState_GoatDefault = 70,
    kiState_HorkerDefault = 71,
    kiState_MammothDefault = 72,
    kiState_HorseSprint = 73,
    kiSyncSprintState = 74,
    kfTwistDirection = 75,
    kOldDirection = 76,
    kcamerafromx = 77,
    kcamerafromy = 78,
    kcamerafromz = 79,
    kwalkBackSpeedMult = 80,
    kiMovementSpeed = 81,
    kIsSideAttacking = 82,
    kisIdleLay = 83,
    kbFootIKEnable = 84,
    kiState_CowSwimDefault = 85,
    kiState_HorkerSwimDefault = 86,
    kiState_BearSwimDefault = 87,
    kisSwimming = 88,
    kisMoving = 89,
    kbForceIdleStop = 90,
    kiState_DeerDefaultRun = 91,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionblendDefaultfMinSpeedSpeediSyncTurnStateiSyncForwardStateTurnDeltafMinTurnDeltaturnSpeedMultiCo"
    "mbatStancetestbHeadTrackingOnTargetLocationFootIKEnablem_onOffGainm_groundAscendingGainm_groundDescendingGainm_"
    "footPlantedGainm_footRaisedGainm_footUnlockGainm_worldFromModelFeedbackGainm_errorUpDownBiasm_"
    "alignWorldFromModelGainm_hipOrientationGainm_footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSblendFastbAnimationDrivenbAllowRotationbHeadTrackingbDisableHeadTrackIsRecoilingIsStaggeringIsAtta"
    "ckingbIsWolfstaggerMagnitudeIsBleedingOutbIsSyncedbEquipOkbCanHeadTrackblendSlowisIdleSittingbMirroredAttackiState"
    "iState_SkeeverDefaultiState_"
    "SkeeverLungebSkeeverLungeiCharacterSelectorfMinMoveSpeedDirectioniIsCanineiTurnMirroredIsAttackReadyTurnDeltaDampe"
    "dSpeedSampledIsBashingwalkBackRatestaggerDirectionbNoHeadTrackiGetUpTypebFootIKDisableiState_CowDefaultiState_"
    "DogDefaultiState_WolfDefaultiState_SabreCatDefaultiState_HorseDefaultiState_BearDefaultiState_DeerDefaultiState_"
    "GoatDefaultiState_HorkerDefaultiState_MammothDefaultiState_"
    "HorseSprintiSyncSprintStatefTwistDirectionOldDirectioncamerafromxcamerafromycamerafromzwalkBackSpeedMultiMovementS"
    "peedIsSideAttackingisIdleLaybFootIKEnableiState_CowSwimDefaultiState_HorkerSwimDefaultiState_"
    "BearSwimDefaultisSwimmingisMovingbForceIdleStopiState_DeerDefaultRun";

AnimationGraphDescriptor_SkeeverRootBehavior::AnimationGraphDescriptor_SkeeverRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{92, strlen(s_variableNames)};
    
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
            kisMoving,
            },
        {kSpeed,
            kTurnDelta,
            kturnSpeedMult,
            kDirection,
            kTurnDeltaDamped,
            kSpeedSampled,
            kwalkBackSpeedMult,
            },
        {kiSyncSprintState,
            kiSyncIdleLocomotion,
            kiSyncTurnState,
            kiSyncForwardState,
            kiMovementSpeed,
            kiCombatStance,
            kiState,
            }));
}
