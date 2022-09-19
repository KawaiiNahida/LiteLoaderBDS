/**
 * @file  PotionBrewing.hpp
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
 * @brief MC class PotionBrewing.
 *
 */
class PotionBrewing {

#define AFTER_EXTRA
// Add Member There
public:
class Ingredient {
public:
    Ingredient() = delete;
    Ingredient(Ingredient const&) = delete;
    Ingredient(Ingredient const&&) = delete;
};
template <typename T0>
class Mix {
public:
    Mix() = delete;
    Mix(Mix const&) = delete;
    Mix(Mix const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTIONBREWING
public:
    class PotionBrewing& operator=(class PotionBrewing const &) = delete;
    PotionBrewing(class PotionBrewing const &) = delete;
    PotionBrewing() = delete;
#endif

public:
    /**
     * @symbol ?addContainerRecipe@PotionBrewing@@SAXAEBVItem@@AEBVIngredient@1@0@Z
     * @hash   1948228727
     */
    MCAPI static void addContainerRecipe(class Item const &, class PotionBrewing::Ingredient const &, class Item const &);
    /**
     * @symbol ?addPotionMix@PotionBrewing@@SAXAEBVItemDescriptor@@AEBVIngredient@1@0@Z
     * @hash   1283367418
     */
    MCAPI static void addPotionMix(class ItemDescriptor const &, class PotionBrewing::Ingredient const &, class ItemDescriptor const &);
    /**
     * @symbol ?getFuelValue@PotionBrewing@@SAHAEBVItemDescriptor@@@Z
     * @hash   791147427
     */
    MCAPI static int getFuelValue(class ItemDescriptor const &);
    /**
     * @symbol ?hasMix@PotionBrewing@@SA_NAEBVItemInstance@@AEBVItemDescriptor@@@Z
     * @hash   2055883956
     */
    MCAPI static bool hasMix(class ItemInstance const &, class ItemDescriptor const &);
    /**
     * @symbol ?initPotionBrewing@PotionBrewing@@SAXXZ
     * @hash   -1351817059
     */
    MCAPI static void initPotionBrewing();
    /**
     * @symbol ?isFuel@PotionBrewing@@SA_NAEBVItemDescriptor@@@Z
     * @hash   -2040255085
     */
    MCAPI static bool isFuel(class ItemDescriptor const &);
    /**
     * @symbol ?isIngredient@PotionBrewing@@SA_NAEBVItemDescriptor@@@Z
     * @hash   -242001331
     */
    MCAPI static bool isIngredient(class ItemDescriptor const &);
    /**
     * @symbol ?isPotionRecipeInput@PotionBrewing@@SA_NAEBVItemDescriptor@@@Z
     * @hash   971753923
     */
    MCAPI static bool isPotionRecipeInput(class ItemDescriptor const &);
    /**
     * @symbol ?mix@PotionBrewing@@SA?AVItemInstance@@AEBVItemDescriptor@@AEBV2@@Z
     * @hash   -1713189894
     */
    MCAPI static class ItemInstance mix(class ItemDescriptor const &, class ItemInstance const &);
    /**
     * @symbol ?shutdown@PotionBrewing@@SAXXZ
     * @hash   1995672669
     */
    MCAPI static void shutdown();

//private:
    /**
     * @symbol ?addChemistryMix@PotionBrewing@@CAXAEBVItemInstance@@AEBVIngredient@1@0@Z
     * @hash   1110540623
     */
    MCAPI static void addChemistryMix(class ItemInstance const &, class PotionBrewing::Ingredient const &, class ItemInstance const &);
    /**
     * @symbol ?getChemistryMix@PotionBrewing@@CA?AVItemInstance@@AEBVItemDescriptor@@0@Z
     * @hash   254053426
     */
    MCAPI static class ItemInstance getChemistryMix(class ItemDescriptor const &, class ItemDescriptor const &);

private:
    /**
     * @symbol ?mChemistryMixes@PotionBrewing@@0V?$vector@V?$Mix@VItemInstance@@@PotionBrewing@@V?$allocator@V?$Mix@VItemInstance@@@PotionBrewing@@@std@@@std@@A
     * @hash   -1606596213
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemInstance>> mChemistryMixes;
    /**
     * @symbol ?mContainerMixes@PotionBrewing@@0V?$vector@V?$Mix@AEBVItem@@@PotionBrewing@@V?$allocator@V?$Mix@AEBVItem@@@PotionBrewing@@@std@@@std@@A
     * @hash   -1134008298
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class Item const &>> mContainerMixes;
    /**
     * @symbol ?mPotionMixes@PotionBrewing@@0V?$vector@V?$Mix@VItemDescriptor@@@PotionBrewing@@V?$allocator@V?$Mix@VItemDescriptor@@@PotionBrewing@@@std@@@std@@A
     * @hash   643661618
     */
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemDescriptor>> mPotionMixes;
    /**
     * @symbol ?mValidContainers@PotionBrewing@@0V?$vector@VIngredient@PotionBrewing@@V?$allocator@VIngredient@PotionBrewing@@@std@@@std@@A
     * @hash   1388834741
     */
    MCAPI static std::vector<class PotionBrewing::Ingredient> mValidContainers;
    /**
     * @symbol ?mValidIngredients@PotionBrewing@@0V?$unordered_set@VIngredient@PotionBrewing@@U?$hash@VIngredient@PotionBrewing@@@std@@U?$equal_to@VIngredient@PotionBrewing@@@4@V?$allocator@VIngredient@PotionBrewing@@@4@@std@@A
     * @hash   -755659755
     */
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidIngredients;
    /**
     * @symbol ?mValidRecipeInputs@PotionBrewing@@0V?$unordered_set@VIngredient@PotionBrewing@@U?$hash@VIngredient@PotionBrewing@@@std@@U?$equal_to@VIngredient@PotionBrewing@@@4@V?$allocator@VIngredient@PotionBrewing@@@4@@std@@A
     * @hash   -491790968
     */
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidRecipeInputs;

};