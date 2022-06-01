// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Throwable.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Snowball : public Throwable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNOWBALL
public:
    class Snowball& operator=(class Snowball const &) = delete;
    Snowball(class Snowball const &) = delete;
    Snowball() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Snowball();
    /*16*/ virtual void __unk_vfn_16();
    /*20*/ virtual void __unk_vfn_20();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*40*/ virtual void __unk_vfn_40();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual void __unk_vfn_78();
    /*79*/ virtual float getShadowHeightOffs();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*94*/ virtual bool isPickable();
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
    /*136*/ virtual void __unk_vfn_136();
    /*139*/ virtual void __unk_vfn_139();
    /*142*/ virtual float getPickRadius();
    /*151*/ virtual void __unk_vfn_151();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*159*/ virtual void __unk_vfn_159();
    /*170*/ virtual class HashedString const & queryEntityRenderer() const;
    /*173*/ virtual void __unk_vfn_173();
    /*178*/ virtual void __unk_vfn_178();
    /*180*/ virtual bool canChangeDimensions() const;
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
    /*237*/ virtual void __unk_vfn_237();
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void __unk_vfn_244();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void __unk_vfn_259();
    /*261*/ virtual void __unk_vfn_261();
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void __unk_vfn_277();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*281*/ virtual float getThrowUpAngleOffset();
    /*283*/ virtual enum ParticleType getParticleType();
    MCAPI Snowball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

protected:

private:

};