/**
 * @file  HideGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HideGoal.
 *
 */
class HideGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDEGOAL
public:
    class HideGoal& operator=(class HideGoal const &) = delete;
    HideGoal(class HideGoal const &) = delete;
    HideGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1861772737
     */
    virtual ~HideGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@HideGoal@@UEAA_NXZ
     * @hash   -811462581
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@HideGoal@@UEAA_NXZ
     * @hash   1569936153
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@HideGoal@@UEAAXXZ
     * @hash   -1504034268
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@HideGoal@@UEAAXXZ
     * @hash   629217748
     */
    virtual void stop();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@HideGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   530344261
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  16
     * @symbol ?_getRepathTime@HideGoal@@MEBA_KXZ
     * @hash   2105722656
     */
    virtual unsigned __int64 _getRepathTime() const;
    /**
     * @vftbl  17
     * @symbol ?_getOwnedPOI@HideGoal@@MEBA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@@Z
     * @hash   552618582
     */
    virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum class POIType) const;
    /**
     * @symbol ??0HideGoal@@QEAA@AEAVMob@@MMMW4POIType@@@Z
     * @hash   -566635134
     */
    MCAPI HideGoal(class Mob &, float, float, float, enum class POIType);

};