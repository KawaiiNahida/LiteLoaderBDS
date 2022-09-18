/**
 * @file  TemporalAttributeBuff.hpp
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
 * @brief MC class TemporalAttributeBuff.
 *
 */
class TemporalAttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPORALATTRIBUTEBUFF
public:
    class TemporalAttributeBuff& operator=(class TemporalAttributeBuff const &) = delete;
    TemporalAttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -506781349
     */
    virtual ~TemporalAttributeBuff();
    /**
     * @vftbl  1
     * @symbol ?isInstantaneous@TemporalAttributeBuff@@UEBA_NXZ
     * @hash   -1355053737
     */
    virtual bool isInstantaneous() const;
    /**
     * @vftbl  2
     * @symbol ?isSerializable@TemporalAttributeBuff@@UEBA_NXZ
     * @hash   1860999796
     */
    virtual bool isSerializable() const;
    /**
     * @vftbl  3
     * @symbol ?setDurationAmplifier@TemporalAttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     * @hash   1552885692
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @vftbl  4
     * @symbol ?shouldBuff@TemporalAttributeBuff@@UEBA_NXZ
     * @hash   -1599843423
     */
    virtual bool shouldBuff() const;
    /**
     * @vftbl  5
     * @symbol ?isComplete@TemporalAttributeBuff@@UEBA_NXZ
     * @hash   -1359325730
     */
    virtual bool isComplete() const;
    /**
     * @symbol ??0TemporalAttributeBuff@@QEAA@MHW4AttributeBuffType@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1679741706
     */
    MCAPI TemporalAttributeBuff(float, int, enum class AttributeBuffType, bool, std::string const &);
    /**
     * @symbol ??0TemporalAttributeBuff@@QEAA@AEBV0@@Z
     * @hash   -495260639
     */
    MCAPI TemporalAttributeBuff(class TemporalAttributeBuff const &);
    /**
     * @symbol ?getBaseAmount@TemporalAttributeBuff@@QEBAMXZ
     * @hash   606125636
     */
    MCAPI float getBaseAmount() const;
    /**
     * @symbol ?getDuration@TemporalAttributeBuff@@QEBAHXZ
     * @hash   -355454196
     */
    MCAPI int getDuration() const;
    /**
     * @symbol ?getLifeTimer@TemporalAttributeBuff@@QEBAHXZ
     * @hash   -891567316
     */
    MCAPI int getLifeTimer() const;
    /**
     * @symbol ?serializationSetLifeTime@TemporalAttributeBuff@@QEAAXH@Z
     * @hash   2135667426
     */
    MCAPI void serializationSetLifeTime(int);
    /**
     * @symbol ?tick@TemporalAttributeBuff@@QEAAXXZ
     * @hash   510352733
     */
    MCAPI void tick();

};