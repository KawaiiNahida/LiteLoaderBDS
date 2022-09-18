/**
 * @file  SHStraightStairsDown.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHStraightStairsDown.
 *
 */
class SHStraightStairsDown : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTRAIGHTSTAIRSDOWN
public:
    class SHStraightStairsDown& operator=(class SHStraightStairsDown const &) = delete;
    SHStraightStairsDown(class SHStraightStairsDown const &) = delete;
    SHStraightStairsDown() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   408048261
     */
    virtual ~SHStraightStairsDown();
    /**
     * @vftbl  2
     * @symbol ?getType@SHStraightStairsDown@@UEBA?AW4StructurePieceType@@XZ
     * @hash   968648592
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@SHStraightStairsDown@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   259613888
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@SHStraightStairsDown@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1640713176
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};