#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_HorkerRootBehavior.h>

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
    kiState_HorkerDefault = 46,
    kbSkeeverLunge = 47,
    kiCharacterSelector = 48,
    kDirection = 49,
    kiIsCanine = 50,
    kiTurnMirrored = 51,
    kIsAttackReady = 52,
    kTurnDeltaDamped = 53,
    kIsBashing = 54,
    kwalkBackRate = 55,
    kiState_HorkerSwimDefault = 56,
    kiGetUpType = 57,
    kiState_CowDefault = 58,
    kiState_DogDefault = 59,
    kiState_WolfDefault = 60,
    kiState_SabreCatDefault = 61,
    kiState_SkeeverDefault = 62,
    kiState_SkeeverLunge = 63,
    kiState_HorseDefault = 64,
    kiState_BearDefault = 65,
    kiState_DeerDefault = 66,
    kiState_GoatDefault = 67,
    kiState_MammothDefault = 68,
    kiState_HorseSprint = 69,
    kiSyncSprintState = 70,
    kfTwistDirection = 71,
    kOldDirection = 72,
    kSpeedSampled = 73,
    kbNoHeadTrack = 74,
    kcamerafromx = 75,
    kcamerafromy = 76,
    kcamerafromz = 77,
    kwalkBackSpeedMult = 78,
    kiMovementSpeed = 79,
    kIsSideAttacking = 80,
    kisIdleLay = 81,
    kstaggerDirection = 82,
    kbFootIKEnable = 83,
    kiState_CowSwimDefault = 84,
    kiState_BearSwimDefault = 85,
    kisSwimming = 86,
    kisMoving = 87,
    kbForceIdleStop = 88,
    kiState_DeerDefaultRun = 89,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionblendDefaultfMinSpeedSpeediSyncTurnStateiSyncForwardStateTurnDeltafMinTurnDeltaturnSpeedMultiCo"
    "mbatStancetestbHeadTrackingOnTargetLocationFootIKEnablem_onOffGainm_groundAscendingGainm_groundDescendingGainm_"
    "footPlantedGainm_footRaisedGainm_footUnlockGainm_worldFromModelFeedbackGainm_errorUpDownBiasm_"
    "alignWorldFromModelGainm_hipOrientationGainm_footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSblendFastbAnimationDrivenbAllowRotationbHeadTrackingbDisableHeadTrackIsRecoilingIsStaggeringIsAtta"
    "ckingbIsWolfstaggerMagnitudeIsBleedingOutbIsSyncedbEquipOkbCanHeadTrackblendSlowisIdleSittingbMirroredAttackiState"
    "iState_"
    "HorkerDefaultbSkeeverLungeiCharacterSelectorDirectioniIsCanineiTurnMirroredIsAttackReadyTurnDeltaDampedIsBashingwa"
    "lkBackRateiState_HorkerSwimDefaultiGetUpTypeiState_CowDefaultiState_DogDefaultiState_WolfDefaultiState_"
    "SabreCatDefaultiState_SkeeverDefaultiState_SkeeverLungeiState_HorseDefaultiState_BearDefaultiState_"
    "DeerDefaultiState_GoatDefaultiState_MammothDefaultiState_"
    "HorseSprintiSyncSprintStatefTwistDirectionOldDirectionSpeedSampledbNoHeadTrackcamerafromxcamerafromycamerafromzwal"
    "kBackSpeedMultiMovementSpeedIsSideAttackingisIdleLaystaggerDirectionbFootIKEnableiState_CowSwimDefaultiState_"
    "BearSwimDefaultisSwimmingisMovingbForceIdleStopiState_DeerDefaultRun";

AnimationGraphDescriptor_HorkerRootBehavior::AnimationGraphDescriptor_HorkerRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{90, strlen(s_variableNames)};
    
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
