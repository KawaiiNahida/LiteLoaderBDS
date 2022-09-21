/**
 * @file  MC/ButtonBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ButtonBlock.
 *
 */
class ButtonBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUTTONBLOCK
public:
    class ButtonBlock& operator=(class ButtonBlock const &) = delete;
    ButtonBlock(class ButtonBlock const &) = delete;
    ButtonBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ButtonBlock();
    /**
     * @hash   1258355297
     * @vftbl  5
     * @symbol ?getCollisionShape@ButtonBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @hash   -2053623542
     * @vftbl  51
     * @symbol ?isSignalSource@ButtonBlock@@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -540313052
     * @vftbl  63
     * @symbol ?shouldConnectToRedstone@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   1103766735
     * @vftbl  68
     * @symbol ?checkIsPathable@ButtonBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   110854266
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   147160957
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -1585209082
     * @vftbl  90
     * @symbol ?mayPlace@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -517172891
     * @vftbl  91
     * @symbol ?mayPlace@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1604261613
     * @vftbl  99
     * @symbol ?neighborChanged@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -345259927
     * @vftbl  102
     * @symbol ?getResourceItem@ButtonBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   2003189662
     * @vftbl  103
     * @symbol ?asItemInstance@ButtonBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   1045728074
     * @vftbl  107
     * @symbol ?getPlacementBlock@ButtonBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   -1404580337
     * @vftbl  109
     * @symbol ?isAttachedTo@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     */
    virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   1176829797
     * @vftbl  114
     * @symbol ?entityInside@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -53186139
     * @vftbl  144
     * @symbol ?getVisualShape@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @hash   609992961
     * @vftbl  145
     * @symbol ?getUIShape@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
     */
    virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /**
     * @hash   1020810443
     * @vftbl  147
     * @symbol ?getVariant@ButtonBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   1045362713
     * @vftbl  171
     * @symbol ?onPlace@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -534908127
     * @vftbl  174
     * @symbol ?tick@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   815229680
     * @vftbl  179
     * @symbol ?use@ButtonBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUTTONBLOCK
    /**
     * @hash   -362796249
     * @symbol ?canSpawnOn@ButtonBlock@@UEBA_NXZ
     */
    MCVAPI bool canSpawnOn() const;
    /**
     * @hash   -1015628402
     * @symbol ?isButtonBlock@ButtonBlock@@UEBA_NXZ
     */
    MCVAPI bool isButtonBlock() const;
    /**
     * @hash   1260425970
     * @symbol ?isInteractiveBlock@ButtonBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   372630608
     * @symbol ?buttonPressed@ButtonBlock@@QEBAXAEAVBlockSource@@AEBVBlock@@AEBVVec3@@PEAVActor@@@Z
     */
    MCAPI void buttonPressed(class BlockSource &, class Block const &, class Vec3 const &, class Actor *) const;
    /**
     * @hash   450784140
     * @symbol ?canAttachTo@ButtonBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI static bool canAttachTo(class BlockSource &, class BlockPos const &, unsigned char);

//protected:
    /**
     * @hash   467104680
     * @symbol ??0ButtonBlock@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_N@Z
     */
    MCAPI ButtonBlock(std::string const &, int, class Material const &, bool);

//private:
    /**
     * @hash   194280633
     * @symbol ?_buttonUnpressed@ButtonBlock@@AEBAXAEAVBlockSource@@AEBVBlock@@AEBVVec3@@PEAVActor@@@Z
     */
    MCAPI void _buttonUnpressed(class BlockSource &, class Block const &, class Vec3 const &, class Actor *) const;
    /**
     * @hash   958265751
     * @symbol ?_checkPressed@ButtonBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _checkPressed(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1351986535
     * @symbol ?_getShape@ButtonBlock@@AEBAXAEAVAABB@@_NE1@Z
     */
    MCAPI void _getShape(class AABB &, bool, unsigned char, bool) const;

protected:

private:

};