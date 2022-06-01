// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HangingActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LeashFenceKnotActor : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHFENCEKNOTACTOR
public:
    class LeashFenceKnotActor& operator=(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~LeashFenceKnotActor();
    /*16*/ virtual void __unk_vfn_16();
    /*18*/ virtual void remove();
    /*20*/ virtual void __unk_vfn_20();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*40*/ virtual void __unk_vfn_40();
    /*43*/ virtual void teleportTo(class Vec3 const &, bool, int, int);
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual void __unk_vfn_78();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual void __unk_vfn_96();
    /*97*/ virtual void __unk_vfn_97();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual void __unk_vfn_113();
    /*114*/ virtual void __unk_vfn_114();
    /*120*/ virtual void __unk_vfn_120();
    /*121*/ virtual void __unk_vfn_121();
    /*128*/ virtual void __unk_vfn_128();
    /*130*/ virtual void __unk_vfn_130();
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*136*/ virtual void __unk_vfn_136();
    /*139*/ virtual void __unk_vfn_139();
    /*142*/ virtual float getPickRadius();
    /*151*/ virtual void __unk_vfn_151();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*159*/ virtual void __unk_vfn_159();
    /*170*/ virtual class HashedString const & queryEntityRenderer() const;
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*173*/ virtual void __unk_vfn_173();
    /*178*/ virtual void __unk_vfn_178();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual void __unk_vfn_183();
    /*192*/ virtual void __unk_vfn_192();
    /*193*/ virtual void __unk_vfn_193();
    /*194*/ virtual void __unk_vfn_194();
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual void __unk_vfn_198();
    /*202*/ virtual void __unk_vfn_202();
    /*207*/ virtual void __unk_vfn_207();
    /*218*/ virtual void __unk_vfn_218();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*225*/ virtual void __unk_vfn_225();
    /*226*/ virtual void __unk_vfn_226();
    /*227*/ virtual void __unk_vfn_227();
    /*228*/ virtual void __unk_vfn_228();
    /*229*/ virtual void __unk_vfn_229();
    /*230*/ virtual void __unk_vfn_230();
    /*231*/ virtual void __unk_vfn_231();
    /*232*/ virtual void __unk_vfn_232();
    /*236*/ virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /*237*/ virtual void __unk_vfn_237();
    /*238*/ virtual void __unk_vfn_238();
    /*239*/ virtual void setSize(float, float);
    /*244*/ virtual void __unk_vfn_244();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void __unk_vfn_259();
    /*261*/ virtual void __unk_vfn_261();
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void _onSizeUpdated();
    /*278*/ virtual void __unk_vfn_278();
    /*279*/ virtual void setDir(int);
    /*280*/ virtual void __unk_vfn_280();
    /*281*/ virtual void __unk_vfn_281();
    /*282*/ virtual void __unk_vfn_282();
    /*283*/ virtual void __unk_vfn_283();
    /*284*/ virtual bool wouldSurvive(class BlockSource &);
    /*
    inline bool isPickable(){
        bool (LeashFenceKnotActor::*rv)();
        *((void**)&rv) = dlsym("?isPickable@LeashFenceKnotActor@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void dropItem(){
        void (LeashFenceKnotActor::*rv)();
        *((void**)&rv) = dlsym("?dropItem@LeashFenceKnotActor@@UEAAXXZ");
        return (this->*rv)();
    }
    inline int getHeight() const{
        int (LeashFenceKnotActor::*rv)() const;
        *((void**)&rv) = dlsym("?getHeight@LeashFenceKnotActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getWidth() const{
        int (LeashFenceKnotActor::*rv)() const;
        *((void**)&rv) = dlsym("?getWidth@LeashFenceKnotActor@@UEBAHXZ");
        return (this->*rv)();
    }
    */
    MCAPI LeashFenceKnotActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int numberofAnimalsAttached();
    MCAPI void removeAnimals(class Player *);

protected:

private:

};