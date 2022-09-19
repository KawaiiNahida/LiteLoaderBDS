/**
 * @file  Spider.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Spider.
 *
 */
class Spider : public Monster {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIDER
public:
    class Spider& operator=(class Spider const &) = delete;
    Spider(class Spider const &) = delete;
    Spider() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   -325965521
     */
    virtual ~Spider();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol ?normalTick@Spider@@UEAAXXZ
     * @hash   -789411898
     */
    virtual void normalTick();
    /**
     * @vftbl  61
     * @hash   -191902081
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  76
     * @symbol ?setBlockMovementSlowdownMultiplier@Spider@@UEAAXAEBVBlockLegacy@@AEBVVec3@@@Z
     * @hash   -884463169
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @vftbl  80
     * @symbol ?getShadowRadius@Spider@@UEBAMXZ
     * @hash   48360337
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -105361148
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  132
     * @symbol ?shouldRender@Spider@@UEBA_NXZ
     * @hash   520264540
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  212
     * @symbol ?canBeAffected@Spider@@UEBA_NAEBVMobEffectInstance@@@Z
     * @hash   261471911
     */
    virtual bool canBeAffected(class MobEffectInstance const &) const;
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  275
     * @symbol ?_playStepSound@Spider@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -467829603
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  300
     * @symbol ?aiStep@Spider@@UEAAXXZ
     * @hash   -1168794346
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @hash   -1210176411
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @hash   -1157463639
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @hash   -1055222849
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
    /**
     * @vftbl  368
     * @symbol ?getModelScale@Spider@@UEBAMXZ
     * @hash   -1535420048
     */
    virtual float getModelScale() const;
    /**
     * @vftbl  369
     * @symbol ?getSpiderType@Spider@@UEBA?AW4Type@1@XZ
     * @hash   1842029673
     */
    virtual enum class Spider::Type getSpiderType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPIDER
    /**
     * @symbol ?useNewAi@Spider@@UEBA_NXZ
     * @hash   -1523540012
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Spider@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   88736977
     */
    MCAPI Spider(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};