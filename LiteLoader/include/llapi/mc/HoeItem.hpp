/**
 * @file  HoeItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"
#include "DiggerItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoeItem.
 *
 */
class HoeItem : public DiggerItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOEITEM
public:
    class HoeItem& operator=(class HoeItem const &) = delete;
    HoeItem(class HoeItem const &) = delete;
    HoeItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -120383937
     */
    virtual ~HoeItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  10
     * @symbol ?executeEvent@HoeItem@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     * @hash   -735348954
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @hash   -219607711
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @hash   -217760669
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  63
     * @symbol ?getEnchantSlot@HoeItem@@UEBAHXZ
     * @hash   -1669462485
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @symbol ??0HoeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@AEBVExperiments@@@Z
     * @hash   57723033
     */
    MCAPI HoeItem(std::string const &, int, class Item::Tier const &, class Experiments const &);

};