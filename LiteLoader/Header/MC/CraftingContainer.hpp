// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftingContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGCONTAINER
public:
    class CraftingContainer& operator=(class CraftingContainer const &) = delete;
    CraftingContainer(class CraftingContainer const &) = delete;
    CraftingContainer() = delete;
#endif

public:
    /*0*/ virtual ~CraftingContainer();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /*5*/ virtual class ItemStack const & getItem(int) const;
    /*9*/ virtual void setItem(int, class ItemStack const &);
    /*10*/ virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /*14*/ virtual int getContainerSize() const;
    /*15*/ virtual int getMaxStackSize() const;
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void setContainerChanged(int);
    /*31*/ virtual void __unk_vfn_31();
    /*
    inline void startOpen(class Player & a0){
        void (CraftingContainer::*rv)(class Player &);
        *((void**)&rv) = dlsym("?startOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void stopOpen(class Player & a0){
        void (CraftingContainer::*rv)(class Player &);
        *((void**)&rv) = dlsym("?stopOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    */
    MCAPI CraftingContainer(int, int);
    MCAPI class ItemStack const & getItem(int, int) const;

protected:

private:

};