/**
 * @file  SmithingTableContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SmithingTableContainerManagerModel.
 *
 */
class SmithingTableContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMITHINGTABLECONTAINERMANAGERMODEL
public:
    class SmithingTableContainerManagerModel& operator=(class SmithingTableContainerManagerModel const &) = delete;
    SmithingTableContainerManagerModel(class SmithingTableContainerManagerModel const &) = delete;
    SmithingTableContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1520947352
     */
    virtual ~SmithingTableContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@SmithingTableContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -1631599295
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@SmithingTableContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1617221314
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@SmithingTableContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   1508020471
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@SmithingTableContainerManagerModel@@UEAAXHH@Z
     * @hash   756514309
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@SmithingTableContainerManagerModel@@UEAAXXZ
     * @hash   1495012731
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@SmithingTableContainerManagerModel@@UEAA_NM@Z
     * @hash   -1157163515
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@SmithingTableContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   -41109144
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0SmithingTableContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -2113036265
     */
    MCAPI SmithingTableContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ?INPUT_SLOT@SmithingTableContainerManagerModel@@2HB
     * @hash   1257590221
     */
    MCAPI static int const INPUT_SLOT;
    /**
     * @symbol ?MATERIAL_SLOT@SmithingTableContainerManagerModel@@2HB
     * @hash   963126351
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @symbol ?RESULT_SLOT@SmithingTableContainerManagerModel@@2HB
     * @hash   -419652269
     */
    MCAPI static int const RESULT_SLOT;

};