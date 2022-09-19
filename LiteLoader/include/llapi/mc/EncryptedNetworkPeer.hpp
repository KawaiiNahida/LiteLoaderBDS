/**
 * @file  EncryptedNetworkPeer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EncryptedNetworkPeer.
 *
 */
class EncryptedNetworkPeer : public NetworkPeer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDNETWORKPEER
public:
    class EncryptedNetworkPeer& operator=(class EncryptedNetworkPeer const &) = delete;
    EncryptedNetworkPeer(class EncryptedNetworkPeer const &) = delete;
    EncryptedNetworkPeer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   241786518
     */
    virtual ~EncryptedNetworkPeer();
    /**
     * @vftbl  1
     * @symbol ?sendPacket@EncryptedNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@HGW4Compressibility@@@Z
     * @hash   -1782334469
     */
    virtual void sendPacket(std::string const &, enum class NetworkPeer::Reliability, int, unsigned short, enum class Compressibility);
    /**
     * @vftbl  2
     * @symbol ?receivePacket@EncryptedNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
     * @hash   -438445829
     */
    virtual enum class NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    /**
     * @vftbl  3
     * @symbol ?getNetworkStatus@EncryptedNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
     * @hash   1013726018
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /**
     * @symbol ??0EncryptedNetworkPeer@@QEAA@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     * @hash   697778230
     */
    MCAPI EncryptedNetworkPeer(class std::shared_ptr<class NetworkPeer>);
    /**
     * @symbol ?enableEncryption@EncryptedNetworkPeer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -763081332
     */
    MCAPI void enableEncryption(std::string const &);

};