/**
 * @file  MC/BoolOption.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Option.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoolOption.
 *
 */
class BoolOption : public Option {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOLOPTION
public:
    class BoolOption& operator=(class BoolOption const &) = delete;
    BoolOption(class BoolOption const &) = delete;
    BoolOption() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BoolOption();
    /**
     * @hash   1724875269
     * @vftbl  1
     * @symbol ?save@BoolOption@@UEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     */
    virtual void save(std::vector<struct std::pair<std::string, std::string>> &);
    /**
     * @hash   -2119908402
     * @vftbl  2
     * @symbol ?load@BoolOption@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void load(std::string const &);
    /**
     * @hash   -1083589907
     * @symbol ??0BoolOption@@QEAA@W4OptionID@@W4OptionOwnerType@@W4OptionResetFlags@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3_N@Z
     */
    MCAPI BoolOption(enum OptionID, enum OptionOwnerType, enum OptionResetFlags, std::string const &, std::string const &, bool);
    /**
     * @hash   -1446313162
     * @symbol ?getValue@BoolOption@@QEBA_NXZ
     */
    MCAPI bool getValue() const;
    /**
     * @hash   -508230230
     * @symbol ?set@BoolOption@@QEAAX_N0@Z
     */
    MCAPI void set(bool, bool);

//private:
    /**
     * @hash   -2085202432
     * @symbol ?_set@BoolOption@@AEAAX_N0@Z
     */
    MCAPI void _set(bool, bool);

private:

};