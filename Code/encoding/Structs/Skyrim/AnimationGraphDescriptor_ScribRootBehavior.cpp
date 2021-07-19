#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_ScribRootBehavior.h>

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
    kbHeadTrackingOn = 10,
    kTargetLocation = 11,
    kFootIKEnable = 12,
    km_onOffGain = 13,
    km_groundAscendingGain = 14,
    km_groundDescendingGain = 15,
    km_footPlantedGain = 16,
    km_footRaisedGain = 17,
    km_footUnlockGain = 18,
    km_worldFromModelFeedbackGain = 19,
    km_errorUpDownBias = 20,
    km_alignWorldFromModelGain = 21,
    km_hipOrientationGain = 22,
    km_footPlantedAnkleHeightMS = 23,
    km_footRaisedAnkleHeightMS = 24,
    km_maxAnkleHeightMS = 25,
    km_minAnkleHeightMS = 26,
    kblendFast = 27,
    kbAnimationDriven = 28,
    kbAllowRotation = 29,
    kbHeadTracking = 30,
    kbDisableHeadTrack = 31,
    kIsRecoiling = 32,
    kIsStaggering = 33,
    kIsAttacking = 34,
    kbIsWolf = 35,
    kstaggerMagnitude = 36,
    kIsBleedingOut = 37,
    kbIsSynced = 38,
    kbEquipOk = 39,
    kbCanHeadTrack = 40,
    kblendSlow = 41,
    kisIdleSitting = 42,
    kbMirroredAttack = 43,
    kiState = 44,
    kbSkeeverLunge = 45,
    kiCharacterSelector = 46,
    kfMinMoveSpeed = 47,
    kDirection = 48,
    kiIsCanine = 49,
    kiTurnMirrored = 50,
    kIsAttackReady = 51,
    kTurnDeltaDamped = 52,
    kIsBashing = 53,
    kbNoHeadTrack = 54,
    kcamerafromx = 55,
    kcamerafromy = 56,
    kcamerafromz = 57,
    kwalkBackRate = 58,
    km_footPlantedAnkleHeightMS_Front = 59,
    km_footRaisedAnkleHeightMS_Front = 60,
    km_maxAnkleHeightMS_Front = 61,
    km_footPlantedAnkleHeightMS_Rear = 62,
    km_footRaisedAnkleHeightMS_Rear = 63,
    km_maxAnkleHeightMS_Rear = 64,
    km_minCharControllerSeparation = 65,
    km_maxCharControllerSeparation = 66,
    km_errorOut = 67,
    km_hitSomething_0 = 68,
    km_hitSomething_1 = 69,
    km_hitSomething_2 = 70,
    km_hitSomething_3 = 71,
    kbLegCastResults = 72,
    kIsSideAttacking = 73,
    kiGetUpType = 74,
    kiGetUpType00 = 75,
    kiMovementSpeed = 76,
    kisMoving = 77,
    kbForceIdleStop = 78,
    kbFootIKEnable = 79,
    kisIdleLay = 80,
    kisSwimming00 = 81,
    kiState_ScribDefault = 82,
    kwalkBackSpeedMult = 83,
    kstaggerDirection = 84,
    kSpeedSampled = 85,
    kSlowBlend = 86,
    kdefaultBlend = 87,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionblendDefaultfMinSpeedSpeediSyncTurnStateiSyncForwardStateTurnDeltafMinTurnDeltaturnSpeedMultiCo"
    "mbatStancebHeadTrackingOnTargetLocationFootIKEnablem_onOffGainm_groundAscendingGainm_groundDescendingGainm_"
    "footPlantedGainm_footRaisedGainm_footUnlockGainm_worldFromModelFeedbackGainm_errorUpDownBiasm_"
    "alignWorldFromModelGainm_hipOrientationGainm_footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSblendFastbAnimationDrivenbAllowRotationbHeadTrackingbDisableHeadTrackIsRecoilingIsStaggeringIsAtta"
    "ckingbIsWolfstaggerMagnitudeIsBleedingOutbIsSyncedbEquipOkbCanHeadTrackblendSlowisIdleSittingbMirroredAttackiState"
    "bSkeeverLungeiCharacterSelectorfMinMoveSpeedDirectioniIsCanineiTurnMirroredIsAttackReadyTurnDeltaDampedIsBashingbN"
    "oHeadTrackcamerafromxcamerafromycamerafromzwalkBackRatem_footPlantedAnkleHeightMS_Frontm_footRaisedAnkleHeightMS_"
    "Frontm_maxAnkleHeightMS_Frontm_footPlantedAnkleHeightMS_Rearm_footRaisedAnkleHeightMS_Rearm_maxAnkleHeightMS_"
    "Rearm_minCharControllerSeparationm_maxCharControllerSeparationm_errorOutm_hitSomething_0m_hitSomething_1m_"
    "hitSomething_2m_hitSomething_"
    "3bLegCastResultsIsSideAttackingiGetUpTypeiGetUpType00iMovementSpeedisMovingbForceIdleStopbFootIKEnableisIdleLayisS"
    "wimming00iState_ScribDefaultwalkBackSpeedMultstaggerDirectionSpeedSampledSlowBlendDefaultBlend";

AnimationGraphDescriptor_ScribRootBehavior::AnimationGraphDescriptor_ScribRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{88, strlen(s_variableNames)};
    
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
        {kiSyncIdleLocomotion,
            kiSyncTurnState,
            kiSyncForwardState,
            kiMovementSpeed,
            kiCombatStance,
            }));
}
