// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SimpleContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SimplePlayerContainer : public SimpleContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEPLAYERCONTAINER
public:
    class SimplePlayerContainer& operator=(class SimplePlayerContainer const &) = delete;
    SimplePlayerContainer(class SimplePlayerContainer const &) = delete;
    SimplePlayerContainer() = delete;
#endif

public:
    /*0*/ virtual ~SimplePlayerContainer();
    /*1*/ virtual void __unk_vfn_1();
    /*9*/ virtual void setItem(int, class ItemStack const &);
    /*10*/ virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /*15*/ virtual int getMaxStackSize() const;
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*31*/ virtual void __unk_vfn_31();
    MCAPI SimplePlayerContainer(class Player &, std::string const &, bool, int, enum ContainerType);

protected:

private:

};