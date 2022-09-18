/**
 * @file  ArmorStand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorStand.
 *
 */
class ArmorStand : public Mob {

#define AFTER_EXTRA
// Add Member There
public:
struct Pose {
    Pose() = delete;
    Pose(Pose const&) = delete;
    Pose(Pose const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTAND
public:
    class ArmorStand& operator=(class ArmorStand const &) = delete;
    ArmorStand(class ArmorStand const &) = delete;
    ArmorStand() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   -215274463
     */
    virtual ~ArmorStand();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol ?normalTick@ArmorStand@@UEAAXXZ
     * @hash   735285492
     */
    virtual void normalTick();
    /**
     * @vftbl  61
     * @hash   -198636769
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  80
     * @symbol ?getShadowRadius@ArmorStand@@UEBAMXZ
     * @hash   999945215
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
     * @hash   -134913820
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  95
     * @symbol ?isPickable@ArmorStand@@UEAA_NXZ
     * @hash   -1259537225
     */
    virtual bool isPickable();
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
     * @vftbl  135
     * @symbol ?isInvulnerableTo@ArmorStand@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   -1314713675
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
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
     * @vftbl  238
     * @symbol ?getInteraction@ArmorStand@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
     * @hash   -811658288
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
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
     * @vftbl  253
     * @symbol ?die@ArmorStand@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   -14235142
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  267
     * @symbol ?updateEntitySpecificMolangVariables@ArmorStand@@UEAAXAEAVRenderParams@@@Z
     * @hash   -365023521
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  270
     * @symbol ?_hurt@ArmorStand@@UEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   7501504
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  273
     * @symbol ?readAdditionalSaveData@ArmorStand@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1250126848
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  274
     * @symbol ?addAdditionalSaveData@ArmorStand@@UEBAXAEAVCompoundTag@@@Z
     * @hash   855608253
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
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
     * @vftbl  302
     * @symbol ?pushActors@ArmorStand@@UEAAXXZ
     * @hash   199930008
     */
    virtual void pushActors();
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    /**
     * @symbol ?interactPreventDefault@ArmorStand@@UEAA_NXZ
     * @hash   1573520353
     */
    MCVAPI bool interactPreventDefault();
#endif
    /**
     * @symbol ??0ArmorStand@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1549166659
     */
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?setPoseIndex@ArmorStand@@QEAAXH@Z
     * @hash   -2072453674
     */
    MCAPI void setPoseIndex(int);

//private:
    /**
     * @symbol ?_causeDamage@ArmorStand@@AEAAXM@Z
     * @hash   -528048812
     */
    MCAPI void _causeDamage(float);
    /**
     * @symbol ?_destroyWithEffects@ArmorStand@@AEAAXAEBVVec3@@@Z
     * @hash   -1760488076
     */
    MCAPI void _destroyWithEffects(class Vec3 const &);
    /**
     * @symbol ?_dropHeldItems@ArmorStand@@AEAAXXZ
     * @hash   -1821759934
     */
    MCAPI void _dropHeldItems();
    /**
     * @symbol ?_dropHeldItemsAndResource@ArmorStand@@AEAAXXZ
     * @hash   551779341
     */
    MCAPI void _dropHeldItemsAndResource();
    /**
     * @symbol ?_dropItem@ArmorStand@@AEAAXAEBVItemStack@@@Z
     * @hash   -571605890
     */
    MCAPI void _dropItem(class ItemStack const &);
    /**
     * @symbol ?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z
     * @hash   111112580
     */
    MCAPI bool _trySwapItem(class Player &, enum class EquipmentSlot);

private:
    /**
     * @symbol ?POSE_ATHENA@ArmorStand@@0UPose@1@B
     * @hash   552815583
     */
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    /**
     * @symbol ?POSE_BRANDISH@ArmorStand@@0UPose@1@B
     * @hash   684109235
     */
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    /**
     * @symbol ?POSE_CANCAN_A@ArmorStand@@0UPose@1@B
     * @hash   -601377986
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    /**
     * @symbol ?POSE_CANCAN_B@ArmorStand@@0UPose@1@B
     * @hash   1550388991
     */
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    /**
     * @symbol ?POSE_DEFAULT@ArmorStand@@0UPose@1@B
     * @hash   -598430559
     */
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    /**
     * @symbol ?POSE_ENTERTAIN@ArmorStand@@0UPose@1@B
     * @hash   -1434592854
     */
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    /**
     * @symbol ?POSE_HERO@ArmorStand@@0UPose@1@B
     * @hash   796021302
     */
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    /**
     * @symbol ?POSE_HONOR@ArmorStand@@0UPose@1@B
     * @hash   359851914
     */
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    /**
     * @symbol ?POSE_RIPOSTE@ArmorStand@@0UPose@1@B
     * @hash   1314695470
     */
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    /**
     * @symbol ?POSE_SALUTE@ArmorStand@@0UPose@1@B
     * @hash   -923996892
     */
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    /**
     * @symbol ?POSE_SOLEMN@ArmorStand@@0UPose@1@B
     * @hash   493955762
     */
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    /**
     * @symbol ?POSE_ZERO_ROTATION@ArmorStand@@0UPose@1@B
     * @hash   -1240981483
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    /**
     * @symbol ?POSE_ZOMBIE@ArmorStand@@0UPose@1@B
     * @hash   -1845689278
     */
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
    /**
     * @symbol ?STAND_POSES@ArmorStand@@0PAPEBUPose@1@A
     * @hash   -1563150078
     */
    MCAPI static struct ArmorStand::Pose const * STAND_POSES[];

};