/**
 * @file  HoldGroundGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoldGroundGoal.
 *
 */
class HoldGroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOLDGROUNDGOAL
public:
    class HoldGroundGoal& operator=(class HoldGroundGoal const &) = delete;
    HoldGroundGoal(class HoldGroundGoal const &) = delete;
    HoldGroundGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -460138077
     */
    virtual ~HoldGroundGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@HoldGroundGoal@@UEAA_NXZ
     * @hash   1224913479
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@HoldGroundGoal@@UEAA_NXZ
     * @hash   1282492933
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@HoldGroundGoal@@UEAAXXZ
     * @hash   -183638640
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@HoldGroundGoal@@UEAAXXZ
     * @hash   1071808256
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@HoldGroundGoal@@UEAAXXZ
     * @hash   866403531
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@HoldGroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -708179351
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0HoldGroundGoal@@QEAA@AEAVMob@@M_NMAEBVActorDefinitionTrigger@@@Z
     * @hash   -858422124
     */
    MCAPI HoldGroundGoal(class Mob &, float, bool, float, class ActorDefinitionTrigger const &);

};