/**
 * @file  DirectoryPackWithEncryptionAccessStrategy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackWithEncryptionAccessStrategy.
 *
 */
class DirectoryPackWithEncryptionAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKWITHENCRYPTIONACCESSSTRATEGY
public:
    class DirectoryPackWithEncryptionAccessStrategy& operator=(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1592323500
     */
    virtual ~DirectoryPackWithEncryptionAccessStrategy();
    /**
     * @vftbl  1
     * @symbol ?getPackSize@DirectoryPackWithEncryptionAccessStrategy@@UEBA_KXZ
     * @hash   1343201226
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @vftbl  2
     * @symbol ?getPackLocation@DirectoryPackWithEncryptionAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     * @hash   -1004098104
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @vftbl  3
     * @symbol ?getPackName@DirectoryPackWithEncryptionAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1502531132
     */
    virtual std::string const & getPackName() const;
    /**
     * @vftbl  4
     * @symbol ?isWritable@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
     * @hash   1872394012
     */
    virtual bool isWritable() const;
    /**
     * @vftbl  5
     * @symbol ?setIsTrusted@DirectoryPackWithEncryptionAccessStrategy@@UEAAX_N@Z
     * @hash   -1362403104
     */
    virtual void setIsTrusted(bool);
    /**
     * @vftbl  6
     * @symbol ?isTrusted@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
     * @hash   2019075007
     */
    virtual bool isTrusted() const;
    /**
     * @vftbl  7
     * @symbol ?hasAsset@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     * @hash   792367903
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @vftbl  8
     * @symbol ?hasFolder@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     * @hash   830469641
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @vftbl  9
     * @symbol ?getAsset@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   558931220
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @vftbl  10
     * @symbol ?deleteAsset@DirectoryPackWithEncryptionAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     * @hash   -203856952
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @vftbl  11
     * @symbol ?writeAsset@DirectoryPackWithEncryptionAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1330848651
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @vftbl  12
     * @symbol ?forEachIn@DirectoryPackWithEncryptionAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     * @hash   -28497692
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @vftbl  14
     * @symbol ?getStrategyType@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     * @hash   -1386369837
     */
    virtual enum class PackAccessStrategyType getStrategyType() const;
    /**
     * @vftbl  16
     * @symbol ?createSubPack@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     * @hash   1609575971
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @vftbl  17
     * @symbol ?generateAssetSet@DirectoryPackWithEncryptionAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
     * @hash   1510240992
     */
    virtual enum class PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @vftbl  19
     * @symbol ?unload@DirectoryPackWithEncryptionAccessStrategy@@UEAAXXZ
     * @hash   2116904848
     */
    virtual void unload();
    /**
     * @vftbl  20
     * @symbol ?hasUpgradeFiles@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
     * @hash   814224327
     */
    virtual bool hasUpgradeFiles() const;
    /**
     * @vftbl  21
     * @symbol ?readContentIdentity@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AVContentIdentity@@XZ
     * @hash   -105939749
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @symbol ??0DirectoryPackWithEncryptionAccessStrategy@@QEAA@AEBVResourceLocation@@0AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   147871730
     */
    MCAPI DirectoryPackWithEncryptionAccessStrategy(class ResourceLocation const &, class ResourceLocation const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

//private:
    /**
     * @symbol ?_getUnencryptedAsset@DirectoryPackWithEncryptionAccessStrategy@@AEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1132965099
     */
    MCAPI bool _getUnencryptedAsset(class Core::Path const &, std::string &) const;
    /**
     * @symbol ?_hasUnencryptedAsset@DirectoryPackWithEncryptionAccessStrategy@@AEBA_NAEBVPath@Core@@@Z
     * @hash   851918980
     */
    MCAPI bool _hasUnencryptedAsset(class Core::Path const &) const;

private:

};