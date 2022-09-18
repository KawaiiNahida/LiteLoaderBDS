/**
 * @file  TickSyncPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickSyncPacket.
 *
 */
class TickSyncPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKSYNCPACKET
public:
    class TickSyncPacket& operator=(class TickSyncPacket const &) = delete;
    TickSyncPacket(class TickSyncPacket const &) = delete;
    TickSyncPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1922740406
     */
    virtual ~TickSyncPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@TickSyncPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -135528018
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@TickSyncPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   857034843
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@TickSyncPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -933364724
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@TickSyncPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1816061204
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};