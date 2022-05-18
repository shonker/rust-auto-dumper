#pragma once
#include <cstdint>

namespace blazedumper {
    inline constexpr ::std::ptrdiff_t BaseEntity_TypeInfo = 0x31D20C8;
    inline constexpr ::std::ptrdiff_t MainCamera_TypeInfo = 0x31D3BF0;
    inline constexpr ::std::ptrdiff_t Facepunch.Input_TypeInfo = 0x31E41B8;
    namespace BasePlayer {
        inline constexpr ::std::ptrdiff_t __menuOption_Climb = 0x238; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Drink = 0x290; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_InviteToTeam = 0x2E8; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_AssistPlayer = 0x340; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_LootPlayer = 0x398; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Promote = 0x3F0; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_SaltWater = 0x448; // Option
        inline constexpr ::std::ptrdiff_t currentViewMode = 0x4A0; // BasePlayer.CameraMode
        inline constexpr ::std::ptrdiff_t selectedViewMode = 0x4A4; // BasePlayer.CameraMode
        inline constexpr ::std::ptrdiff_t lastRevivePoint = 0x4A8; // Vector3
        inline constexpr ::std::ptrdiff_t lastReviveDirection = 0x4B4; // Vector3
        inline constexpr ::std::ptrdiff_t playerModel = 0x4C0; // PlayerModel
        inline constexpr ::std::ptrdiff_t Frozen = 0x4C8; // bool
        inline constexpr ::std::ptrdiff_t voiceRecorder = 0x4D0; // PlayerVoiceRecorder
        inline constexpr ::std::ptrdiff_t voiceSpeaker = 0x4D8; // PlayerVoiceSpeaker
        inline constexpr ::std::ptrdiff_t input = 0x4E0; // PlayerInput
        inline constexpr ::std::ptrdiff_t movement = 0x4E8; // BaseMovement
        inline constexpr ::std::ptrdiff_t collision = 0x4F0; // BaseCollision
        inline constexpr ::std::ptrdiff_t _lookingAt = 0x4F8; // GameObject
        inline constexpr ::std::ptrdiff_t _lookingAtEntity = 0x500; // BaseEntity
        inline constexpr ::std::ptrdiff_t _lookingAtCollider = 0x508; // Collider
        inline constexpr ::std::ptrdiff_t lookingAtPoint = 0x510; // Vector3
        inline constexpr ::std::ptrdiff_t wakeTime = 0x51C; // float
        inline constexpr ::std::ptrdiff_t needsClothesRebuild = 0x520; // bool
        inline constexpr ::std::ptrdiff_t wasSleeping = 0x521; // bool
        inline constexpr ::std::ptrdiff_t wokeUpBefore = 0x522; // bool
        inline constexpr ::std::ptrdiff_t wasDead = 0x523; // bool
        inline constexpr ::std::ptrdiff_t lastClothesHash = 0x524; // uint
        inline constexpr ::std::ptrdiff_t IsWearingDiveGoggles = 0x528; // bool
        inline constexpr ::std::ptrdiff_t GestureViewModel = 0x530; // ViewModel
        inline constexpr ::std::ptrdiff_t timeSinceUpdatedLookingAt = 0x538; // RealTimeSince
        inline constexpr ::std::ptrdiff_t nextTopologyTestTime = 0x53C; // float
        inline constexpr ::std::ptrdiff_t usePressTime = 0x540; // float
        inline constexpr ::std::ptrdiff_t useHeldTime = 0x544; // float
        inline constexpr ::std::ptrdiff_t lookingAtTest = 0x548; // HitTest
        inline constexpr ::std::ptrdiff_t cachedWaterDrinkingPoint = 0x550; // Vector3
        inline constexpr ::std::ptrdiff_t gestureList = 0x560; // GestureCollection
        inline constexpr ::std::ptrdiff_t gestureFinishedTime = 0x568; // TimeUntil
        inline constexpr ::std::ptrdiff_t blockHeldInputTimer = 0x56C; // TimeSince
        inline constexpr ::std::ptrdiff_t currentGesture = 0x570; // GestureConfig
        inline constexpr ::std::ptrdiff_t disabledHeldEntity = 0x578; // HeldEntity
        inline constexpr ::std::ptrdiff_t nextGestureMenuOpenTime = 0x580; // float
        inline constexpr ::std::ptrdiff_t lastGestureCancel = 0x584; // TimeSince
        inline constexpr ::std::ptrdiff_t client_lastHelloTime = 0x588; // float
        inline constexpr ::std::ptrdiff_t currentTeam = 0x590; // ulong
        inline constexpr ::std::ptrdiff_t clientTeam = 0x598; // PlayerTeam
        inline constexpr ::std::ptrdiff_t lastReceivedTeamTime = 0x5A0; // float
        inline constexpr ::std::ptrdiff_t lastPresenceTeamId = 0x5A8; // ulong
        inline constexpr ::std::ptrdiff_t lastPresenceTeamSize = 0x5B0; // int
        inline constexpr ::std::ptrdiff_t playerGroupKey = 0x5B8; // string
        inline constexpr ::std::ptrdiff_t playerGroupSizeKey = 0x5C0; // string
        inline constexpr ::std::ptrdiff_t clActiveItem = 0x5C8; // uint
        inline constexpr ::std::ptrdiff_t ClientCurrentMapNote = 0x5D0; // MapNote
        inline constexpr ::std::ptrdiff_t ClientCurrentDeathNote = 0x5D8; // MapNote
        inline constexpr ::std::ptrdiff_t missions = 0x5E0; // List<BaseMission.MissionInstance>
        inline constexpr ::std::ptrdiff_t _activeMission = 0x5E8; // int
        inline constexpr ::std::ptrdiff_t modelState = 0x5F0; // ModelState
        inline constexpr ::std::ptrdiff_t mounted = 0x5F8; // EntityRef
        inline constexpr ::std::ptrdiff_t nextSeatSwapTime = 0x608; // float
        inline constexpr ::std::ptrdiff_t PetEntity = 0x610; // BaseEntity
        inline constexpr ::std::ptrdiff_t lastPetCommandIssuedTime = 0x618; // float
        inline constexpr ::std::ptrdiff_t PetPrefabID = 0x61C; // uint
        inline constexpr ::std::ptrdiff_t PetID = 0x620; // uint
        inline constexpr ::std::ptrdiff_t cachedBuildingPrivilegeTime = 0x624; // float
        inline constexpr ::std::ptrdiff_t cachedBuildingPrivilege = 0x628; // BuildingPrivlidge
        inline constexpr ::std::ptrdiff_t maxProjectileID = 0x630; // int
        inline constexpr ::std::ptrdiff_t lastUpdateTime = 0x634; // float
        inline constexpr ::std::ptrdiff_t cachedThreatLevel = 0x638; // float
        inline constexpr ::std::ptrdiff_t serverTickRate = 0x63C; // int
        inline constexpr ::std::ptrdiff_t clientTickRate = 0x640; // int
        inline constexpr ::std::ptrdiff_t serverTickInterval = 0x644; // float
        inline constexpr ::std::ptrdiff_t clientTickInterval = 0x648; // float
        inline constexpr ::std::ptrdiff_t lastSentTickTime = 0x64C; // float
        inline constexpr ::std::ptrdiff_t lastSentTick = 0x650; // PlayerTick
        inline constexpr ::std::ptrdiff_t nextVisThink = 0x658; // float
        inline constexpr ::std::ptrdiff_t lastTimeSeen = 0x65C; // float
        inline constexpr ::std::ptrdiff_t debugPrevVisible = 0x660; // bool
        inline constexpr ::std::ptrdiff_t fallDamageEffect = 0x668; // GameObjectRef
        inline constexpr ::std::ptrdiff_t drownEffect = 0x670; // GameObjectRef
        inline constexpr ::std::ptrdiff_t playerFlags = 0x678; // BasePlayer.PlayerFlags
        inline constexpr ::std::ptrdiff_t eyes = 0x680; // PlayerEyes
        inline constexpr ::std::ptrdiff_t inventory = 0x688; // PlayerInventory
        inline constexpr ::std::ptrdiff_t blueprints = 0x690; // PlayerBlueprints
        inline constexpr ::std::ptrdiff_t metabolism = 0x698; // PlayerMetabolism
        inline constexpr ::std::ptrdiff_t modifiers = 0x6A0; // PlayerModifiers
        inline constexpr ::std::ptrdiff_t playerCollider = 0x6A8; // CapsuleCollider
        inline constexpr ::std::ptrdiff_t Belt = 0x6B0; // PlayerBelt
        inline constexpr ::std::ptrdiff_t playerRigidbody = 0x6B8; // Rigidbody
        inline constexpr ::std::ptrdiff_t userID = 0x6C0; // ulong
        inline constexpr ::std::ptrdiff_t UserIDString = 0x6C8; // string
        inline constexpr ::std::ptrdiff_t gamemodeteam = 0x6D0; // int
        inline constexpr ::std::ptrdiff_t reputation = 0x6D4; // int
        inline constexpr ::std::ptrdiff_t _displayName = 0x6D8; // string
        inline constexpr ::std::ptrdiff_t _lastSetName = 0x6E0; // string
        inline constexpr ::std::ptrdiff_t playerColliderStanding = 0x6E8; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderDucked = 0x6FC; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderCrawling = 0x710; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderLyingDown = 0x724; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t cachedProtection = 0x738; // ProtectionProperties
        inline constexpr ::std::ptrdiff_t lastHeadshotSoundTime = 0x740; // float
        inline constexpr ::std::ptrdiff_t nextColliderRefreshTime = 0x744; // float
        inline constexpr ::std::ptrdiff_t clothingBlocksAiming = 0x748; // bool
        inline constexpr ::std::ptrdiff_t clothingMoveSpeedReduction = 0x74C; // float
        inline constexpr ::std::ptrdiff_t clothingWaterSpeedBonus = 0x750; // float
        inline constexpr ::std::ptrdiff_t clothingAccuracyBonus = 0x754; // float
        inline constexpr ::std::ptrdiff_t equippingBlocked = 0x758; // bool
        inline constexpr ::std::ptrdiff_t eggVision = 0x75C; // float
        inline constexpr ::std::ptrdiff_t activeTelephone = 0x760; // PhoneController
        inline constexpr ::std::ptrdiff_t designingAIEntity = 0x768; // BaseEntity
    } // namespace BasePlayer
    namespace BaseEntity {
        inline constexpr ::std::ptrdiff_t ragdoll = 0x70; // Ragdoll
        inline constexpr ::std::ptrdiff_t positionLerp = 0x78; // PositionLerp
        inline constexpr ::std::ptrdiff_t menuOptions = 0x80; // List<Option>
        inline constexpr ::std::ptrdiff_t broadcastProtocol = 0x88; // uint
        inline constexpr ::std::ptrdiff_t links = 0x90; // List<EntityLink>
        inline constexpr ::std::ptrdiff_t linkedToNeighbours = 0x98; // bool
        inline constexpr ::std::ptrdiff_t _pendingFileRequests = 0xA0; // List<BaseEntity.ServerFileRequest>
        inline constexpr ::std::ptrdiff_t updateParentingAction = 0xA8; // Action
        inline constexpr ::std::ptrdiff_t addedToParentEntity = 0xB0; // BaseEntity
        inline constexpr ::std::ptrdiff_t itemSkin = 0xB8; // ItemSkin
        inline constexpr ::std::ptrdiff_t entitySlots = 0xC0; // EntityRef[]
        inline constexpr ::std::ptrdiff_t triggers = 0xC8; // List<TriggerBase>
        inline constexpr ::std::ptrdiff_t isVisible = 0xD0; // bool
        inline constexpr ::std::ptrdiff_t isAnimatorVisible = 0xD1; // bool
        inline constexpr ::std::ptrdiff_t isShadowVisible = 0xD2; // bool
        inline constexpr ::std::ptrdiff_t localOccludee = 0xD8; // OccludeeSphere
        inline constexpr ::std::ptrdiff_t Weight = 0xF8; // float
        inline constexpr ::std::ptrdiff_t bounds = 0xFC; // Bounds
        inline constexpr ::std::ptrdiff_t impactEffect = 0x118; // GameObjectRef
        inline constexpr ::std::ptrdiff_t enableSaving = 0x120; // bool
        inline constexpr ::std::ptrdiff_t syncPosition = 0x121; // bool
        inline constexpr ::std::ptrdiff_t model = 0x128; // Model
        inline constexpr ::std::ptrdiff_t flags = 0x130; // BaseEntity.Flags
        inline constexpr ::std::ptrdiff_t parentBone = 0x134; // uint
        inline constexpr ::std::ptrdiff_t skinID = 0x138; // ulong
        inline constexpr ::std::ptrdiff_t _components = 0x140; // EntityComponentBase[]
        inline constexpr ::std::ptrdiff_t HasBrain = 0x148; // bool
        inline constexpr ::std::ptrdiff_t _name = 0x150; // string
        inline constexpr ::std::ptrdiff_t OwnerID = 0x158; // ulong
    } // namespace BaseEntity
    namespace BaseCombatEntity {
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_Pickup = 0x160; // Option
        inline constexpr ::std::ptrdiff_t skeletonProperties = 0x1B8; // SkeletonProperties
        inline constexpr ::std::ptrdiff_t baseProtection = 0x1C0; // ProtectionProperties
        inline constexpr ::std::ptrdiff_t startHealth = 0x1C8; // float
        inline constexpr ::std::ptrdiff_t pickup = 0x1D0; // BaseCombatEntity.Pickup
        inline constexpr ::std::ptrdiff_t repair = 0x1F0; // BaseCombatEntity.Repair
        inline constexpr ::std::ptrdiff_t ShowHealthInfo = 0x218; // bool
        inline constexpr ::std::ptrdiff_t lifestate = 0x21C; // BaseCombatEntity.LifeState
        inline constexpr ::std::ptrdiff_t sendsHitNotification = 0x220; // bool
        inline constexpr ::std::ptrdiff_t sendsMeleeHitNotification = 0x221; // bool
        inline constexpr ::std::ptrdiff_t markAttackerHostile = 0x222; // bool
        inline constexpr ::std::ptrdiff_t _health = 0x224; // float
        inline constexpr ::std::ptrdiff_t _maxHealth = 0x228; // float
        inline constexpr ::std::ptrdiff_t faction = 0x22C; // BaseCombatEntity.Faction
        inline constexpr ::std::ptrdiff_t deathTime = 0x230; // float
        inline constexpr ::std::ptrdiff_t lastNotifyFrame = 0x234; // int
    } // namespace BaseCombatEntity
    namespace BuildingPrivlidge {
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_MaxAuth = 0x3C8; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_RotateVM = 0x420; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_MenuAuthorize = 0x478; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_MenuClearList = 0x4D0; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_MenuDeauthorize = 0x528; // Option
        inline constexpr ::std::ptrdiff_t cachedProtectedMinutes = 0x580; // float
        inline constexpr ::std::ptrdiff_t cachedUpkeepPeriodMinutes = 0x584; // float
        inline constexpr ::std::ptrdiff_t cachedUpkeepCostFraction = 0x588; // float
        inline constexpr ::std::ptrdiff_t authorizedPlayers = 0x590; // List<PlayerNameID>
        inline constexpr ::std::ptrdiff_t allowedConstructionItems = 0x598; // List<ItemDefinition>
    } // namespace BuildingPrivlidge
    namespace BaseProjectile {
        inline constexpr ::std::ptrdiff_t NoiseRadius = 0x278; // float
        inline constexpr ::std::ptrdiff_t damageScale = 0x27C; // float
        inline constexpr ::std::ptrdiff_t distanceScale = 0x280; // float
        inline constexpr ::std::ptrdiff_t projectileVelocityScale = 0x284; // float
        inline constexpr ::std::ptrdiff_t automatic = 0x288; // bool
        inline constexpr ::std::ptrdiff_t usableByTurret = 0x289; // bool
        inline constexpr ::std::ptrdiff_t turretDamageScale = 0x28C; // float
        inline constexpr ::std::ptrdiff_t attackFX = 0x290; // GameObjectRef
        inline constexpr ::std::ptrdiff_t silencedAttack = 0x298; // GameObjectRef
        inline constexpr ::std::ptrdiff_t muzzleBrakeAttack = 0x2A0; // GameObjectRef
        inline constexpr ::std::ptrdiff_t MuzzlePoint = 0x2A8; // Transform
        inline constexpr ::std::ptrdiff_t reloadTime = 0x2B0; // float
        inline constexpr ::std::ptrdiff_t canUnloadAmmo = 0x2B4; // bool
        inline constexpr ::std::ptrdiff_t primaryMagazine = 0x2B8; // BaseProjectile.Magazine
        inline constexpr ::std::ptrdiff_t fractionalReload = 0x2C0; // bool
        inline constexpr ::std::ptrdiff_t reloadStartDuration = 0x2C4; // float
        inline constexpr ::std::ptrdiff_t reloadFractionDuration = 0x2C8; // float
        inline constexpr ::std::ptrdiff_t reloadEndDuration = 0x2CC; // float
        inline constexpr ::std::ptrdiff_t aimSway = 0x2D0; // float
        inline constexpr ::std::ptrdiff_t aimSwaySpeed = 0x2D4; // float
        inline constexpr ::std::ptrdiff_t recoil = 0x2D8; // RecoilProperties
        inline constexpr ::std::ptrdiff_t aimconeCurve = 0x2E0; // AnimationCurve
        inline constexpr ::std::ptrdiff_t aimCone = 0x2E8; // float
        inline constexpr ::std::ptrdiff_t hipAimCone = 0x2EC; // float
        inline constexpr ::std::ptrdiff_t aimconePenaltyPerShot = 0x2F0; // float
        inline constexpr ::std::ptrdiff_t aimConePenaltyMax = 0x2F4; // float
        inline constexpr ::std::ptrdiff_t aimconePenaltyRecoverTime = 0x2F8; // float
        inline constexpr ::std::ptrdiff_t aimconePenaltyRecoverDelay = 0x2FC; // float
        inline constexpr ::std::ptrdiff_t stancePenaltyScale = 0x300; // float
        inline constexpr ::std::ptrdiff_t hasADS = 0x304; // bool
        inline constexpr ::std::ptrdiff_t noAimingWhileCycling = 0x305; // bool
        inline constexpr ::std::ptrdiff_t manualCycle = 0x306; // bool
        inline constexpr ::std::ptrdiff_t needsCycle = 0x307; // bool
        inline constexpr ::std::ptrdiff_t isCycling = 0x308; // bool
        inline constexpr ::std::ptrdiff_t aiming = 0x309; // bool
        inline constexpr ::std::ptrdiff_t resetDuration = 0x30C; // float
        inline constexpr ::std::ptrdiff_t numShotsFired = 0x310; // int
        inline constexpr ::std::ptrdiff_t nextReloadTime = 0x314; // float
        inline constexpr ::std::ptrdiff_t startReloadTime = 0x318; // float
        inline constexpr ::std::ptrdiff_t stancePenalty = 0x31C; // float
        inline constexpr ::std::ptrdiff_t aimconePenalty = 0x320; // float
        inline constexpr ::std::ptrdiff_t isReloading = 0x324; // bool
        inline constexpr ::std::ptrdiff_t swaySampleTime = 0x328; // float
        inline constexpr ::std::ptrdiff_t lastShotTime = 0x32C; // float
        inline constexpr ::std::ptrdiff_t reloadPressTime = 0x330; // float
        inline constexpr ::std::ptrdiff_t ammoTypePreReload = 0x338; // ItemDefinition
        inline constexpr ::std::ptrdiff_t fractionalReloadDesiredCount = 0x340; // int
        inline constexpr ::std::ptrdiff_t fractionalReloadNumAdded = 0x344; // int
        inline constexpr ::std::ptrdiff_t triggerReady = 0x348; // bool
        inline constexpr ::std::ptrdiff_t nextHeightCheckTime = 0x34C; // float
        inline constexpr ::std::ptrdiff_t cachedUnderground = 0x350; // bool
        inline constexpr ::std::ptrdiff_t createdProjectiles = 0x358; // List<Projectile>
    } // namespace BaseProjectile
    namespace Magazine {
        inline constexpr ::std::ptrdiff_t definition = 0x10; // BaseProjectile.Magazine.Definition
        inline constexpr ::std::ptrdiff_t capacity = 0x18; // int
        inline constexpr ::std::ptrdiff_t contents = 0x1C; // int
        inline constexpr ::std::ptrdiff_t ammoType = 0x20; // ItemDefinition
    } // namespace Magazine
    namespace PlayerInventory {
        inline constexpr ::std::ptrdiff_t containerMain = 0x20; // ItemContainer
        inline constexpr ::std::ptrdiff_t containerBelt = 0x28; // ItemContainer
        inline constexpr ::std::ptrdiff_t containerWear = 0x30; // ItemContainer
        inline constexpr ::std::ptrdiff_t crafting = 0x38; // ItemCrafter
        inline constexpr ::std::ptrdiff_t loot = 0x40; // PlayerLoot
    } // namespace PlayerInventory
    namespace ItemContainer {
        inline constexpr ::std::ptrdiff_t flags = 0x10; // ItemContainer.Flag
        inline constexpr ::std::ptrdiff_t allowedContents = 0x14; // ItemContainer.ContentsType
        inline constexpr ::std::ptrdiff_t onlyAllowedItems = 0x18; // ItemDefinition[]
        inline constexpr ::std::ptrdiff_t availableSlots = 0x20; // List<ItemSlot>
        inline constexpr ::std::ptrdiff_t capacity = 0x28; // int
        inline constexpr ::std::ptrdiff_t uid = 0x2C; // uint
        inline constexpr ::std::ptrdiff_t dirty = 0x30; // bool
        inline constexpr ::std::ptrdiff_t itemList = 0x38; // List<Item>
        inline constexpr ::std::ptrdiff_t temperature = 0x40; // float
        inline constexpr ::std::ptrdiff_t parent = 0x48; // Item
        inline constexpr ::std::ptrdiff_t playerOwner = 0x50; // BasePlayer
        inline constexpr ::std::ptrdiff_t entityOwner = 0x58; // BaseEntity
        inline constexpr ::std::ptrdiff_t isServer = 0x60; // bool
        inline constexpr ::std::ptrdiff_t maxStackSize = 0x64; // int
    } // namespace ItemContainer
    namespace PlayerModel {
        inline constexpr ::std::ptrdiff_t _smoothAimWeight = 0x18; // float
        inline constexpr ::std::ptrdiff_t _smoothVelocity = 0x1C; // float
        inline constexpr ::std::ptrdiff_t _smoothlookAngle = 0x20; // Vector3
        inline constexpr ::std::ptrdiff_t allowMountedHeadLook = 0x2C; // bool
        inline constexpr ::std::ptrdiff_t smoothLookDir = 0x30; // Vector3
        inline constexpr ::std::ptrdiff_t lastSafeLookDir = 0x3C; // Vector3
        inline constexpr ::std::ptrdiff_t Shoulders = 0x48; // Transform[]
        inline constexpr ::std::ptrdiff_t AdditionalSpineBones = 0x50; // Transform[]
        inline constexpr ::std::ptrdiff_t LegParts = 0x58; // List<SkinnedMeshRenderer>
        inline constexpr ::std::ptrdiff_t fakeSpineBones = 0x60; // Transform[]
        inline constexpr ::std::ptrdiff_t extraLeanBack = 0x68; // float
        inline constexpr ::std::ptrdiff_t timeInArmsMode = 0x70; // float
        inline constexpr ::std::ptrdiff_t collision = 0x78; // BoxCollider
        inline constexpr ::std::ptrdiff_t censorshipCube = 0x80; // GameObject
        inline constexpr ::std::ptrdiff_t censorshipCubeBreasts = 0x88; // GameObject
        inline constexpr ::std::ptrdiff_t jawBone = 0x90; // GameObject
        inline constexpr ::std::ptrdiff_t neckBone = 0x98; // GameObject
        inline constexpr ::std::ptrdiff_t headBone = 0xA0; // GameObject
        inline constexpr ::std::ptrdiff_t eyeController = 0xA8; // EyeController
        inline constexpr ::std::ptrdiff_t blinkController = 0xB0; // EyeBlink
        inline constexpr ::std::ptrdiff_t SpineBones = 0xB8; // Transform[]
        inline constexpr ::std::ptrdiff_t leftFootBone = 0xC0; // Transform
        inline constexpr ::std::ptrdiff_t rightFootBone = 0xC8; // Transform
        inline constexpr ::std::ptrdiff_t leftHandPropBone = 0xD0; // Transform
        inline constexpr ::std::ptrdiff_t rightHandPropBone = 0xD8; // Transform
        inline constexpr ::std::ptrdiff_t rightHandTarget = 0xE0; // Vector3
        inline constexpr ::std::ptrdiff_t leftHandTargetPosition = 0xEC; // Vector3
        inline constexpr ::std::ptrdiff_t leftHandTargetRotation = 0xF8; // Quaternion
        inline constexpr ::std::ptrdiff_t rightHandTargetPosition = 0x108; // Vector3
        inline constexpr ::std::ptrdiff_t rightHandTargetRotation = 0x114; // Quaternion
        inline constexpr ::std::ptrdiff_t steeringTargetDegrees = 0x124; // float
        inline constexpr ::std::ptrdiff_t rightFootTargetPosition = 0x128; // Vector3
        inline constexpr ::std::ptrdiff_t rightFootTargetRotation = 0x134; // Quaternion
        inline constexpr ::std::ptrdiff_t leftFootTargetPosition = 0x144; // Vector3
        inline constexpr ::std::ptrdiff_t leftFootTargetRotation = 0x150; // Quaternion
        inline constexpr ::std::ptrdiff_t CinematicAnimationController = 0x160; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t DefaultAvatar = 0x168; // Avatar
        inline constexpr ::std::ptrdiff_t CinematicAvatar = 0x170; // Avatar
        inline constexpr ::std::ptrdiff_t DefaultHoldType = 0x178; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t SleepGesture = 0x180; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t CrawlToIncapacitatedGesture = 0x188; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t StandToIncapacitatedGesture = 0x190; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t CurrentGesture = 0x198; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t MaleSkin = 0x1A0; // SkinSetCollection
        inline constexpr ::std::ptrdiff_t FemaleSkin = 0x1A8; // SkinSetCollection
        inline constexpr ::std::ptrdiff_t subsurfaceProfile = 0x1B0; // SubsurfaceProfile
        inline constexpr ::std::ptrdiff_t voiceVolume = 0x1B8; // float
        inline constexpr ::std::ptrdiff_t skinColor = 0x1BC; // float
        inline constexpr ::std::ptrdiff_t skinNumber = 0x1C0; // float
        inline constexpr ::std::ptrdiff_t meshNumber = 0x1C4; // float
        inline constexpr ::std::ptrdiff_t hairNumber = 0x1C8; // float
        inline constexpr ::std::ptrdiff_t skinType = 0x1CC; // int
        inline constexpr ::std::ptrdiff_t movementSounds = 0x1D0; // MovementSounds
        inline constexpr ::std::ptrdiff_t showSash = 0x1D8; // bool
        inline constexpr ::std::ptrdiff_t tempPoseType = 0x1DC; // int
        inline constexpr ::std::ptrdiff_t underwearSkin = 0x1E0; // uint
        inline constexpr ::std::ptrdiff_t overrideSkinSeed = 0x1E8; // ulong
        inline constexpr ::std::ptrdiff_t AimAngles = 0x1F0; // Quaternion
        inline constexpr ::std::ptrdiff_t LookAngles = 0x200; // Quaternion
        inline constexpr ::std::ptrdiff_t modelState = 0x210; // ModelState
        inline constexpr ::std::ptrdiff_t position = 0x218; // Vector3
        inline constexpr ::std::ptrdiff_t velocity = 0x224; // Vector3
        inline constexpr ::std::ptrdiff_t speedOverride = 0x230; // Vector3
        inline constexpr ::std::ptrdiff_t newVelocity = 0x23C; // Vector3
        inline constexpr ::std::ptrdiff_t rotation = 0x248; // Quaternion
        inline constexpr ::std::ptrdiff_t mountedRotation = 0x258; // Quaternion
        inline constexpr ::std::ptrdiff_t smoothLeftFootIK = 0x268; // Vector3
        inline constexpr ::std::ptrdiff_t smoothRightFootIK = 0x274; // Vector3
        inline constexpr ::std::ptrdiff_t drawShadowOnly = 0x280; // bool
        inline constexpr ::std::ptrdiff_t isIncapacitated = 0x281; // bool
        inline constexpr ::std::ptrdiff_t flinchLocation = 0x284; // uint
        inline constexpr ::std::ptrdiff_t visible = 0x288; // bool
        inline constexpr ::std::ptrdiff_t nameTag = 0x290; // PlayerNameTag
        inline constexpr ::std::ptrdiff_t animatorNeedsWarmup = 0x298; // bool
        inline constexpr ::std::ptrdiff_t isLocalPlayer = 0x299; // bool
        inline constexpr ::std::ptrdiff_t aimSoundDef = 0x2A0; // SoundDefinition
        inline constexpr ::std::ptrdiff_t aimEndSoundDef = 0x2A8; // SoundDefinition
        inline constexpr ::std::ptrdiff_t InGesture = 0x2B0; // bool
        inline constexpr ::std::ptrdiff_t CurrentGestureConfig = 0x2B8; // GestureConfig
        inline constexpr ::std::ptrdiff_t InCinematic = 0x2C0; // bool
        inline constexpr ::std::ptrdiff_t defaultAnimatorController = 0x2C8; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t _multiMesh = 0x2D0; // SkinnedMultiMesh
        inline constexpr ::std::ptrdiff_t _animator = 0x2D8; // Animator
        inline constexpr ::std::ptrdiff_t _lodGroup = 0x2E0; // LODGroup
        inline constexpr ::std::ptrdiff_t _currentGesture = 0x2E8; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t holdTypeLock = 0x2F0; // float
        inline constexpr ::std::ptrdiff_t wasMountedRightAim = 0x2F4; // bool
        inline constexpr ::std::ptrdiff_t cachedMask = 0x2F8; // int
        inline constexpr ::std::ptrdiff_t cachedConstructionMask = 0x2FC; // int
        inline constexpr ::std::ptrdiff_t WorkshopHeldEntity = 0x300; // HeldEntity
        inline constexpr ::std::ptrdiff_t wasCrawling = 0x308; // bool
        inline constexpr ::std::ptrdiff_t mountedSpineLookWeight = 0x30C; // float
        inline constexpr ::std::ptrdiff_t mountedAnimSpeed = 0x310; // float
        inline constexpr ::std::ptrdiff_t preserveBones = 0x314; // bool
        inline constexpr ::std::ptrdiff_t IsNpc = 0x320; // bool
        inline constexpr ::std::ptrdiff_t timeSinceReactionStart = 0x324; // TimeSince
        inline constexpr ::std::ptrdiff_t timeSinceLeftFootTest = 0x328; // TimeSince
        inline constexpr ::std::ptrdiff_t cachedLeftFootPos = 0x32C; // Vector3
        inline constexpr ::std::ptrdiff_t cachedLeftFootNormal = 0x338; // Vector3
        inline constexpr ::std::ptrdiff_t timeSinceRightFootTest = 0x344; // TimeSince
        inline constexpr ::std::ptrdiff_t cachedRightFootPos = 0x348; // Vector3
        inline constexpr ::std::ptrdiff_t cachedRightFootNormal = 0x354; // Vector3
    } // namespace PlayerModel
    namespace ModelState {
        inline constexpr ::std::ptrdiff_t ShouldPool = 0x10; // bool
        inline constexpr ::std::ptrdiff_t _disposed = 0x11; // bool
        inline constexpr ::std::ptrdiff_t waterLevel = 0x14; // float
        inline constexpr ::std::ptrdiff_t lookDir = 0x18; // Vector3
        inline constexpr ::std::ptrdiff_t flags = 0x24; // int
        inline constexpr ::std::ptrdiff_t poseType = 0x28; // int
        inline constexpr ::std::ptrdiff_t inheritedVelocity = 0x2C; // Vector3
    } // namespace ModelState
    namespace Item {
        inline constexpr ::std::ptrdiff_t _condition = 0x18; // float
        inline constexpr ::std::ptrdiff_t _maxCondition = 0x1C; // float
        inline constexpr ::std::ptrdiff_t info = 0x20; // ItemDefinition
        inline constexpr ::std::ptrdiff_t uid = 0x28; // uint
        inline constexpr ::std::ptrdiff_t dirty = 0x2C; // bool
        inline constexpr ::std::ptrdiff_t amount = 0x30; // int
        inline constexpr ::std::ptrdiff_t position = 0x34; // int
        inline constexpr ::std::ptrdiff_t busyTime = 0x38; // float
        inline constexpr ::std::ptrdiff_t removeTime = 0x3C; // float
        inline constexpr ::std::ptrdiff_t fuel = 0x40; // float
        inline constexpr ::std::ptrdiff_t isServer = 0x44; // bool
        inline constexpr ::std::ptrdiff_t instanceData = 0x48; // Item.InstanceData
        inline constexpr ::std::ptrdiff_t skin = 0x50; // ulong
        inline constexpr ::std::ptrdiff_t name = 0x58; // string
        inline constexpr ::std::ptrdiff_t text = 0x60; // string
        inline constexpr ::std::ptrdiff_t flags = 0x70; // Item.Flag
        inline constexpr ::std::ptrdiff_t contents = 0x78; // ItemContainer
        inline constexpr ::std::ptrdiff_t parent = 0x80; // ItemContainer
        inline constexpr ::std::ptrdiff_t worldEnt = 0x88; // EntityRef
        inline constexpr ::std::ptrdiff_t heldEntity = 0x98; // EntityRef
    } // namespace Item
    namespace Model {
        inline constexpr ::std::ptrdiff_t collision = 0x18; // SphereCollider
        inline constexpr ::std::ptrdiff_t rootBone = 0x20; // Transform
        inline constexpr ::std::ptrdiff_t headBone = 0x28; // Transform
        inline constexpr ::std::ptrdiff_t eyeBone = 0x30; // Transform
        inline constexpr ::std::ptrdiff_t animator = 0x38; // Animator
        inline constexpr ::std::ptrdiff_t skeleton = 0x40; // Skeleton
        inline constexpr ::std::ptrdiff_t boneTransforms = 0x48; // Transform[]
        inline constexpr ::std::ptrdiff_t boneNames = 0x50; // string[]
        inline constexpr ::std::ptrdiff_t boneDict = 0x58; // BoneDictionary
        inline constexpr ::std::ptrdiff_t skin = 0x60; // int
        inline constexpr ::std::ptrdiff_t _lodGroup = 0x68; // LODGroup
    } // namespace Model
} // namespace blazedumper
