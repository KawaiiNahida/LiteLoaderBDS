/**
 * @file  MC/DisplayNameItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DisplayNameItemComponent.
 *
 */
class DisplayNameItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPLAYNAMEITEMCOMPONENT
public:
    class DisplayNameItemComponent& operator=(class DisplayNameItemComponent const &) = delete;
    DisplayNameItemComponent(class DisplayNameItemComponent const &) = delete;
    DisplayNameItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DisplayNameItemComponent();
    /**
     * @hash   -141697516
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VDisplayNameItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -979850378
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VDisplayNameItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   645664186
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VDisplayNameItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1992017698
     * @symbol ?getDescriptionId@DisplayNameItemComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @hash   923837299
     * @symbol ?bindType@DisplayNameItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -197859730
     * @symbol ?getIdentifier@DisplayNameItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};