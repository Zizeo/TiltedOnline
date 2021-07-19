#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_GiantRootBehavior.h>

enum Variables
{
    kiSyncIdleLocomotion = 0,
    kSpeed = 1,
    kDirection = 2,
    kbAnimationDriven = 3,
    kblendDefault = 4,
    kIsAttacking = 5,
    kblendFast = 6,
    kTurnDelta = 7,
    kiSyncTurnState = 8,
    kIsAttackReady = 9,
    kIsRecoiling = 10,
    kIsStaggering = 11,
    kstaggerMagnitude = 12,
    kTargetLocation = 13,
    kIsBleedingOut = 14,
    kblendSlow = 15,
    kFootIKEnable = 16,
    km_onOffGain = 17,
    km_groundAscendingGain = 18,
    km_groundDescendingGain = 19,
    km_footPlantedGain = 20,
    km_footRaisedGain = 21,
    km_footUnlockGain = 22,
    km_worldFromModelFeedbackGain = 23,
    km_errorUpDownBias = 24,
    km_alignWorldFromModelGain = 25,
    km_hipOrientationGain = 26,
    km_footPlantedAnkleHeightMS = 27,
    km_footRaisedAnkleHeightMS = 28,
    km_maxAnkleHeightMS = 29,
    km_minAnkleHeightMS = 30,
    kbEquipOk = 31,
    kiSyncDefaultState = 32,
    kbHeadTrackingOn = 33,
    kbCanHeadTrack = 34,
    kfMinSpeed = 35,
    kfMinTurnSpeed = 36,
    kiState = 37,
    kiState_GiantDefault = 38,
    km_footEndLS = 39,
    kSpeedSampled = 40,
    kIsBashing = 41,
    kiState_GiantCombatRun = 42,
    kcamerafromx = 43,
    kcamerafromy = 44,
    kcamerafromz = 45,
    kDirectionDamped = 46,
    kDirectionGain = 47,
    kIsRooting = 48,
    km_raycastDistanceUp = 49,
    km_raycastDistanceDown = 50,
    kstaggerDirection = 51,
    km_errorOutTranslation = 52,
    kbAllowRotation = 53,
    kiGetUpType = 54,
    kbHeadTracking = 55,
    kbIsSynced = 56,
    kiStateRunWalk = 57,
    kiState_GiantCombatWalk = 58,
    kiStateCurrent = 59,
    kIsBleedingOutTransition = 60,
};

static const char* s_variableNames =
    "iSyncIdleLocomotionSpeedDirectionbAnimationDrivenblendDefaultIsAttackingblendFastTurnDeltaiSyncTurnStateIsAttackRe"
    "adyIsRecoilingIsStaggeringstaggerMagnitudeTargetLocationIsBleedingOutblendSlowFootIKEnablem_onOffGainm_"
    "groundAscendingGainm_groundDescendingGainm_footPlantedGainm_footRaisedGainm_footUnlockGainm_"
    "worldFromModelFeedbackGainm_errorUpDownBiasm_alignWorldFromModelGainm_hipOrientationGainm_"
    "footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_"
    "minAnkleHeightMSbEquipOkiSyncDefaultStatebHeadTrackingOnbCanHeadTrackfMinSpeedfMinTurnSpeediStateiState_"
    "GiantDefaultm_footEndLSSpeedSampledIsBashingiState_"
    "GiantCombatRuncamerafromxcamerafromycamerafromzDirectionDampedDirectionGainIsRootingm_raycastDistanceUpm_"
    "raycastDistanceDownstaggerDirectionm_"
    "errorOutTranslationbAllowRotationiGetUpTypebHeadTrackingbIsSyncediStateRunWalkiState_"
    "GiantCombatWalkiStateCurrentIsBleedingOutTransition";

AnimationGraphDescriptor_GiantRootBehavior::AnimationGraphDescriptor_GiantRootBehavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{61, strlen(s_variableNames)};
    
    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
        {kbAnimationDriven,
            kIsAttackReady,
            kIsStaggering,
            kbEquipOk,
            kbHeadTrackingOn,
            kbAllowRotation},
        {kSpeed,
            kDirection,
            kTurnDelta,
            kSpeedSampled},
        {kiSyncIdleLocomotion,
            kiSyncDefaultState,
            kiSyncTurnState,
            kiState,
            kiStateCurrent}));
}
