/**
 * @file  ServerToClientHandshakePacket.hpp
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
 * @brief MC class ServerToClientHandshakePacket.
 *
 */
class ServerToClientHandshakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[32];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERTOCLIENTHANDSHAKEPACKET
public:
    class ServerToClientHandshakePacket& operator=(class ServerToClientHandshakePacket const &) = delete;
    ServerToClientHandshakePacket(class ServerToClientHandshakePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -738488476
     */
    virtual ~ServerToClientHandshakePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ServerToClientHandshakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   2116651480
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ServerToClientHandshakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1109408635
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ServerToClientHandshakePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1402693026
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ServerToClientHandshakePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1297058642
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ServerToClientHandshakePacket@@QEAA@XZ
     * @hash   1850271426
     */
    MCAPI ServerToClientHandshakePacket();
    /**
     * @symbol ??0ServerToClientHandshakePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1273163777
     */
    MCAPI ServerToClientHandshakePacket(std::string const &);

};