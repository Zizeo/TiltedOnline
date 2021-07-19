#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_MammothRootBehavior.h>

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
    kiState_MammothDefault = 46,
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
    km_footPlantedAnkleHeightMS_Front = 62,
    km_footRaisedAnkleHeightMS_Front = 63,
    km_maxAnkleHeightMS_Front = 64,
    km_hitSomething_0 = 65,
    km_hitSomething_1 = 66,
    km_footPlantedAnkleHeightMS_Rear = 67,
    km_footRaisedAnkleHeightMS_Rear = 68,
    km_maxAnkleHeightMS_Rear = 69,
    km_hitSomething_2 = 70,
    km_errorOut = 71,
    km_hitSomething_3 = 72,
    kbLegCastResults = 73,
    kiGetUpType = 74,
    km_velocityGain = 75,
    km_positionGain = 76,
    km_positionMaxLinearVelocity = 77,
    km_snapMaxLinearVelocity = 78,
    kiState_CowDefault = 79,
    kiState_DogDefault = 80,
    kiState_WolfDefault = 81,
    kiState_SabreCatDefault = 82,
    kiState_SkeeverDefault = 83,
    kiState_SkeeverLunge = 84,
    kiState_HorseDefault = 85,
    kiState_BearDefault = 86,
    kiState_DeerDefault = 87,
    kiState_GoatDefault = 88,
    kiState_HorkerDefault = 89,
    kiState_HorseSprint = 90,
    kiSyncSprintState = 91,
    kfTwistDirection = 92,
    kOldDirection = 93,
    kSpeedSampled = 94,
    kwalkBackSpeedMult = 95,
    kiMovementSpeed = 96,
    kIsSideAttacking = 97,
    kisIdleLay = 98,
    kbFootIKEnable = 99,
    kiState_CowSwimDefault = 100,
    kiState_HorkerSwimDefault = 101,
    kiState_BearSwimDefault = 102,
    kisSwimming = 103,
    kisMoving = 104,
    kbForceIdleStop = 105,
    kiState_DeerDefaultRun = 106,
    kDefaultBlend = 107,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionblendDefaultfMinSpeedSpeediSyncTurnStateiSyncForwardStateTurnDeltafMinTurnDeltaturnSpeedMultiCo"
    "mbatStancetestbHeadTrackingOnTargetLocationFootIKEnablem_onOffGainm_groundAscendingGainm_groundDescendingGainm_"
    "footPlantedGainm_footRaisedGainm_footUnlockGainm_worldFromModelFeedbackGainm_errorUpDownBiasm_"
    "alignWorldFromModelGainm_hipOrientationGainm_footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSblendFastbAnimationDrivenbAllowRotationbHeadTrackingbDisableHeadTrackIsRecoilingIsStaggeringIsAtta"
    "ckingbIsWolfstaggerMagnitudeIsBleedingOutbIsSyncedbEquipOkbCanHeadTrackblendSlowisIdleSittingbMirroredAttackiState"
    "iState_"
    "MammothDefaultbSkeeverLungeiCharacterSelectorfMinMoveSpeedDirectioniIsCanineiTurnMirroredIsAttackReadyTurnDeltaDam"
    "pedIsBashingbNoHeadTrackcamerafromxcamerafromycamerafromzwalkBackRatestaggerDirectionm_footPlantedAnkleHeightMS_"
    "Frontm_footRaisedAnkleHeightMS_Frontm_maxAnkleHeightMS_Frontm_hitSomething_0m_hitSomething_1m_"
    "footPlantedAnkleHeightMS_Rearm_footRaisedAnkleHeightMS_Rearm_maxAnkleHeightMS_Rearm_hitSomething_2m_errorOutm_"
    "hitSomething_3bLegCastResultsiGetUpTypem_velocityGainm_positionGainm_positionMaxLinearVelocitym_"
    "snapMaxLinearVelocityiState_CowDefaultiState_DogDefaultiState_WolfDefaultiState_SabreCatDefaultiState_"
    "SkeeverDefaultiState_SkeeverLungeiState_HorseDefaultiState_BearDefaultiState_DeerDefaultiState_GoatDefaultiState_"
    "HorkerDefaultiState_"
    "HorseSprintiSyncSprintStatefTwistDirectionOldDirectionSpeedSampledwalkBackSpeedMultiMovementSpeedIsSideAttackingis"
    "IdleLaybFootIKEnableiState_CowSwimDefaultiState_HorkerSwimDefaultiState_"
    "BearSwimDefaultisSwimmingisMovingbForceIdleStopiState_DeerDefaultRunDefaultBlend";

AnimationGraphDescriptor_MammothRootBehavior::AnimationGraphDescriptor_MammothRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{108, strlen(s_variableNames)};
    
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
