/**
 * @file  PlayerScoreboardId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerScoreboardId.
 *
 */
struct PlayerScoreboardId {

#define AFTER_EXTRA
    // Add Member There
    // acotid
    long long Actoruniqueid;

    PlayerScoreboardId(ActorUniqueID const& aid) : Actoruniqueid(aid.id) {}

    inline long long get() const {
        return Actoruniqueid;
    }

    inline operator long long() const {
        return Actoruniqueid;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCOREBOARDID
public:
    struct PlayerScoreboardId& operator=(struct PlayerScoreboardId const &) = delete;
    PlayerScoreboardId(struct PlayerScoreboardId const &) = delete;
#endif

public:
    /**
     * @hash   1346174844
     * @symbol  ??0PlayerScoreboardId\@\@QEAA\@XZ
     */
    MCAPI PlayerScoreboardId();
    /**
     * @hash   1462011894
     * @symbol  ??0PlayerScoreboardId\@\@QEAA\@_J\@Z
     */
    MCAPI PlayerScoreboardId(__int64);
    /**
     * @hash   2047706355
     * @symbol  ?getHash\@PlayerScoreboardId\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   -1750191467
     * @symbol  ??8PlayerScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct PlayerScoreboardId const &) const;
    /**
     * @hash   -1015004428
     * @symbol  ?INVALID\@PlayerScoreboardId\@\@2U1\@B
     */
    MCAPI static struct PlayerScoreboardId const INVALID;

};