/**
 * @file  DouseFireSubcomponent.hpp
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
 * @brief MC class DouseFireSubcomponent.
 *
 */
class DouseFireSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUSEFIRESUBCOMPONENT
public:
    class DouseFireSubcomponent& operator=(class DouseFireSubcomponent const &) = delete;
    DouseFireSubcomponent(class DouseFireSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1359774877
     */
    virtual ~DouseFireSubcomponent();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1407555070
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@DouseFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   -546774477
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@DouseFireSubcomponent@@UEAAPEBDXZ
     * @hash   -937197506
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUSEFIRESUBCOMPONENT
    /**
     * @symbol ?readfromJSON@DouseFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   1857396825
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @symbol ?writetoJSON@DouseFireSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   -572769472
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @symbol ??0DouseFireSubcomponent@@QEAA@XZ
     * @hash   -246234997
     */
    MCAPI DouseFireSubcomponent();
    /**
     * @symbol ?douseFire@DouseFireSubcomponent@@QEAAXAEAVActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -325922806
     */
    MCAPI void douseFire(class Actor &, class BlockSource &, class BlockPos const &);

};