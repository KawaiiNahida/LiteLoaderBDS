/**
 * @file  MC/InstantaneousMobEffect.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MobEffect.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InstantaneousMobEffect.
 *
 */
class InstantaneousMobEffect : public MobEffect {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTANEOUSMOBEFFECT
public:
    class InstantaneousMobEffect& operator=(class InstantaneousMobEffect const &) = delete;
    InstantaneousMobEffect(class InstantaneousMobEffect const &) = delete;
    InstantaneousMobEffect() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InstantaneousMobEffect();
    /**
     * @hash   -733021111
     * @vftbl  5
     * @symbol ?isInstantaneous@InstantaneousMobEffect@@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @hash   2144516153
     * @vftbl  7
     * @symbol ?isDurationEffectTick@InstantaneousMobEffect@@UEBA_NHH@Z
     */
    virtual bool isDurationEffectTick(int, int) const;
    /**
     * @hash   2099804478
     * @symbol ??0InstantaneousMobEffect@@QEAA@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH@Z
     */
    MCAPI InstantaneousMobEffect(int, std::string const &, std::string const &, bool, int, int);

};