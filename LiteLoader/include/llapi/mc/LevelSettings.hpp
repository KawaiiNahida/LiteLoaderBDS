/**
 * @file  LevelSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSettings.
 *
 */
class LevelSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSETTINGS
public:
    class LevelSettings& operator=(class LevelSettings const &) = delete;
#endif

public:
    /**
     * @symbol ??0LevelSettings@@QEAA@$$QEAV0@@Z
     * @hash   496093927
     */
    MCAPI LevelSettings(class LevelSettings &&);
    /**
     * @symbol ??0LevelSettings@@QEAA@AEBVLevelData@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   177928297
     */
    MCAPI LevelSettings(class LevelData const &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ??0LevelSettings@@QEAA@XZ
     * @hash   -1648600125
     */
    MCAPI LevelSettings();
    /**
     * @symbol ??0LevelSettings@@QEAA@AEBV0@@Z
     * @hash   -1400030639
     */
    MCAPI LevelSettings(class LevelSettings const &);
    /**
     * @symbol ?achievementsWillBeDisabledOnLoad@LevelSettings@@QEBA_NXZ
     * @hash   2114598098
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @symbol ?educationFeaturesEnabled@LevelSettings@@QEBA_NXZ
     * @hash   271909314
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @symbol ?educationProductID@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1230762352
     */
    MCAPI std::string const & educationProductID() const;
    /**
     * @symbol ?forceGameType@LevelSettings@@QEBA_NXZ
     * @hash   1664214608
     */
    MCAPI bool forceGameType() const;
    /**
     * @symbol ?getBaseGameVersion@LevelSettings@@QEBAAEBVBaseGameVersion@@XZ
     * @hash   -224156924
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @symbol ?getBiomeOverride@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1203804392
     */
    MCAPI std::string const & getBiomeOverride() const;
    /**
     * @symbol ?getChatRestrictionLevel@LevelSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
     * @hash   1729584936
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @symbol ?getCustomSkinsDisabled@LevelSettings@@QEBA_NXZ
     * @hash   -1640202494
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @symbol ?getDefaultPermissions@LevelSettings@@QEBAAEBVPermissionsHandler@@XZ
     * @hash   -1202722048
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @symbol ?getDefaultSpawn@LevelSettings@@QEBAAEBVBlockPos@@XZ
     * @hash   766721790
     */
    MCAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @symbol ?getDisablePlayerInteractions@LevelSettings@@QEBA_NXZ
     * @hash   1762985474
     */
    MCAPI bool getDisablePlayerInteractions() const;
    /**
     * @symbol ?getEduSharedUriResource@LevelSettings@@QEBAAEBUEduSharedUriResource@@XZ
     * @hash   -209946708
     */
    MCAPI struct EduSharedUriResource const & getEduSharedUriResource() const;
    /**
     * @symbol ?getEducationEditionOffer@LevelSettings@@QEBA?AW4EducationEditionOffer@@XZ
     * @hash   -1886368596
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @symbol ?getEducationLevelSettings@LevelSettings@@QEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
     * @hash   -763988397
     */
    MCAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @symbol ?getExperiments@LevelSettings@@QEBAAEBVExperiments@@XZ
     * @hash   1114810884
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @symbol ?getGameDifficulty@LevelSettings@@QEBA?AW4Difficulty@@XZ
     * @hash   -1322405198
     */
    MCAPI enum class Difficulty getGameDifficulty() const;
    /**
     * @symbol ?getGameRules@LevelSettings@@QEBAAEBVGameRules@@XZ
     * @hash   1193412356
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @symbol ?getGameType@LevelSettings@@QEBA?AW4GameType@@XZ
     * @hash   -1926890560
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @symbol ?getGenerator@LevelSettings@@QEBA?AW4GeneratorType@@XZ
     * @hash   33064024
     */
    MCAPI enum class GeneratorType getGenerator() const;
    /**
     * @symbol ?getImmutableWorld@LevelSettings@@QEBA_NXZ
     * @hash   -674952336
     */
    MCAPI bool getImmutableWorld() const;
    /**
     * @symbol ?getLanBroadcastIntent@LevelSettings@@QEBA_NXZ
     * @hash   998610640
     */
    MCAPI bool getLanBroadcastIntent() const;
    /**
     * @symbol ?getLightningLevel@LevelSettings@@QEBAMXZ
     * @hash   877564838
     */
    MCAPI float getLightningLevel() const;
    /**
     * @symbol ?getLimitedWorldDepth@LevelSettings@@QEBAHXZ
     * @hash   -850527504
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @symbol ?getLimitedWorldWidth@LevelSettings@@QEBAHXZ
     * @hash   394296886
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @symbol ?getMultiplayerGameIntent@LevelSettings@@QEBA_NXZ
     * @hash   1480082
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @symbol ?getNetherType@LevelSettings@@QEBA?AW4NetherWorldType@@XZ
     * @hash   -878948734
     */
    MCAPI enum class NetherWorldType getNetherType() const;
    /**
     * @symbol ?getOnlySpawnV1Villagers@LevelSettings@@QEBA_NXZ
     * @hash   -1941184352
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @symbol ?getPersonaDisabled@LevelSettings@@QEBA_NXZ
     * @hash   1950522994
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @symbol ?getPlatformBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
     * @hash   -1929897944
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @symbol ?getRainLevel@LevelSettings@@QEBAMXZ
     * @hash   1481597784
     */
    MCAPI float getRainLevel() const;
    /**
     * @symbol ?getSeed@LevelSettings@@QEBA?AVLevelSeed64@@XZ
     * @hash   606569660
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @symbol ?getServerChunkTickRange@LevelSettings@@QEBAIXZ
     * @hash   1842552266
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @symbol ?getSpawnSettings@LevelSettings@@QEBA?AUSpawnSettings@@XZ
     * @hash   104226410
     */
    MCAPI struct SpawnSettings getSpawnSettings() const;
    /**
     * @symbol ?getTime@LevelSettings@@QEBAHXZ
     * @hash   1694592798
     */
    MCAPI int getTime() const;
    /**
     * @symbol ?getWorldVersion@LevelSettings@@QEBA?AW4WorldVersion@@XZ
     * @hash   -137436836
     */
    MCAPI enum class WorldVersion getWorldVersion() const;
    /**
     * @symbol ?getXBLBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
     * @hash   -1717823884
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @symbol ?hasAchievementsDisabled@LevelSettings@@QEBA_NXZ
     * @hash   1585103728
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @symbol ?hasBonusChestEnabled@LevelSettings@@QEBA_NXZ
     * @hash   -602717022
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @symbol ?hasCommandsEnabled@LevelSettings@@QEBA_NXZ
     * @hash   148394290
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @symbol ?hasConfirmedPlatformLockedContent@LevelSettings@@QEBA_NXZ
     * @hash   769235296
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @symbol ?hasLockedBehaviorPack@LevelSettings@@QEBA_NXZ
     * @hash   634869488
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @symbol ?hasLockedResourcePack@LevelSettings@@QEBA_NXZ
     * @hash   2110505088
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @symbol ?hasStartWithMapEnabled@LevelSettings@@QEBA_NXZ
     * @hash   -2052506254
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @symbol ?isEditorWorld@LevelSettings@@QEBA_NXZ
     * @hash   311258416
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @symbol ?isFromLockedTemplate@LevelSettings@@QEBA_NXZ
     * @hash   1021407970
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @symbol ?isFromWorldTemplate@LevelSettings@@QEBA_NXZ
     * @hash   832495248
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @symbol ?isTexturepacksRequired@LevelSettings@@QEBA_NXZ
     * @hash   -839171902
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @symbol ?isWorldTemplateOptionLocked@LevelSettings@@QEBA_NXZ
     * @hash   -273410224
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @symbol ??4LevelSettings@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   2131060162
     */
    MCAPI class LevelSettings & operator=(class LevelSettings &&);
    /**
     * @symbol ?overrideSavedSettings@LevelSettings@@QEBAXAEAVLevelData@@@Z
     * @hash   -184179572
     */
    MCAPI void overrideSavedSettings(class LevelData &) const;
    /**
     * @symbol ?setBaseGameVersion@LevelSettings@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
     * @hash   456124273
     */
    MCAPI class LevelSettings & setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?setChatRestrictionLevel@LevelSettings@@QEAAAEAV1@W4ChatRestrictionLevel@@@Z
     * @hash   -848302561
     */
    MCAPI class LevelSettings & setChatRestrictionLevel(enum class ChatRestrictionLevel);
    /**
     * @symbol ?setCommandsEnabled@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   624204989
     */
    MCAPI class LevelSettings & setCommandsEnabled(bool);
    /**
     * @symbol ?setCustomSkinsDisabled@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   -1787018499
     */
    MCAPI class LevelSettings & setCustomSkinsDisabled(bool);
    /**
     * @symbol ?setDefaultPlayerPermissions@LevelSettings@@QEAAAEAV1@W4PlayerPermissionLevel@@@Z
     * @hash   53843947
     */
    MCAPI class LevelSettings & setDefaultPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @symbol ?setDifficulty@LevelSettings@@QEAAAEAV1@W4Difficulty@@@Z
     * @hash   543445187
     */
    MCAPI class LevelSettings & setDifficulty(enum class Difficulty);
    /**
     * @symbol ?setDisablePlayerInteractions@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   1058127915
     */
    MCAPI class LevelSettings & setDisablePlayerInteractions(bool);
    /**
     * @symbol ?setEduSharedUriResource@LevelSettings@@QEAAAEAV1@AEBUEduSharedUriResource@@@Z
     * @hash   -2134486525
     */
    MCAPI class LevelSettings & setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @symbol ?setEducationFeaturesEnabled@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   -656150371
     */
    MCAPI class LevelSettings & setEducationFeaturesEnabled(bool);
    /**
     * @symbol ?setEducationProductID@LevelSettings@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   316049777
     */
    MCAPI class LevelSettings & setEducationProductID(std::string);
    /**
     * @symbol ?setForceGameType@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   769451233
     */
    MCAPI class LevelSettings & setForceGameType(bool);
    /**
     * @symbol ?setGameRules@LevelSettings@@QEAAAEAV1@VGameRules@@@Z
     * @hash   -1115058897
     */
    MCAPI class LevelSettings & setGameRules(class GameRules);
    /**
     * @symbol ?setGameType@LevelSettings@@QEAAAEAV1@W4GameType@@@Z
     * @hash   552465167
     */
    MCAPI class LevelSettings & setGameType(enum class GameType);
    /**
     * @symbol ?setGeneratorType@LevelSettings@@QEAAAEAV1@W4GeneratorType@@@Z
     * @hash   -1992278729
     */
    MCAPI class LevelSettings & setGeneratorType(enum class GeneratorType);
    /**
     * @symbol ?setIsEditorWorld@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   -1427500183
     */
    MCAPI class LevelSettings & setIsEditorWorld(bool);
    /**
     * @symbol ?setOnlySpawnV1Villagers@LevelSettings@@QEAAX_N@Z
     * @hash   -1904912532
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @symbol ?setOverrideSavedSettings@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   -1069771133
     */
    MCAPI class LevelSettings & setOverrideSavedSettings(bool);
    /**
     * @symbol ?setPlatformBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
     * @hash   -2054956711
     */
    MCAPI class LevelSettings & setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol ?setRandomSeed@LevelSettings@@QEAAAEAV1@VLevelSeed64@@@Z
     * @hash   391155931
     */
    MCAPI class LevelSettings & setRandomSeed(class LevelSeed64);
    /**
     * @symbol ?setServerChunkTickRange@LevelSettings@@QEAAAEAV1@I@Z
     * @hash   -415947859
     */
    MCAPI class LevelSettings & setServerChunkTickRange(unsigned int);
    /**
     * @symbol ?setSpawnSettings@LevelSettings@@QEAAAEAV1@USpawnSettings@@@Z
     * @hash   -995573411
     */
    MCAPI class LevelSettings & setSpawnSettings(struct SpawnSettings);
    /**
     * @symbol ?setTexturePackRequired@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   780975753
     */
    MCAPI class LevelSettings & setTexturePackRequired(bool);
    /**
     * @symbol ?setUseMsaGamertagsOnly@LevelSettings@@QEAAAEAV1@_N@Z
     * @hash   1284536477
     */
    MCAPI class LevelSettings & setUseMsaGamertagsOnly(bool);
    /**
     * @symbol ?setXblBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
     * @hash   -1894839781
     */
    MCAPI class LevelSettings & setXblBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol ?shouldOverrideSavedSettings@LevelSettings@@QEBA_NXZ
     * @hash   -373173584
     */
    MCAPI bool shouldOverrideSavedSettings() const;
    /**
     * @symbol ?useMsaGamertagsOnly@LevelSettings@@QEBA_NXZ
     * @hash   -1101291136
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @symbol ??1LevelSettings@@QEAA@XZ
     * @hash   1892328371
     */
    MCAPI ~LevelSettings();
    /**
     * @symbol ?parseSeedString@LevelSettings@@SA?AV?$optional@VLevelSeed64@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   262812490
     */
    MCAPI static class std::optional<class LevelSeed64> parseSeedString(std::string const &);

};