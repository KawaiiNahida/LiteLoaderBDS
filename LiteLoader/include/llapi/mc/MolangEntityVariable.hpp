/**
 * @file  MC/MolangEntityVariable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangEntityVariable.
 *
 */
struct MolangEntityVariable {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGENTITYVARIABLE
public:
    struct MolangEntityVariable& operator=(struct MolangEntityVariable const &) = delete;
    MolangEntityVariable(struct MolangEntityVariable const &) = delete;
    MolangEntityVariable() = delete;
#endif

public:
    /**
     * @hash   1210912260
     * @symbol ??0MolangEntityVariable@@QEAA@AEBVHashedString@@@Z
     */
    MCAPI MolangEntityVariable(class HashedString const &);
    /**
     * @hash   -663985607
     * @symbol ??1MolangEntityVariable@@QEAA@XZ
     */
    MCAPI ~MolangEntityVariable();

};