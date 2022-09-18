/**
 * @file  ChalkboardBlockActor.hpp
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
 * @brief MC class ChalkboardBlockActor.
 *
 */
class ChalkboardBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR
public:
    class ChalkboardBlockActor& operator=(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1562142525
     */
    virtual ~ChalkboardBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@ChalkboardBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -651221030
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@ChalkboardBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   216501881
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   115077763
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol ?onChanged@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1446866331
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol ?getShadowRadius@ChalkboardBlockActor@@UEBAMAEAVBlockSource@@@Z
     * @hash   -61314369
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl  25
     * @symbol ?getImmersiveReaderText@ChalkboardBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     * @hash   1829977287
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
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
     * @symbol ?_getUpdatePacket@ChalkboardBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -1908979716
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@ChalkboardBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -731991786
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0ChalkboardBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -788493386
     */
    MCAPI ChalkboardBlockActor(class BlockPos const &);
    /**
     * @symbol ?getChalkboardSize@ChalkboardBlockActor@@QEBA?BW4ChalkboardSize@@XZ
     * @hash   -2016155222
     */
    MCAPI enum class ChalkboardSize const getChalkboardSize() const;
    /**
     * @symbol ?getLocked@ChalkboardBlockActor@@QEBA_NXZ
     * @hash   1597957258
     */
    MCAPI bool getLocked() const;
    /**
     * @symbol ?getTextCharCount@ChalkboardBlockActor@@QEBAHXZ
     * @hash   414842744
     */
    MCAPI int getTextCharCount() const;
    /**
     * @symbol ?setText@ChalkboardBlockActor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -27643346
     */
    MCAPI void setText(std::string const &);
    /**
     * @symbol ?validate@ChalkboardBlockActor@@QEAAXAEAVBlockSource@@@Z
     * @hash   1263603956
     */
    MCAPI void validate(class BlockSource &);
    /**
     * @symbol ?calculateAllBlocks@ChalkboardBlockActor@@SA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@W4ChalkboardSize@@H@Z
     * @hash   -1177206525
     */
    MCAPI static std::vector<class BlockPos> calculateAllBlocks(class BlockPos const &, enum class ChalkboardSize, int);
    /**
     * @symbol ?canCreateChalkboard@ChalkboardBlockActor@@SA_NPEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EHAEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVItemStack@@_N@Z
     * @hash   388344067
     */
    MCAPI static bool canCreateChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum class ChalkboardSize, unsigned char, int, std::vector<class BlockPos> &, class ItemStack const &, bool);
    /**
     * @symbol ?convertFromEntity@ChalkboardBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVCompoundTag@@@Z
     * @hash   -1386758703
     */
    MCAPI static class ChalkboardBlockActor * convertFromEntity(class BlockSource &, class CompoundTag const &);
    /**
     * @symbol ?createChalkboard@ChalkboardBlockActor@@SAPEAV1@PEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EH_NAEBVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1438787770
     */
    MCAPI static class ChalkboardBlockActor * createChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum class ChalkboardSize, unsigned char, int, bool, class ItemStack const &, std::string);

//private:
    /**
     * @symbol ?_findChalkboard@ChalkboardBlockActor@@CA?AUChalkboardFinder@1@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   286481392
     */
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder _findChalkboard(class BlockSource &, class BlockPos const &);

private:

};