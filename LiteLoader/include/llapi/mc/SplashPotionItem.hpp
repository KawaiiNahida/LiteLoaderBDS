/**
 * @file  SplashPotionItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Potion.hpp"
#include "PotionItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SplashPotionItem.
 *
 */
class SplashPotionItem : public PotionItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONITEM
public:
    class SplashPotionItem& operator=(class SplashPotionItem const &) = delete;
    SplashPotionItem(class SplashPotionItem const &) = delete;
    SplashPotionItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1362961961
     */
    virtual ~SplashPotionItem();
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
     * @vftbl  23
     * @symbol ?isThrowable@SplashPotionItem@@UEBA_NXZ
     * @hash   2059118817
     */
    virtual bool isThrowable() const;
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
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@SplashPotionItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1831164834
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
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
     * @hash   -168160576
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
     * @vftbl  85
     * @symbol ?use@SplashPotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   39274561
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  86
     * @symbol ?dispense@SplashPotionItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -655970567
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  96
     * @symbol ?buildDescriptionId@SplashPotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -119418323
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  123
     * @symbol ?getIcon@SplashPotionItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     * @hash   -1767672640
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  125
     * @symbol ?setIcon@SplashPotionItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   402360527
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @vftbl  137
     * @symbol ?getPotionType@SplashPotionItem@@UEBA?AW4PotionType@Potion@@XZ
     * @hash   -353371746
     */
    virtual enum class Potion::PotionType getPotionType() const;
    /**
     * @symbol ??0SplashPotionItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   2058965211
     */
    MCAPI SplashPotionItem(std::string const &, int);

};