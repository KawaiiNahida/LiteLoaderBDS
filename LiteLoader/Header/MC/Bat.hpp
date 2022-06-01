// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Bat : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BAT
public:
    class Bat& operator=(class Bat const &) = delete;
    Bat(class Bat const &) = delete;
    Bat() = delete;
#endif

public:
    /*14*/ virtual ~Bat();
    /*16*/ virtual void __unk_vfn_16();
    /*20*/ virtual void __unk_vfn_20();
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual void __unk_vfn_78();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*101*/ virtual void __unk_vfn_101();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual void __unk_vfn_114();
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void __unk_vfn_130();
    /*139*/ virtual void __unk_vfn_139();
    /*142*/ virtual float getPickRadius();
    /*151*/ virtual void __unk_vfn_151();
    /*170*/ virtual class HashedString const & queryEntityRenderer() const;
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*178*/ virtual void __unk_vfn_178();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*184*/ virtual void checkFallDamage(float, bool);
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual void __unk_vfn_198();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*227*/ virtual float getYHeadRotO() const;
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual void __unk_vfn_229();
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual void __unk_vfn_231();
    /*232*/ virtual void __unk_vfn_232();
    /*237*/ virtual void __unk_vfn_237();
    /*238*/ virtual void __unk_vfn_238();
    /*244*/ virtual void __unk_vfn_244();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*296*/ virtual void pushActors();
    /*302*/ virtual int getItemUseDuration() const;
    /*303*/ virtual void __unk_vfn_303();
    /*304*/ virtual void __unk_vfn_304();
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void __unk_vfn_321();
    /*338*/ virtual void __unk_vfn_338();
    /*342*/ virtual int getAttackTime();
    /*343*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*345*/ virtual void __unk_vfn_345();
    /*354*/ virtual void newServerAiStep();
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
    /*
    inline bool useNewAi() const{
        bool (Bat::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Bat@@MEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Bat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

protected:

private:

};