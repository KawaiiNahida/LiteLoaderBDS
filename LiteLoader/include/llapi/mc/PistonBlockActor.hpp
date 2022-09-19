/**
 * @file  PistonBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PistonBlockActor.
 *
 */
class PistonBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONBLOCKACTOR
public:
    class PistonBlockActor& operator=(class PistonBlockActor const &) = delete;
    PistonBlockActor(class PistonBlockActor const &) = delete;
    PistonBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1026819723
     */
    virtual ~PistonBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@PistonBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1312484168
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@PistonBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1604865751
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1208048561
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol ?onRemoved@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1068730653
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  27
     * @symbol ?getOwningPiston@PistonBlockActor@@UEAAPEAV1@AEAVBlockSource@@@Z
     * @hash   -1881284226
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl  28
     * @hash   -348972726
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -312330757
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -292013295
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  31
     * @symbol ?getDeletionDelayTimeSeconds@PistonBlockActor@@UEBAMXZ
     * @hash   1407010544
     */
    virtual float getDeletionDelayTimeSeconds() const;
    /**
     * @vftbl  32
     * @hash   -325884701
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -324961180
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -324037659
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?_getUpdatePacket@PistonBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1896198458
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@PistonBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   47569480
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0PistonBlockActor@@QEAA@AEBVBlockPos@@_N@Z
     * @hash   1216534825
     */
    MCAPI PistonBlockActor(class BlockPos const &, bool);
    /**
     * @symbol ?getAttachedBlocks@PistonBlockActor@@QEBAAEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@XZ
     * @hash   -532855872
     */
    MCAPI std::vector<class BlockPos> const & getAttachedBlocks() const;
    /**
     * @symbol ?getCorrectArmBlock@PistonBlockActor@@QEBAPEBVBlock@@XZ
     * @hash   970889861
     */
    MCAPI class Block const * getCorrectArmBlock() const;
    /**
     * @symbol ?getFacingDir@PistonBlockActor@@QEBAAEBVBlockPos@@AEBVIConstBlockSource@@@Z
     * @hash   1205476931
     */
    MCAPI class BlockPos const & getFacingDir(class IConstBlockSource const &) const;
    /**
     * @symbol ?getProgress@PistonBlockActor@@QEBAMM@Z
     * @hash   -1965539181
     */
    MCAPI float getProgress(float) const;
    /**
     * @symbol ?isExpanded@PistonBlockActor@@QEBA_NXZ
     * @hash   -1298231934
     */
    MCAPI bool isExpanded() const;
    /**
     * @symbol ?isExpanding@PistonBlockActor@@QEBA_NXZ
     * @hash   -1349625478
     */
    MCAPI bool isExpanding() const;
    /**
     * @symbol ?isMoving@PistonBlockActor@@QEBA_NXZ
     * @hash   -871912036
     */
    MCAPI bool isMoving() const;
    /**
     * @symbol ?isRetracted@PistonBlockActor@@QEBA_NXZ
     * @hash   -1901350326
     */
    MCAPI bool isRetracted() const;
    /**
     * @symbol ?isRetracting@PistonBlockActor@@QEBA_NXZ
     * @hash   1426695730
     */
    MCAPI bool isRetracting() const;
    /**
     * @symbol ?moveEntityLastProgress@PistonBlockActor@@QEAAXAEAVActor@@VVec3@@@Z
     * @hash   534470433
     */
    MCAPI void moveEntityLastProgress(class Actor &, class Vec3);
    /**
     * @symbol ?setShouldVerifyArmType@PistonBlockActor@@QEAAX_N@Z
     * @hash   -245775056
     */
    MCAPI void setShouldVerifyArmType(bool);

//private:
    /**
     * @symbol ?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
     * @hash   437245379
     */
    MCAPI bool _attachedBlockWalker(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @symbol ?_checkAttachedBlocks@PistonBlockActor@@AEAA_NAEAVBlockSource@@@Z
     * @hash   2008528668
     */
    MCAPI bool _checkAttachedBlocks(class BlockSource &);
    /**
     * @symbol ?_checkInceptionAchievement@PistonBlockActor@@AEAAXAEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   51798428
     */
    MCAPI void _checkInceptionAchievement(class BlockActor &, class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_handleSlimeConnections@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
     * @hash   187142855
     */
    MCAPI bool _handleSlimeConnections(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @symbol ?_hasBlockAttached@PistonBlockActor@@AEAA_NAEBVBlockPos@@@Z
     * @hash   -1589500233
     */
    MCAPI bool _hasBlockAttached(class BlockPos const &);
    /**
     * @symbol ?_moveCollidedEntities@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   703317554
     */
    MCAPI void _moveCollidedEntities(class BlockSource &);
    /**
     * @symbol ?_moveCollidedEntitiesHelper@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVAABB@@AEBVBlockPos@@PEAVActor@@I@Z
     * @hash   -1500657276
     */
    MCAPI void _moveCollidedEntitiesHelper(class BlockSource &, class AABB const &, class BlockPos const &, class Actor *, unsigned int);
    /**
     * @symbol ?_sortAttachedBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   -99307438
     */
    MCAPI void _sortAttachedBlocks(class BlockSource &);
    /**
     * @symbol ?_spawnBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   773601319
     */
    MCAPI void _spawnBlocks(class BlockSource &);
    /**
     * @symbol ?_spawnMovingBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   7804217
     */
    MCAPI void _spawnMovingBlocks(class BlockSource &);

private:
    /**
     * @symbol ?ARM_ANIMATION_SPEED@PistonBlockActor@@0MB
     * @hash   166299731
     */
    MCAPI static float const ARM_ANIMATION_SPEED;

};