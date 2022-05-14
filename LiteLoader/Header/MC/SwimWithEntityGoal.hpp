// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SwimWithEntityGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYGOAL
public:
    class SwimWithEntityGoal& operator=(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal() = delete;
#endif

public:
    /*0*/ virtual ~SwimWithEntityGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*
    inline bool canBeInterrupted(){
        bool (SwimWithEntityGoal::*rv)();
        *((void**)&rv) = dlsym("?canBeInterrupted@SwimWithEntityGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (SwimWithEntityGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@SwimWithEntityGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI SwimWithEntityGoal(class Mob &);

protected:

private:
    MCAPI bool _setWantedMob();

};