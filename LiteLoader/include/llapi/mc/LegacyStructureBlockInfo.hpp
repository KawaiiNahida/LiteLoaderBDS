/**
 * @file  MC/LegacyStructureBlockInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyStructureBlockInfo.
 *
 */
class LegacyStructureBlockInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTUREBLOCKINFO
public:
    class LegacyStructureBlockInfo& operator=(class LegacyStructureBlockInfo const &) = delete;
    LegacyStructureBlockInfo(class LegacyStructureBlockInfo const &) = delete;
    LegacyStructureBlockInfo() = delete;
#endif

public:
    /**
     * @hash   -328110334
     * @symbol ??0LegacyStructureBlockInfo@@QEAA@AEBVBlockPos@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVBlock@@2@Z
     */
    MCAPI LegacyStructureBlockInfo(class BlockPos const &, std::unique_ptr<class CompoundTag>, class Block const &, class Block const &);

};