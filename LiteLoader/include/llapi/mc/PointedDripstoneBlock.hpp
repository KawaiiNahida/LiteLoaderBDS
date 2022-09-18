/**
 * @file  PointedDripstoneBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PointedDripstoneBlock.
 *
 */
class PointedDripstoneBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POINTEDDRIPSTONEBLOCK
public:
    class PointedDripstoneBlock& operator=(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1621075974
     */
    virtual ~PointedDripstoneBlock();
    /**
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@PointedDripstoneBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   -605177167
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   1259111372
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  15
     * @symbol ?onProjectileHit@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     * @hash   2137836967
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
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
     * @hash   -213143064
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
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
     * @vftbl  90
     * @symbol ?mayPlace@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1417174060
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -880573842
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  101
     * @symbol ?getResourceItem@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1861795946
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   463689567
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@PointedDripstoneBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   1896913899
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
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
     * @vftbl  144
     * @symbol ?getVisualShape@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1907112298
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  147
     * @symbol ?getVariant@PointedDripstoneBlock@@UEBAHAEBVBlock@@@Z
     * @hash   1806876348
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  152
     * @symbol ?animateTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   684102769
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  153
     * @symbol ?init@PointedDripstoneBlock@@UEAAAEAVBlockLegacy@@XZ
     * @hash   -52152761
     */
    virtual class BlockLegacy & init();
    /**
     * @vftbl  157
     * @hash   1470278211
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@PointedDripstoneBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -1768271901
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
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
     * @vftbl  172
     * @symbol ?onFallOn@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     * @hash   -1959710732
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  174
     * @symbol ?tick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1485691026
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  175
     * @symbol ?randomTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1842870207
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  180
     * @symbol ?canSurvive@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   234590084
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @vftbl  192
     * @symbol ?getDustColor@PointedDripstoneBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     * @hash   -1950579112
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @vftbl  193
     * @symbol ?getDustParticleName@PointedDripstoneBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   1742186643
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl  194
     * @hash   1582024252
     */
    virtual void __unk_vfn_194();
    /**
     * @vftbl  195
     * @symbol ?onLand@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -731516806
     */
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  197
     * @symbol ?startFalling@PointedDripstoneBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
     * @hash   368050702
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POINTEDDRIPSTONEBLOCK
    /**
     * @symbol ?falling@PointedDripstoneBlock@@UEBA_NXZ
     * @hash   1299196147
     */
    MCVAPI bool falling() const;
#endif
    /**
     * @symbol ??0PointedDripstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1540568150
     */
    MCAPI PointedDripstoneBlock(std::string const &, int);
    /**
     * @symbol ?addDripParticle@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@W4ParticleType@@@Z
     * @hash   1416310352
     */
    MCAPI static void addDripParticle(class BlockSource &, class BlockPos const &, enum class ParticleType);
    /**
     * @symbol ?canGrow@PointedDripstoneBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   1289121567
     */
    MCAPI static bool canGrow(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?fillCauldron@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   647323623
     */
    MCAPI static void fillCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?findStalactiteTipAboveCauldron@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -196960437
     */
    MCAPI static class std::optional<class BlockPos> findStalactiteTipAboveCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?getCauldronFillLiquidType@PointedDripstoneBlock@@SA?AV?$optional@W4MaterialType@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1326862031
     */
    MCAPI static class std::optional<enum class MaterialType> getCauldronFillLiquidType(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?getStalactiteTipBelowFillSource@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   789591033
     */
    MCAPI static class std::optional<class BlockPos> getStalactiteTipBelowFillSource(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?growStalactite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1042144855
     */
    MCAPI static void growStalactite(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?growStalagmite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1815250567
     */
    MCAPI static void growStalagmite(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_updateBlockThickness@PointedDripstoneBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   658733436
     */
    MCAPI void _updateBlockThickness(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_calculateDripstoneThickness@PointedDripstoneBlock@@CA?AW4DripstoneThickness@@AEAVBlockSource@@AEBVBlockPos@@E_N@Z
     * @hash   1269993650
     */
    MCAPI static enum class DripstoneThickness _calculateDripstoneThickness(class BlockSource &, class BlockPos const &, unsigned char, bool);
    /**
     * @symbol ?_canDrip@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1210612926
     */
    MCAPI static bool _canDrip(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_canFillCauldron@PointedDripstoneBlock@@CA_NAEBVBlock@@@Z
     * @hash   -2027927684
     */
    MCAPI static bool _canFillCauldron(class Block const &);
    /**
     * @symbol ?_canTipGrow@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   66034201
     */
    MCAPI static bool _canTipGrow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_createDripstone@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@EW4DripstoneThickness@@@Z
     * @hash   -625960814
     */
    MCAPI static void _createDripstone(class BlockSource &, class BlockPos const &, unsigned char, enum class DripstoneThickness);
    /**
     * @symbol ?_createMergedTips@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   230971083
     */
    MCAPI static void _createMergedTips(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?_findBlockVertically@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EV?$function@$$A6A_NAEAVBlockSource@@AEBVBlockPos@@@Z@3@2H@Z
     * @hash   -233004705
     */
    MCAPI static class std::optional<class BlockPos> _findBlockVertically(class BlockSource &, class BlockPos const &, unsigned char, class std::function<bool (class BlockSource &, class BlockPos const &)>, class std::function<bool (class BlockSource &, class BlockPos const &)>, int);
    /**
     * @symbol ?_findRootBlock@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   1590076731
     */
    MCAPI static class std::optional<class BlockPos> _findRootBlock(class BlockSource &, class BlockPos const &, int);
    /**
     * @symbol ?_findTip@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EH_N@Z
     * @hash   -1938117698
     */
    MCAPI static class std::optional<class BlockPos> _findTip(class BlockSource &, class BlockPos const &, unsigned char, int, bool);
    /**
     * @symbol ?_getBlockAboveStalactiteRoot@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -665532430
     */
    MCAPI static class std::optional<class BlockPos> _getBlockAboveStalactiteRoot(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_getRandomBlockPositionOffset@PointedDripstoneBlock@@CA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   -83356999
     */
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const &);
    /**
     * @symbol ?_grow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -1569393459
     */
    MCAPI static void _grow(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?_growStalagmiteBelow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1242701762
     */
    MCAPI static void _growStalagmiteBelow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isStalactiteBase@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -995936262
     */
    MCAPI static bool _isStalactiteBase(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isTip@PointedDripstoneBlock@@CA_NAEBVBlock@@E_N@Z
     * @hash   66749287
     */
    MCAPI static bool _isTip(class Block const &, unsigned char, bool);
    /**
     * @symbol ?_isValidPointedDripstonePlacement@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
     * @hash   1477171579
     */
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource &, class BlockPos const &, bool);
    /**
     * @symbol ?_mayPlaceHanging@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -297746965
     */
    MCAPI static bool _mayPlaceHanging(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_mayPlaceStanding@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1171323799
     */
    MCAPI static bool _mayPlaceStanding(class BlockSource &, class BlockPos const &);

private:

};