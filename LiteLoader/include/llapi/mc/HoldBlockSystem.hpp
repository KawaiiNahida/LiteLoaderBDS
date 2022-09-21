/**
 * @file  MC/HoldBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HoldBlockSystem.
 *
 */
class HoldBlockSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOLDBLOCKSYSTEM
public:
    class HoldBlockSystem& operator=(class HoldBlockSystem const &) = delete;
    HoldBlockSystem(class HoldBlockSystem const &) = delete;
    HoldBlockSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~HoldBlockSystem();
    /**
     * @hash   -1548772055
     * @vftbl  1
     * @symbol ?registerEvents@HoldBlockSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
     */
    virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
    /**
     * @hash   -1976326067
     * @vftbl  2
     * @symbol ?tick@HoldBlockSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @hash   2126140841
     * @symbol ?_holdBlockSystemOnActorDie@HoldBlockSystem@@CAXAEAUActorDieEvent@@@Z
     */
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent &);

private:

};