/**
 * @file  SeaPickle.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class SeaPickle.
 *
 */
class SeaPickle : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAPICKLE
public:
    class SeaPickle& operator=(class SeaPickle const &) = delete;
    SeaPickle(class SeaPickle const &) = delete;
    SeaPickle() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1159172137
     */
    virtual ~SeaPickle();
    /**
     * @vftbl  10
     * @symbol ?getAABB@SeaPickle@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   1629806265
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -334394356
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@SeaPickle@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -1771214648
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  59
     * @hash   -219877752
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol ?canContainLiquid@SeaPickle@@UEBA_NXZ
     * @hash   672322671
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  84
     * @symbol ?onFertilized@SeaPickle@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     * @hash   -858208579
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl  85
     * @symbol ?mayConsumeFertilizer@SeaPickle@@UEBA_NAEAVBlockSource@@@Z
     * @hash   -1223370374
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @vftbl  86
     * @symbol ?canBeFertilized@SeaPickle@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1250288002
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  91
     * @symbol ?mayPlaceOn@SeaPickle@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1757470849
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1504028421
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  101
     * @symbol ?getResourceItem@SeaPickle@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1238451625
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@SeaPickle@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   2067848044
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1390201925
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  134
     * @symbol ?buildDescriptionId@SeaPickle@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   -1000702176
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  136
     * @symbol ?getColor@SeaPickle@@UEBAHAEBVBlock@@@Z
     * @hash   -2062396645
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl  137
     * @symbol ?getColor@SeaPickle@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1928568165
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  154
     * @symbol ?getLightEmission@SeaPickle@@UEBA?AUBrightness@@AEBVBlock@@@Z
     * @hash   -358568815
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl  157
     * @hash   1477012899
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  171
     * @symbol ?onPlace@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1417312107
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  173
     * @symbol ?playerDestroy@SeaPickle@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1380012531
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  174
     * @symbol ?tick@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1387860881
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  175
     * @symbol ?randomTick@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1850049292
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  180
     * @symbol ?canSurvive@SeaPickle@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1247411127
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @vftbl  192
     * @symbol ?checkAlive@SeaPickle@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   250287041
     */
    virtual void checkAlive(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAPICKLE
    /**
     * @symbol ?canBeSilkTouched@SeaPickle@@MEBA_NXZ
     * @hash   -1121675490
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?hasVariableLighting@SeaPickle@@UEBA_NXZ
     * @hash   214167313
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @symbol ?waterSpreadCausesSpawn@SeaPickle@@UEBA_NXZ
     * @hash   -555429578
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0SeaPickle@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   224790775
     */
    MCAPI SeaPickle(std::string const &, int);

};