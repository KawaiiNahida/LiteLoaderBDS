/**
 * @file  MC/Raid.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Raid.
 *
 */
class Raid {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAID
public:
    class Raid& operator=(class Raid const &) = delete;
    Raid(class Raid const &) = delete;
    Raid() = delete;
#endif

public:
    /**
     * @hash   1658563224
     * @symbol ??0Raid@@QEAA@HHHHW4Difficulty@@E$$QEAV?$function@$$A6A_N_KAEAVVec3@@@Z@std@@$$QEAV?$function@$$A6A_N_KVVec3@@EAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z@3@$$QEAV?$function@$$A6A_NAEBUActorUniqueID@@@Z@3@$$QEAV?$function@$$A6A_NXZ@3@@Z
     */
    MCAPI Raid(int, int, int, int, enum Difficulty, unsigned char, class std::function<bool (unsigned __int64, class Vec3 &)> &&, class std::function<bool (unsigned __int64, class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &)> &&, class std::function<bool (struct ActorUniqueID const &)> &&, class std::function<bool (void)> &&);
    /**
     * @hash   -980270056
     * @symbol ?addAdditionalSaveData@Raid@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1315664488
     * @symbol ?addPlayerToHeroList@Raid@@QEAAXAEBVActor@@@Z
     */
    MCAPI void addPlayerToHeroList(class Actor const &);
    /**
     * @hash   661446482
     * @symbol ?appendDebugInfo@Raid@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void appendDebugInfo(std::string &) const;
    /**
     * @hash   -57611050
     * @symbol ?getBossBarFilledFraction@Raid@@QEBAMXZ
     */
    MCAPI float getBossBarFilledFraction() const;
    /**
     * @hash   1531341567
     * @symbol ?getRemainingRaiders@Raid@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getRemainingRaiders() const;
    /**
     * @hash   483610466
     * @symbol ?readAdditionalSaveData@Raid@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @symbol ?tick@Raid@@QEAAXUTick@@@Z
     */
    MCAPI void tick(struct Tick);
    /**
     * @hash   -107080876
     * @symbol ??1Raid@@QEAA@XZ
     */
    MCAPI ~Raid();
    /**
     * @hash   -463856703
     * @symbol ?INVALID_SPAWN_POINT@Raid@@2VVec3@@B
     */
    MCAPI static class Vec3 const INVALID_SPAWN_POINT;

//private:
    /**
     * @hash   -1263570343
     * @symbol ?_getTotalRaiderHealth@Raid@@AEBAMXZ
     */
    MCAPI float _getTotalRaiderHealth() const;
    /**
     * @hash   1999546734
     * @symbol ?_tickGroupInPlay@Raid@@AEAAXXZ
     */
    MCAPI void _tickGroupInPlay();

private:
    /**
     * @hash   -371875372
     * @symbol ?NUM_GROUPS_ON_EASY@Raid@@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_EASY;
    /**
     * @hash   54402783
     * @symbol ?NUM_GROUPS_ON_HARD@Raid@@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_HARD;
    /**
     * @hash   -139744998
     * @symbol ?NUM_GROUPS_ON_NORMAL@Raid@@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_NORMAL;

};