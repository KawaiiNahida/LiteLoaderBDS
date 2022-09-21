/**
 * @file  MC/StrengthDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StrengthDescription.
 *
 */
class StrengthDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRENGTHDESCRIPTION
public:
    class StrengthDescription& operator=(class StrengthDescription const &) = delete;
    StrengthDescription(class StrengthDescription const &) = delete;
    StrengthDescription() = delete;
#endif

public:
    /**
     * @hash   1221771257
     * @vftbl  0
     * @symbol ?getJsonName@StrengthDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~StrengthDescription();
    /**
     * @hash   441221290
     * @vftbl  2
     * @symbol ?deserializeData@StrengthDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1852179052
     * @vftbl  3
     * @symbol ?serializeData@StrengthDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};