/**
 * @file  AddActorPacket.hpp
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
 * @brief MC class AddActorPacket.
 *
 */
class AddActorPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDACTORPACKET
public:
    class AddActorPacket& operator=(class AddActorPacket const &) = delete;
    AddActorPacket(class AddActorPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1120389050
     */
    virtual ~AddActorPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AddActorPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   930925506
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AddActorPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -969893265
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@AddActorPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1354611352
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@AddActorPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1823715784
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0AddActorPacket@@QEAA@XZ
     * @hash   1849186504
     */
    MCAPI AddActorPacket();
    /**
     * @symbol ??0AddActorPacket@@QEAA@AEAVActor@@@Z
     * @hash   -337437385
     */
    MCAPI AddActorPacket(class Actor &);

};