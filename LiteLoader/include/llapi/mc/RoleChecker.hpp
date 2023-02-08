/**
 * @file  RoleChecker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RoleChecker.
 *
 */
class RoleChecker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROLECHECKER
public:
    class RoleChecker& operator=(class RoleChecker const &) = delete;
    RoleChecker(class RoleChecker const &) = delete;
#endif

public:
    /**
     * @hash   -644971141
     * @symbol  ??0RoleChecker\@\@QEAA\@XZ
     */
    MCAPI RoleChecker();
    /**
     * @hash   -2112083319
     * @symbol  ?checkRole\@RoleChecker\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXW4ADRole\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z\@3\@\@Z
     */
    MCAPI void checkRole(std::string const &, class std::function<void (enum class ADRole, std::string const &, std::string const &)>);
    /**
     * @hash   -761861534
     * @symbol  ?lookupInProgress\@RoleChecker\@\@QEBA_NXZ
     */
    MCAPI bool lookupInProgress() const;
    /**
     * @hash   -842890949
     * @symbol  ??1RoleChecker\@\@QEAA\@XZ
     */
    MCAPI ~RoleChecker();

};