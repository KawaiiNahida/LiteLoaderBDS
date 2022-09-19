/**
 * @file  ItemEventListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemEventListener.
 *
 */
class ItemEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTLISTENER
public:
    class ItemEventListener& operator=(class ItemEventListener const &) = delete;
    ItemEventListener(class ItemEventListener const &) = delete;
    ItemEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMEVENTLISTENER
    /**
     * @symbol ?onEvent@ItemEventListener@@UEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z
     * @hash   -675411360
     */
    MCVAPI enum class EventResult onEvent(struct ItemNotificationEvent const &);
    /**
     * @symbol ?onInventoryItemClosed@ItemEventListener@@UEAA?AW4EventResult@@XZ
     * @hash   -348819279
     */
    MCVAPI enum class EventResult onInventoryItemClosed();
    /**
     * @symbol ?onInventoryItemCraftedAutomaticallyByRecipe@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
     * @hash   977026197
     */
    MCVAPI enum class EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const &);
    /**
     * @symbol ?onInventoryItemOpened@ItemEventListener@@UEAA?AW4EventResult@@_N@Z
     * @hash   53180894
     */
    MCVAPI enum class EventResult onInventoryItemOpened(bool);
    /**
     * @symbol ?onInventoryLayoutSelected@ItemEventListener@@UEAA?AW4EventResult@@HH@Z
     * @hash   -1867944169
     */
    MCVAPI enum class EventResult onInventoryLayoutSelected(int, int);
    /**
     * @symbol ?onItemDefinitionEventTriggered@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   47585504
     */
    MCVAPI enum class EventResult onItemDefinitionEventTriggered(class ItemStackBase const &, std::string const &);
    /**
     * @symbol ?onItemModifiedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
     * @hash   -275760320
     */
    MCVAPI enum class EventResult onItemModifiedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @symbol ?onItemSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
     * @hash   -1030823903
     */
    MCVAPI enum class EventResult onItemSelected(class ItemStackBase const &);
    /**
     * @symbol ?onItemSelectedSlot@ItemEventListener@@UEAA?AW4EventResult@@H@Z
     * @hash   1096183215
     */
    MCVAPI enum class EventResult onItemSelectedSlot(int);
    /**
     * @symbol ?onItemSmelted@ItemEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@1@Z
     * @hash   998996006
     */
    MCVAPI enum class EventResult onItemSmelted(class Player &, class ItemDescriptor const &, class ItemDescriptor const &);
    /**
     * @symbol ?onItemSpawnedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
     * @hash   -1428049389
     */
    MCVAPI enum class EventResult onItemSpawnedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @symbol ?onItemSpawningActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVActor@@@Z
     * @hash   -1006746973
     */
    MCVAPI enum class EventResult onItemSpawningActor(class Actor const &);
    /**
     * @symbol ?onItemTransferredFromContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -790379071
     */
    MCVAPI enum class EventResult onItemTransferredFromContainer(class ItemStackBase const &, std::string const &);
    /**
     * @symbol ?onItemTransferredToContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1020823536
     */
    MCVAPI enum class EventResult onItemTransferredToContainer(class ItemStackBase const &, std::string const &);
    /**
     * @symbol ?onPreviewItemPopulatedInContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1126550236
     */
    MCVAPI enum class EventResult onPreviewItemPopulatedInContainer(class ItemStackBase const &, std::string const &);
    /**
     * @symbol ?onRecipeSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
     * @hash   1807681702
     */
    MCVAPI enum class EventResult onRecipeSelected(class ItemStackBase const &);
#endif

};