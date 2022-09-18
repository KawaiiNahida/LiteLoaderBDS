/**
 * @file  SHStraight.hpp
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
 * @brief MC class SHStraight.
 *
 */
class SHStraight : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTRAIGHT
public:
    class SHStraight& operator=(class SHStraight const &) = delete;
    SHStraight(class SHStraight const &) = delete;
    SHStraight() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1395923303
     */
    virtual ~SHStraight();
    /**
     * @vftbl  2
     * @symbol ?getType@SHStraight@@UEBA?AW4StructurePieceType@@XZ
     * @hash   1390621196
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@SHStraight@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   -2123340140
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@SHStraight@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   599842780
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?createPiece@SHStraight@@SA?AV?$unique_ptr@VStrongholdPiece@@U?$default_delete@VStrongholdPiece@@@std@@@std@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
     * @hash   1655949024
     */
    MCAPI static std::unique_ptr<class StrongholdPiece> createPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};