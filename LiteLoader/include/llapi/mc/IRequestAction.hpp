/**
 * @file  IRequestAction.hpp
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
 * @brief MC class IRequestAction.
 *
 */
class IRequestAction {

#define AFTER_EXTRA
// Add Member There
public:
enum class RequestActionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREQUESTACTION
public:
    class IRequestAction& operator=(class IRequestAction const &) = delete;
    IRequestAction(class IRequestAction const &) = delete;
    IRequestAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2044401530
     */
    virtual ~IRequestAction();
    /**
     * @vftbl  1
     * @symbol ?execute@TestAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
     * @hash   283008406
     */
    virtual void execute(class ServerLevel &, class Dimension &) = 0;
    /**
     * @vftbl  2
     * @symbol ?serialize@IRequestAction@@UEAAXAEAVCompoundTag@@@Z
     * @hash   -1570881614
     */
    virtual void serialize(class CompoundTag &);
    /**
     * @vftbl  3
     * @symbol ??8IRequestAction@@UEBA_NAEAV0@@Z
     * @hash   1692719657
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @symbol ??0IRequestAction@@QEAA@AEBW4RequestActionType@0@@Z
     * @hash   -2068339155
     */
    MCAPI IRequestAction(enum class IRequestAction::RequestActionType const &);
    /**
     * @symbol ?isValidTag@IRequestAction@@SA_NAEBVCompoundTag@@@Z
     * @hash   497694715
     */
    MCAPI static bool isValidTag(class CompoundTag const &);

};