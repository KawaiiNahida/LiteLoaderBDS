/**
 * @file  CraftHandlerEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerEnchant.
 *
 */
class CraftHandlerEnchant : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERENCHANT
public:
    class CraftHandlerEnchant& operator=(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1474735037
     */
    virtual ~CraftHandlerEnchant();
    /**
     * @vftbl  3
     * @symbol ?endRequestBatch@CraftHandlerEnchant@@MEAAXXZ
     * @hash   2008081703
     */
    virtual void endRequestBatch();
    /**
     * @vftbl  4
     * @symbol ?_handleCraftAction@CraftHandlerEnchant@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     * @hash   796514675
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl  5
     * @symbol ?_postCraftRequest@CraftHandlerEnchant@@MEAAX_N@Z
     * @hash   1844279197
     */
    virtual void _postCraftRequest(bool);
    /**
     * @symbol ??0CraftHandlerEnchant@@QEAA@AEAVPlayer@@AEAVItemStackRequestActionCraftHandler@@@Z
     * @hash   -1211321443
     */
    MCAPI CraftHandlerEnchant(class Player &, class ItemStackRequestActionCraftHandler &);

//private:
    /**
     * @symbol ?_getEnchantingModel@CraftHandlerEnchant@@AEBAAEAVEnchantingContainerManagerModel@@XZ
     * @hash   1073533219
     */
    MCAPI class EnchantingContainerManagerModel & _getEnchantingModel() const;
    /**
     * @symbol ?_handleEnchant@CraftHandlerEnchant@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
     * @hash   -1846484308
     */
    MCAPI enum class ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);

private:

};