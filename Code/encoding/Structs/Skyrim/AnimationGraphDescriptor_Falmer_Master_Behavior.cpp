#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Skyrim/AnimationGraphDescriptor_Falmer_Master_Behavior.h>

enum Variables
{
    kiSyncIdleLocomotion = 0,
    kiSyncTurnState = 1,
    kSpeed = 2,
    kblendDefault = 3,
    kDirection = 4,
    kbEquipOk = 5,
    kiRightHandType = 6,
    kiWantBlock = 7,
    kiLeftHandType = 8,
    kiEquippedItemState = 9,
    kIsAttackReady = 10,
    kIsRecoiling = 11,
    kIsStaggering = 12,
    kbWeapReady = 13,
    kIsAttacking = 14,
    kcurrentDefaultState = 15,
    kblendFast = 16,
    kbAnimationDriven = 17,
    kstaggerMagnitude = 18,
    kbAllowRotation = 19,
    kbHeadTracking = 20,
    kTargetLocation = 21,
    kbHeadTrackingOn = 22,
    kbCanHeadTrack = 23,
    kIsBlocking = 24,
    kiBlockState = 25,
    kiSyncAttackStance = 26,
    kIsBashing = 27,
    kFootIKEnable = 28,
    km_onOffGain = 29,
    km_groundAscendingGain = 30,
    km_groundDescendingGain = 31,
    km_footPlantedGain = 32,
    km_footRaisedGain = 33,
    km_footUnlockGain = 34,
    km_worldFromModeFeedbackGain = 35,
    km_errorUpDownBias = 36,
    km_alignWorldFromModelGain = 37,
    km_hipOrientationGain = 38,
    km_footPlantedAnkleHeightMS = 39,
    km_footRaisedAnkleHeightMS = 40,
    km_maxAnkleHeightMS = 41,
    km_minAnkleHeightMS = 42,
    km_footEndLS = 43,
    kiState = 44,
    kSpeedDamped = 45,
    kTurnDelta = 46,
    kIsFiringBow = 47,
    kPitch = 48,
    kSpeedSampled = 49,
    kisCasting = 50,
    kbWantCastLeft = 51,
    kbMLh_Ready = 52,
    kiState_FalmerDefault = 53,
    kturnSpeedMult = 54,
    kIsUnequipping = 55,
    kIsBleedingOut = 56,
    kcamerafromx = 57,
    kcamerafromy = 58,
    kcamerafromz = 59,
    kiGetUpType = 60,
    kbIsSynced = 61,
    kstaggerDirection = 62,
    kiState_FalmerBowDrawn = 63,
    kIsSquatting = 64,
    kiCombatState = 65,
    kiLeftHandEquipped = 66,
    kiStateRunWalk = 67,
    kiStateCurrent = 68,
    kiState_Falmer1HMRun = 69,
    kiState_Falmer1HMWalk = 70,
    kInt8Variable = 71,
    kbWantCastRight = 72,
    kbMRh_Ready = 73,
};

static const char* s_variableNames =
    "iSyncIdleLocomotioniSyncTurnStateSpeedblendDefaultDirectionbEquipOkiRightHandTypeiWantBlockiLeftHandTypeiEquippedI"
    "temStateIsAttackReadyIsRecoilingIsStaggeringbWeapReadyIsAttackingcurrentDefaultStateblendFastbAnimationDrivenstagg"
    "erMagnitudebAllowRotationbHeadTrackingTargetLocationbHeadTrackingOnbCanHeadTrackIsBlockingiBlockStateiSyncAttackSt"
    "anceIsBashingFootIKEnablem_onOffGainm_groundAscendingGainm_groundDescendingGainm_footPlantedGainm_footRaisedGainm_"
    "footUnlockGainm_worldFromModeFeedbackGainm_errorUpDownBiasm_alignWorldFromModelGainm_hipOrientationGainm_"
    "footPlantedAnkleHeightMSm_footRaisedAnkleHeightMSm_maxAnkleHeightMSm_minAnkleHeightMSm_"
    "footEndLSiStateSpeedDampedTurnDeltaIsFiringBowPitchSpeedSampledisCastingbWantCastLeftbMLh_ReadyiState_"
    "FalmerDefaultturnSpeedMultIsUnequippingIsBleedingOutcamerafromxcamerafromycamerafromziGetUpTypebIsSyncedstaggerDir"
    "ectioniState_FalmerBowDrawnIsSquattingiCombatStateiLeftHandEquippediStateRunWalkiStateCurrentiState_"
    "Falmer1HMRuniState_Falmer1HMWalkInt8VariablebWantCastRightbMRh_Ready";

AnimationGraphDescriptor_Falmer_Master_Behavior::AnimationGraphDescriptor_Falmer_Master_Behavior(AnimationGraphDescriptorManager& aManager)
{
    std::pair<size_t, size_t> key{74, strlen(s_variableNames)};
    
    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
        {kbEquipOk,
            kbAnimationDriven,
            kIsAttackReady,
            kIsBlocking,
            kbAllowRotation,
            kIsRecoiling,
            kIsStaggering,
            kIsAttacking,
            kbHeadTracking,
            kbWeapReady,
            kIsBashing,
            },
        {kSpeed,
            kTurnDelta,
            kDirection,
            kSpeedSampled,
            },
        {kcurrentDefaultState,
            kiSyncIdleLocomotion,
            kiSyncTurnState,
            kiCombatState,
            }));
}
