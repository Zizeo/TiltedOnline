#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_DeerRootBehavior.h>

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
    kiState_DeerDefault = 46,
    kbSkeeverLunge = 47,
    kiCharacterSelector = 48,
    kfMinMoveSpeed = 49,
    kDirection = 50,
    kiIsCanine = 51,
    kiTurnMirrored = 52,
    kIsAttackReady = 53,
    kTurnDeltaDamped = 54,
    kIsBashing = 55,
    kbNoHeadTrack = 56,
    kcamerafromx = 57,
    kcamerafromy = 58,
    kcamerafromz = 59,
    kwalkBackRate = 60,
    kstaggerDirection = 61,
    kiMovementSpeed = 62,
    kiState_DeerDefaultRun = 63,
    kiGetUpType = 64,
    kiState_CowDefault = 65,
    kiState_DogDefault = 66,
    kiState_WolfDefault = 67,
    kiState_SabreCatDefault = 68,
    kiState_SkeeverDefault = 69,
    kiState_SkeeverLunge = 70,
    kiState_HorseDefault = 71,
    kiState_BearDefault = 72,
    kiState_GoatDefault = 73,
    kiState_HorkerDefault = 74,
    kiState_MammothDefault = 75,
    kiState_HorseSprint = 76,
    kiSyncSprintState = 77,
    kfTwistDirection = 78,
    kOldDirection = 79,
    kSpeedSampled = 80,
    kwalkBackSpeedMult = 81,
    kIsSideAttacking = 82,
    kisIdleLay = 83,
    kbFootIKEnable = 84,
    kiState_CowSwimDefault = 85,
    kiState_HorkerSwimDefault = 86,
    kiState_BearSwimDefault = 87,
    kisSwimming = 88,
    kisMoving = 89,
    kbForceIdleStop = 90,
    kSlowBlend = 91,
    kDefaultBlend = 92,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionblendDefaultfMinSpeedSpeediSyncTurnStateiSyncForwardStateTurnDeltafMinTurnDeltaturnSpeedMultiCo"
    "mbatStancetestbHeadTrackingOnTargetLocationFootIKEnablem_onOffGainm_groundAscendingGainm_groundDescendingGainm_"
    "footPlantedGainm_footRaisedGainm_footUnlockGainm_worldFromModelFeedbackGainm_errorUpDownBiasm_"
    "alignWorldFromModelGainm_hipOrientationGainm_footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSblendFastbAnimationDrivenbAllowRotationbHeadTrackingbDisableHeadTrackIsRecoilingIsStaggeringIsAtta"
    "ckingbIsWolfstaggerMagnitudeIsBleedingOutbIsSyncedbEquipOkbCanHeadTrackblendSlowisIdleSittingbMirroredAttackiState"
    "iState_"
    "DeerDefaultbSkeeverLungeiCharacterSelectorfMinMoveSpeedDirectioniIsCanineiTurnMirroredIsAttackReadyTurnDeltaDamped"
    "IsBashingbNoHeadTrackcamerafromxcamerafromycamerafromzwalkBackRatestaggerDirectioniMovementSpeediState_"
    "DeerDefaultRuniGetUpTypeiState_CowDefaultiState_DogDefaultiState_WolfDefaultiState_SabreCatDefaultiState_"
    "SkeeverDefaultiState_SkeeverLungeiState_HorseDefaultiState_BearDefaultiState_GoatDefaultiState_"
    "HorkerDefaultiState_MammothDefaultiState_"
    "HorseSprintiSyncSprintStatefTwistDirectionOldDirectionSpeedSampledwalkBackSpeedMultIsSideAttackingisIdleLaybFootIK"
    "EnableiState_CowSwimDefaultiState_HorkerSwimDefaultiState_"
    "BearSwimDefaultisSwimmingisMovingbForceIdleStopSlowBlendDefaultBlend";

AnimationGraphDescriptor_DeerRootBehavior::AnimationGraphDescriptor_DeerRootBehavior(AnimationGraphDescriptorManager& aManager)
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
