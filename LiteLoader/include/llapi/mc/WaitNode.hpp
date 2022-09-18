/**
 * @file  WaitNode.hpp
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
 * @brief MC class WaitNode.
 *
 */
class WaitNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITNODE
public:
    class WaitNode& operator=(class WaitNode const &) = delete;
    WaitNode(class WaitNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1365210399
     */
    virtual ~WaitNode();
    /**
     * @vftbl  1
     * @symbol ?tick@WaitNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   595806212
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@WaitNode@@EEAAXAEAVActor@@@Z
     * @hash   53679016
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0WaitNode@@QEAA@XZ
     * @hash   -1211915901
     */
    MCAPI WaitNode();

};