/**
 * @file  MC/ActorIsVariantTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorIsVariantTest.
 *
 */
class ActorIsVariantTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISVARIANTTEST
public:
    class ActorIsVariantTest& operator=(class ActorIsVariantTest const &) = delete;
    ActorIsVariantTest(class ActorIsVariantTest const &) = delete;
    ActorIsVariantTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorIsVariantTest();
    /**
     * @hash   -806824214
     * @vftbl  2
     * @symbol ?evaluate@ActorIsVariantTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   726063544
     * @vftbl  4
     * @symbol ?getName@ActorIsVariantTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};