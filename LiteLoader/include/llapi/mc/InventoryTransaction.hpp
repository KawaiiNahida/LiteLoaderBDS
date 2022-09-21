/**
 * @file  MC/InventoryTransaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventoryTransactionItemGroup.hpp"
#include "InventoryAction.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryTransaction.
 *
 */
class InventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
    std::unordered_map<class InventorySource, std::vector<class InventoryAction>> actions; // 0x0
    std::vector<class InventoryTransactionItemGroup> items;                                // 0x40

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTION
public:
    class InventoryTransaction& operator=(class InventoryTransaction const &) = delete;
    InventoryTransaction() = delete;
#endif

public:
    /**
     * @hash   -1453322623
     * @symbol ??0InventoryTransaction@@QEAA@AEBV0@@Z
     */
    MCAPI InventoryTransaction(class InventoryTransaction const &);
    /**
     * @hash   -764185204
     * @symbol ?_logTransaction@InventoryTransaction@@QEBAX_N@Z
     */
    MCAPI void _logTransaction(bool) const;
    /**
     * @hash   -1145257218
     * @symbol ?addAction@InventoryTransaction@@QEAAXAEBVInventoryAction@@@Z
     */
    MCAPI void addAction(class InventoryAction const &);
    /**
     * @hash   197758036
     * @symbol ?executeFull@InventoryTransaction@@QEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     */
    MCAPI enum InventoryTransactionError executeFull(class Player &, bool) const;
    /**
     * @hash   1704957763
     * @symbol ?forceBalanceTransaction@InventoryTransaction@@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction();
    /**
     * @hash   -962121451
     * @symbol ?getActions@InventoryTransaction@@QEBAAEBV?$vector@VInventoryAction@@V?$allocator@VInventoryAction@@@std@@@std@@AEBVInventorySource@@@Z
     */
    MCAPI std::vector<class InventoryAction> const & getActions(class InventorySource const &) const;
    /**
     * @hash   -124287544
     * @symbol ?getVerifyFunction@InventoryTransaction@@QEBA?AV?$function@$$A6A?AW4InventoryTransactionError@@AEAVPlayer@@AEBVInventoryAction@@_N@Z@std@@AEBVInventorySource@@@Z
     */
    MCAPI class std::function<enum InventoryTransactionError (class Player &, class InventoryAction const &, bool)> getVerifyFunction(class InventorySource const &) const;
    /**
     * @hash   510248571
     * @symbol ?postLoadItems@InventoryTransaction@@QEAAXAEAVBlockPalette@@_N@Z
     */
    MCAPI void postLoadItems(class BlockPalette &, bool);
    /**
     * @hash   1412274521
     * @symbol ?serialize@InventoryTransaction@@QEBAXAEAVBinaryStream@@_N@Z
     */
    MCAPI void serialize(class BinaryStream &, bool) const;
    /**
     * @hash   387907058
     * @symbol ?verifyBalance@InventoryTransaction@@QEBA_NXZ
     */
    MCAPI bool verifyBalance() const;
    /**
     * @hash   1898689846
     * @symbol ?verifyFull@InventoryTransaction@@QEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     */
    MCAPI enum InventoryTransactionError verifyFull(class Player &, bool) const;
    /**
     * @hash   -1435214340
     * @symbol ??1InventoryTransaction@@QEAA@XZ
     */
    MCAPI ~InventoryTransaction();
    /**
     * @hash   -1034953198
     * @symbol ?deserialize@InventoryTransaction@@SA?AV1@AEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI static class InventoryTransaction deserialize(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1064515265
     * @symbol ?getInventoryTransactionErrorName@InventoryTransaction@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4InventoryTransactionError@@@Z
     */
    MCAPI static std::string const getInventoryTransactionErrorName(enum InventoryTransactionError);

//private:
    /**
     * @hash   1410789578
     * @symbol ?_dropCreatedItems@InventoryTransaction@@AEBAXAEAVPlayer@@@Z
     */
    MCAPI void _dropCreatedItems(class Player &) const;
    /**
     * @hash   1482341455
     * @symbol ?addItemToContent@InventoryTransaction@@AEAAXAEBVItemStack@@H@Z
     */
    MCAPI void addItemToContent(class ItemStack const &, int);

private:
    /**
     * @hash   -504977753
     * @symbol ?inventoryTransactionErrorMap@InventoryTransaction@@0V?$BidirectionalUnorderedMap@W4InventoryTransactionError@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum InventoryTransactionError, std::string> const inventoryTransactionErrorMap;

};