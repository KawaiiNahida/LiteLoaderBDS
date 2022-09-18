/**
 * @file  PoweredBlockComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PoweredBlockComponent.
 *
 */
class PoweredBlockComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POWEREDBLOCKCOMPONENT
public:
    class PoweredBlockComponent& operator=(class PoweredBlockComponent const &) = delete;
    PoweredBlockComponent(class PoweredBlockComponent const &) = delete;
    PoweredBlockComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1017733442
     */
    virtual ~PoweredBlockComponent();
    /**
     * @vftbl  1
     * @symbol ?getStrength@PoweredBlockComponent@@UEBAHXZ
     * @hash   -1098362242
     */
    virtual int getStrength() const;
    /**
     * @vftbl  7
     * @symbol ?canConsumerPower@PoweredBlockComponent@@UEBA_NXZ
     * @hash   216415907
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  11
     * @symbol ?addSource@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     * @hash   2066978440
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  12
     * @symbol ?allowConnection@PoweredBlockComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   -223627836
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  14
     * @symbol ?evaluate@PoweredBlockComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   1035873140
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  17
     * @hash   -329506710
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @hash   -314076894
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  22
     * @symbol ?getCircuitComponentType@PoweredBlockComponent@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   -596238318
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POWEREDBLOCKCOMPONENT
    /**
     * @symbol ?hasChildrenSource@PoweredBlockComponent@@UEBA_NXZ
     * @hash   591468152
     */
    MCVAPI bool hasChildrenSource() const;
#endif
    /**
     * @symbol ??0PoweredBlockComponent@@QEAA@E@Z
     * @hash   530728268
     */
    MCAPI PoweredBlockComponent(unsigned char);

};