/**
 * @file  MC/LookAtBlockNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtBlockNode.
 *
 */
class LookAtBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATBLOCKNODE
public:
    class LookAtBlockNode& operator=(class LookAtBlockNode const &) = delete;
    LookAtBlockNode(class LookAtBlockNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LookAtBlockNode();
    /**
     * @hash   155087018
     * @vftbl  1
     * @symbol ?tick@LookAtBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @hash   -916417922
     * @vftbl  2
     * @symbol ?initializeFromDefinition@LookAtBlockNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   -21712455
     * @symbol ??0LookAtBlockNode@@QEAA@XZ
     */
    MCAPI LookAtBlockNode();

};