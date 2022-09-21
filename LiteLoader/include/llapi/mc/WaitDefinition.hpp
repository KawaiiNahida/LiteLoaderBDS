/**
 * @file  MC/WaitDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaitDefinition.
 *
 */
class WaitDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITDEFINITION
public:
    class WaitDefinition& operator=(class WaitDefinition const &) = delete;
    WaitDefinition(class WaitDefinition const &) = delete;
    WaitDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WaitDefinition();
    /**
     * @hash   89559500
     * @vftbl  1
     * @symbol ?load@WaitDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};