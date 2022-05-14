// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LecternBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LECTERNBLOCKACTOR
public:
    class LecternBlockActor& operator=(class LecternBlockActor const &) = delete;
    LecternBlockActor(class LecternBlockActor const &) = delete;
    LecternBlockActor() = delete;
#endif

public:
    /*
    inline void stopOpen(class Player & a0){
        void (LecternBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?stopOpen@LecternBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void startOpen(class Player & a0){
        void (LecternBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?startOpen@LecternBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline int getContainerSize() const{
        int (LecternBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerSize@LecternBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource & a0){
        std::unique_ptr<class BlockActorDataPacket> (LecternBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?_getUpdatePacket@LecternBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline int getMaxStackSize() const{
        int (LecternBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@LecternBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline class ItemStack const & getItem(int a0) const{
        class ItemStack const & (LecternBlockActor::*rv)(int) const;
        *((void**)&rv) = dlsym("?getItem@LecternBlockActor@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline class Container * getContainer(){
        class Container * (LecternBlockActor::*rv)();
        *((void**)&rv) = dlsym("?getContainer@LecternBlockActor@@UEAAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline class Container const * getContainer() const{
        class Container const * (LecternBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainer@LecternBlockActor@@UEBAPEBVContainer@@XZ");
        return (this->*rv)();
    }
    inline void _onUpdatePacket(class CompoundTag const & a0, class BlockSource & a1){
        void (LecternBlockActor::*rv)(class CompoundTag const &, class BlockSource &);
        *((void**)&rv) = dlsym("?_onUpdatePacket@LecternBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const &>(a0), std::forward<class BlockSource &>(a1));
    }
    inline void load(class Level & a0, class CompoundTag const & a1, class DataLoadHelper & a2){
        void (LecternBlockActor::*rv)(class Level &, class CompoundTag const &, class DataLoadHelper &);
        *((void**)&rv) = dlsym("?load@LecternBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level &>(a0), std::forward<class CompoundTag const &>(a1), std::forward<class DataLoadHelper &>(a2));
    }
    inline void onChanged(class BlockSource & a0){
        void (LecternBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?onChanged@LecternBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline bool save(class CompoundTag & a0) const{
        bool (LecternBlockActor::*rv)(class CompoundTag &) const;
        *((void**)&rv) = dlsym("?save@LecternBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag &>(a0));
    }
    inline void serverInitItemStackIds(int a0, int a1, class std::function<void (int, class ItemStack const &)> a2){
        void (LecternBlockActor::*rv)(int, int, class std::function<void (int, class ItemStack const &)>);
        *((void**)&rv) = dlsym("?serverInitItemStackIds@LecternBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1), std::forward<class std::function<void (int, class ItemStack const &)>>(a2));
    }
    inline void setItem(int a0, class ItemStack const & a1){
        void (LecternBlockActor::*rv)(int, class ItemStack const &);
        *((void**)&rv) = dlsym("?setItem@LecternBlockActor@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const &>(a1));
    }
    */
    MCAPI LecternBlockActor(class BlockPos const &);
    MCAPI void dropBook(class BlockSource &);
    MCAPI int getPage() const;
    MCAPI int getTotalPages() const;
    MCAPI bool hasBook() const;
    MCAPI void setItemFromBlock(int, class ItemStack const &);
    MCAPI void setPageOnServer(int, class BlockSource &);
    MCAPI void setTotalPages(int);

protected:

private:

};