// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecraftGameTestHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTHELPER
public:
    class MinecraftGameTestHelper& operator=(class MinecraftGameTestHelper const &) = delete;
    MinecraftGameTestHelper(class MinecraftGameTestHelper const &) = delete;
    MinecraftGameTestHelper() = delete;
#endif

public:
    /*0*/ virtual ~MinecraftGameTestHelper();
    /*1*/ virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /*2*/ virtual void succeedWhenEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /*3*/ virtual void succeedWhenEntityData(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /*4*/ virtual void succeedWhenEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /*5*/ virtual void succeedWhenBlockPresent(class Block const &, int, int, int, bool);
    /*6*/ virtual void succeedWhenBlockPresent(class Block const &, class BlockPos const &, bool);
    /*7*/ virtual void succeedWhenBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /*8*/ virtual void setNight();
    /*9*/ virtual void setDayTime(int);
    /*10*/ virtual class std::optional<struct gametest::GameTestError> setBlock(int, int, int, class Block const &, int);
    /*11*/ virtual class std::optional<struct gametest::GameTestError> setBlock(class BlockPos const &, class Block const &, int);
    /*12*/ virtual class std::optional<struct gametest::GameTestError> pressButton(int, int, int);
    /*13*/ virtual class std::optional<struct gametest::GameTestError> pressButton(class BlockPos const &);
    /*14*/ virtual class std::optional<struct gametest::GameTestError> pullLever(int, int, int);
    /*15*/ virtual class std::optional<struct gametest::GameTestError> pullLever(class BlockPos const &);
    /*16*/ virtual class std::optional<struct gametest::GameTestError> killAllEntities();
    /*17*/ virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, int, int, int);
    /*18*/ virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /*19*/ virtual class std::variant<struct gametest::GameTestError, class Actor *> spawn(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /*20*/ virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnItem(class ItemStack const &, class Vec3 const &);
    /*21*/ virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    /*22*/ virtual class std::variant<struct gametest::GameTestError, class Actor *> spawnWithoutBehaviors(struct ActorDefinitionIdentifier const &, class Vec3 const &);
    /*23*/ virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class BlockPos const &, float);
    /*24*/ virtual class std::optional<struct gametest::GameTestError> walkTo(class Mob &, class Vec3 const &, float);
    /*25*/ virtual class std::optional<struct gametest::GameTestError> setTntFuse(class Actor &, int);
    /*26*/ virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, bool);
    /*27*/ virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, int, int, int, bool);
    /*28*/ virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, bool);
    /*29*/ virtual class std::optional<struct gametest::GameTestError> assertEntityPresent(struct ActorDefinitionIdentifier const &, class BlockPos const &, float, bool);
    /*30*/ virtual class std::optional<struct gametest::GameTestError> assertEntityInstancePresent(class Actor const *, class BlockPos const &, bool);
    /*31*/ virtual class std::optional<struct gametest::GameTestError> assertEntityTouching(struct ActorDefinitionIdentifier const &, class Vec3 const &, bool);
    /*32*/ virtual class std::optional<struct gametest::GameTestError> assertEntityState(class BlockPos const &, struct ActorDefinitionIdentifier const &, class std::function<bool (class Actor &)>);
    /*33*/ virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, int, int, int, bool);
    /*34*/ virtual class std::optional<struct gametest::GameTestError> assertBlockPresent(class BlockLegacy const &, class BlockPos const &, bool);
    /*35*/ virtual class std::optional<struct gametest::GameTestError> assertBlockState(class BlockPos const &, class std::function<bool (class Block const &)>);
    /*36*/ virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, int, int, int, float, bool);
    /*37*/ virtual class std::optional<struct gametest::GameTestError> assertItemEntityPresent(class Item const &, class BlockPos const &, float, bool);
    /*38*/ virtual class std::optional<struct gametest::GameTestError> assertItemEntityCountIs(class Item const &, class BlockPos const &, float, int);
    /*39*/ virtual class std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const &);
    /*40*/ virtual class std::optional<struct gametest::GameTestError> assertContainerContains(class ItemStack const &, class BlockPos const &);
    /*41*/ virtual class std::optional<struct gametest::GameTestError> assertEntityHasComponent(struct ActorDefinitionIdentifier const &, std::string const &, class BlockPos const &, bool);
    /*42*/ virtual class std::optional<struct gametest::GameTestError> assertEntityHasArmor(struct ActorDefinitionIdentifier const &, enum ArmorSlot, std::string const &, int, class BlockPos const &, bool);
    /*43*/ virtual class std::optional<struct gametest::GameTestError> print(std::string const &);
    /*44*/ virtual class std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const &, int);
    /*45*/ virtual class std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const &, bool);
    /*46*/ virtual class std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const &, int);
    /*47*/ virtual class std::variant<struct gametest::GameTestError, class ScriptGameTestConnectivity> getFenceConnectivity(class BlockPos const &);
    /*48*/ virtual class std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const &) const;
    /*49*/ virtual class std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const &) const;
    /*50*/ virtual class std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const &) const;
    /*51*/ virtual class std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const &) const;
    /*52*/ virtual class std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const &, int);
    /*53*/ virtual class std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(class BlockPos const &, std::string const &, std::vector<float> const &);
    /*54*/ virtual class std::optional<struct gametest::GameTestError> assertCanReachLocation(class Mob &, class BlockPos const &, bool);
    /*55*/ virtual class std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(class BlockPos const &, enum ScriptFacing, enum ScriptFacing);
    /*56*/ virtual class std::variant<struct gametest::GameTestError, class SimulatedPlayer *> spawnSimulatedPlayer(std::string const &, class BlockPos const &, enum GameType);
    /*57*/ virtual void removeSimulatedPlayer(class SimulatedPlayer &);
    /*58*/ virtual class std::variant<struct gametest::GameTestError, class Dimension *> getDimension();
    /*59*/ virtual class std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource *&);
    MCAPI MinecraftGameTestHelper(class MinecraftGameTestInstance &);

protected:

private:
    MCAPI class std::optional<struct gametest::GameTestError> _assertEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &, class BlockPos const &, bool) const;
    MCAPI class Container const * _getContainer(class BlockPos const &);
    MCAPI int _getItemEntityCount(class Item const &, class AABB const &);
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>> _getServerNetworkHandler() const;
    MCAPI class std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;
    MCAPI bool _isEntityPresent(struct ActorDefinitionIdentifier const &, class AABB const &) const;

};