/**
 * @file  WritableBookItem.hpp
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
 * @brief MC class WritableBookItem.
 *
 */
class WritableBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITABLEBOOKITEM
public:
    class WritableBookItem& operator=(class WritableBookItem const &) = delete;
    WritableBookItem(class WritableBookItem const &) = delete;
    WritableBookItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1126110886
     */
    virtual ~WritableBookItem();
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
     * @vftbl  60
     * @symbol ?requiresInteract@WritableBookItem@@UEBA_NXZ
     * @hash   -926640096
     */
    virtual bool requiresInteract() const;
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
     * @vftbl  85
     * @symbol ?use@WritableBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   -388087998
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  119
     * @symbol ?getInteractText@WritableBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     * @hash   -1575895177
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @symbol ??0WritableBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   800932458
     */
    MCAPI WritableBookItem(std::string const &, int);
    /**
     * @symbol ?addPageAt@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
     * @hash   -773655606
     */
    MCAPI static void addPageAt(class ItemStack &, int, struct PageContent const &);
    /**
     * @symbol ?deletePage@WritableBookItem@@SA?AUPageContent@@AEAVItemStack@@H@Z
     * @hash   -1384502504
     */
    MCAPI static struct PageContent deletePage(class ItemStack &, int);
    /**
     * @symbol ?replacePage@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
     * @hash   -269648678
     */
    MCAPI static void replacePage(class ItemStack &, int, struct PageContent const &);
    /**
     * @symbol ?signBook@WritableBookItem@@SAXAEAVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z
     * @hash   -1793995853
     */
    MCAPI static void signBook(class ItemStack &, std::string, std::string, std::string);
    /**
     * @symbol ?swapPages@WritableBookItem@@SAXAEAVItemStack@@HH@Z
     * @hash   2011739362
     */
    MCAPI static void swapPages(class ItemStack &, int, int);

};