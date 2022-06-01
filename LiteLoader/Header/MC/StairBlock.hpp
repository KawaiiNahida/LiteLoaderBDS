// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StairBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STAIRBLOCK
public:
    class StairBlock& operator=(class StairBlock const &) = delete;
    StairBlock(class StairBlock const &) = delete;
    StairBlock() = delete;
#endif

public:
    /*0*/ virtual ~StairBlock();
    /*4*/ virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /*6*/ virtual bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*13*/ virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*14*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*15*/ virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /*16*/ virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /*17*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /*19*/ virtual void __unk_vfn_19();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual class Block const & getStrippedBlock(class Block const &) const;
    /*23*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /*26*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /*28*/ virtual class CopperBehavior const * tryGetCopperBehavior() const;
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*50*/ virtual void __unk_vfn_50();
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual bool isValidAuxValue(int) const;
    /*54*/ virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*56*/ virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*65*/ virtual float getFlexibility(class BlockSource &, class BlockPos const &) const;
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /*74*/ virtual void __unk_vfn_74();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*77*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void __unk_vfn_82();
    /*83*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*84*/ virtual void __unk_vfn_84();
    /*85*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*86*/ virtual bool mayPick() const;
    /*87*/ virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /*88*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*90*/ virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /*92*/ virtual void __unk_vfn_92();
    /*93*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*94*/ virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /*96*/ virtual void __unk_vfn_96();
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*98*/ virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*102*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*107*/ virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /*108*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*109*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*112*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*113*/ virtual void __unk_vfn_113();
    /*116*/ virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*130*/ virtual void __unk_vfn_130();
    /*131*/ virtual void __unk_vfn_131();
    /*132*/ virtual void __unk_vfn_132();
    /*133*/ virtual void __unk_vfn_133();
    /*135*/ virtual void __unk_vfn_135();
    /*136*/ virtual void __unk_vfn_136();
    /*137*/ virtual void __unk_vfn_137();
    /*138*/ virtual void __unk_vfn_138();
    /*140*/ virtual bool isSeasonTinted(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*150*/ virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /*151*/ virtual enum Flip getFaceFlip(unsigned char, class Block const &) const;
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void __unk_vfn_171();
    /*172*/ virtual void __unk_vfn_172();
    /*173*/ virtual void __unk_vfn_173();
    /*174*/ virtual std::string _getHardCodedJSON() const;
    /*175*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*176*/ virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /*177*/ virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
    /*178*/ virtual void __unk_vfn_178();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*188*/ virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*190*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*193*/ virtual void __unk_vfn_193();
    /*196*/ virtual struct Brightness getEmissiveBrightness(class Block const &) const;
    /*197*/ virtual class mce::Color getMapColor() const;
    /*198*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
    /*
    inline bool canBeSilkTouched() const{
        bool (StairBlock::*rv)() const;
        *((void**)&rv) = dlsym("?canBeSilkTouched@StairBlock@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isStairBlock() const{
        bool (StairBlock::*rv)() const;
        *((void**)&rv) = dlsym("?isStairBlock@StairBlock@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI StairBlock(std::string const &, int, class BlockLegacy const &, int);
    MCAPI bool setInnerPieceShape(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    MCAPI bool setStepShape(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    MCAPI static unsigned char stairDirectionToFacing(int);

protected:
    MCAPI void shapeZFightShrink(class AABB &) const;

private:

};