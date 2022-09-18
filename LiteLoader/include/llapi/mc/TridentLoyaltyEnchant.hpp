/**
 * @file  TridentLoyaltyEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TridentLoyaltyEnchant.
 *
 */
class TridentLoyaltyEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTLOYALTYENCHANT
public:
    class TridentLoyaltyEnchant& operator=(class TridentLoyaltyEnchant const &) = delete;
    TridentLoyaltyEnchant(class TridentLoyaltyEnchant const &) = delete;
    TridentLoyaltyEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   921704531
     */
    virtual ~TridentLoyaltyEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@TridentLoyaltyEnchant@@UEBAHH@Z
     * @hash   -1179131394
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@TridentLoyaltyEnchant@@UEBAHH@Z
     * @hash   1981711788
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@TridentLoyaltyEnchant@@UEBAHXZ
     * @hash   -1094650932
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -342706045
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -334124315
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -333200794
     */
    virtual void __unk_vfn_13();
    /**
     * @symbol ??0TridentLoyaltyEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2H_NH@Z
     * @hash   -1069328763
     */
    MCAPI TridentLoyaltyEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, bool, int);

};