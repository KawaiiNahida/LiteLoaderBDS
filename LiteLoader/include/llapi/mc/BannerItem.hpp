/**
 * @file  BannerItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerItem.
 *
 */
class BannerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERITEM
public:
    class BannerItem& operator=(class BannerItem const &) = delete;
    BannerItem(class BannerItem const &) = delete;
    BannerItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1763196585
     */
    virtual ~BannerItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
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
     * @vftbl  55
     * @symbol ?isWearableThroughLootTable@BannerItem@@UEBA_NPEBVCompoundTag@@@Z
     * @hash   -1111997609
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@BannerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1476572736
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  68
     * @symbol ?isValidAuxValue@BannerItem@@UEBA_NH@Z
     * @hash   -1051333243
     */
    virtual bool isValidAuxValue(int) const;
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
     * @vftbl  96
     * @symbol ?buildDescriptionId@BannerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -405410053
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  136
     * @symbol ?_useOn@BannerItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   -185566433
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0BannerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   195500157
     */
    MCAPI BannerItem(std::string const &, int);
    /**
     * @symbol ?getPatternAndColorPairsFromItemStack@BannerItem@@SA?AV?$vector@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@V?$allocator@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@@2@@std@@AEBVItemStackBase@@@Z
     * @hash   1866607660
     */
    MCAPI static std::vector<struct std::pair<class gsl::not_null<class BannerPattern const *>, enum class ItemColor>> getPatternAndColorPairsFromItemStack(class ItemStackBase const &);

};