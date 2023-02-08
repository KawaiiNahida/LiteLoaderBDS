/**
 * @file  SmithingTableContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~SmithingTableContainerManagerModel();
    /**
     * @hash   -1425314879
     * @vftbl  6
     * @symbol  ?getItemCopies\@SmithingTableContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1410860018
     * @vftbl  7
     * @symbol  ?setSlot\@SmithingTableContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   1714366391
     * @vftbl  8
     * @symbol  ?getSlot\@SmithingTableContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   848401285
     * @vftbl  9
     * @symbol  ?setData\@SmithingTableContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   1586899707
     * @vftbl  10
     * @symbol  ?broadcastChanges\@SmithingTableContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   -950817595
     * @vftbl  16
     * @symbol  ?isValid\@SmithingTableContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   165159896
     * @vftbl  17
     * @symbol  ?_postInit\@SmithingTableContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   -1906767225
     * @symbol  ??0SmithingTableContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SmithingTableContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @hash   -2080267203
     * @symbol  ?INPUT_SLOT\@SmithingTableContainerManagerModel\@\@2HB
     */
    MCAPI static int const INPUT_SLOT;
    /**
     * @hash   1920236223
     * @symbol  ?MATERIAL_SLOT\@SmithingTableContainerManagerModel\@\@2HB
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @hash   537457603
     * @symbol  ?RESULT_SLOT\@SmithingTableContainerManagerModel\@\@2HB
     */
    MCAPI static int const RESULT_SLOT;

};