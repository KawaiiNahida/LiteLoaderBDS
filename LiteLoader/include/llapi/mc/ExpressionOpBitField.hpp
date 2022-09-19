/**
 * @file  ExpressionOpBitField.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ExpressionOpBitField.
 *
 */
struct ExpressionOpBitField {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPRESSIONOPBITFIELD
public:
    struct ExpressionOpBitField& operator=(struct ExpressionOpBitField const &) = delete;
    ExpressionOpBitField(struct ExpressionOpBitField const &) = delete;
    ExpressionOpBitField() = delete;
#endif

public:
    /**
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@0000000@Z
     * @hash   -200133790
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@00000@Z
     * @hash   2053921666
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@0000@Z
     * @hash   1307418091
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@000@Z
     * @hash   729339954
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@00@Z
     * @hash   -536071029
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@0@Z
     * @hash   -438225854
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp) const;

};