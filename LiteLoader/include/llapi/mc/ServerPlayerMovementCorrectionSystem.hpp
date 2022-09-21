/**
 * @file  MC/ServerPlayerMovementCorrectionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerMovementCorrectionSystem.
 *
 */
class ServerPlayerMovementCorrectionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERMOVEMENTCORRECTIONSYSTEM
public:
    class ServerPlayerMovementCorrectionSystem& operator=(class ServerPlayerMovementCorrectionSystem const &) = delete;
    ServerPlayerMovementCorrectionSystem(class ServerPlayerMovementCorrectionSystem const &) = delete;
    ServerPlayerMovementCorrectionSystem() = delete;
#endif

public:
    /**
     * @hash   1418213204
     * @symbol ?_afterMovementSimulation@ServerPlayerMovementCorrectionSystem@@SAXAEAVPlayer@@AEBVPlayerAuthInputPacket@@AEBVReplayStateComponent@@@Z
     */
    MCAPI static void _afterMovementSimulation(class Player &, class PlayerAuthInputPacket const &, class ReplayStateComponent const &);
    /**
     * @hash   -1123973900
     * @symbol ?create@ServerPlayerMovementCorrectionSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};