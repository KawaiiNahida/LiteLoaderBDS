/**
 * @file  CompoundTag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTagVariant.hpp"
enum class SnbtFormat : unsigned char
{
    PartialNewLine = 0,
    AlwayNewLine = 1,
    Minimize = 2,
};
struct PrettySnbtFormat;

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTag.
 *
 */
class CompoundTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    map<std::string, CompoundTagVariant> val;

public:

    LIAPI static std::unique_ptr<CompoundTag> create();
    LIAPI map<std::string, CompoundTagVariant>& value();

    template <typename T>
    inline T const* get(class gsl::basic_string_span<char const, -1> key) const {
        return (T*)get(key);
    };

    // put value
    LIAPI void putEnd(std::string key);
    LIAPI double& putDouble(std::string key, double val);
    LIAPI void putByteArray(std::string key, char data[], size_t size);
    LIAPI void putIntArray(std::string key, int data[], size_t size);
    LIAPI struct TagMemoryChunk& putIntArray(std::string key, struct TagMemoryChunk val);

    // get value
    LIAPI double getDouble(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI struct TagMemoryChunk const& getIntArray(class gsl::basic_string_span<char const, -1> key) const;

    // get tag
    LIAPI class ByteTag const* getByteTag(class gsl::basic_string_span<char const, -1> key) const;
    //BDS has implemented this interface
    //LIAPI class ShortTag const* getShortTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class FloatTag const* getFloatTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class DoubleTag const* getDoubleTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class ByteArrayTag const* getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    //LIAPI class StringTag const* getStringTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class IntArrayTag const* getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class ListTag const* getListTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class CompoundTag const* getCompoundTag(class gsl::basic_string_span<char const, -1> key) const;
    LIAPI class Tag* operator[](class gsl::basic_string_span<char const, -1> key);

    // IO
    LIAPI void setItemStack(ItemStack* item);
    LIAPI void setBlock(Block* blk);
    LIAPI bool setActor(Actor* actor) const;
    LIAPI bool setPlayer(Player* player);
    LIAPI bool setBlockActor(BlockActor* ble) const;
    LIAPI static std::unique_ptr<CompoundTag> fromItemStack(ItemStack* item);
    LIAPI static std::unique_ptr<CompoundTag> fromBlock(Block* blk);
    LIAPI static std::unique_ptr<CompoundTag> fromActor(Actor* actor);
    LIAPI static std::unique_ptr<CompoundTag> fromPlayer(Player* player);
    LIAPI static std::unique_ptr<CompoundTag> fromBlockActor(BlockActor* ble);

    // To Formatted SNBT
    LIAPI std::string toSNBT(int indent, SnbtFormat snbtFormat = SnbtFormat::PartialNewLine);
    LIAPI string toPrettySNBT(bool forPlayer = false) const;
    LIAPI string toPrettySNBT(struct PrettySnbtFormat const& format) const;
    LIAPI std::string toBinaryNBT(bool isLittleEndian = true);
    LIAPI static std::string nbtListToBinary(std::vector<std::unique_ptr<CompoundTag>> tags, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromSNBT(const std::string& snbt);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, size_t& offset, bool isLittleEndian = true);
    LIAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, bool isLittleEndian = true);
    LIAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromBinary(std::string const& data, bool isLittleEndian = true);

    LIAPI std::string toNetworkNBT() const;
    LIAPI static std::unique_ptr<CompoundTag> fromNetworkNBT(std::string const& data);
    LIAPI static std::string nbtListToNetwork(std::vector<std::unique_ptr<CompoundTag>> tags);
    LIAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromNetwork(std::string const& data);


    // Deprecated?
    LIAPI std::string toSNBT();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAG
public:
    class CompoundTag& operator=(class CompoundTag const &) = delete;
    CompoundTag(class CompoundTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2079298627
     */
    virtual ~CompoundTag();
    /**
     * @vftbl  2
     * @symbol ?write@CompoundTag@@UEBAXAEAVIDataOutput@@@Z
     * @hash   421471744
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol ?load@CompoundTag@@UEAAXAEAVIDataInput@@@Z
     * @hash   -1124021761
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol ?toString@CompoundTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1555472695
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol ?getId@CompoundTag@@UEBA?AW4Type@Tag@@XZ
     * @hash   442707708
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol ?equals@CompoundTag@@UEBA_NAEBVTag@@@Z
     * @hash   298662245
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  8
     * @symbol ?print@CompoundTag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
     * @hash   2017331399
     */
    virtual void print(std::string const &, class PrintStream &) const;
    /**
     * @vftbl  9
     * @symbol ?copy@CompoundTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     * @hash   -1575175175
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol ?hash@CompoundTag@@UEBA_KXZ
     * @hash   1903960047
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol ??0CompoundTag@@QEAA@XZ
     * @hash   2063606795
     */
    MCAPI CompoundTag();
    /**
     * @symbol ??0CompoundTag@@QEAA@$$QEAV0@@Z
     * @hash   1717227655
     */
    MCAPI CompoundTag(class CompoundTag &&);
    /**
     * @symbol ?append@CompoundTag@@QEAAXAEBV1@@Z
     * @hash   361605544
     */
    MCAPI void append(class CompoundTag const &);
    /**
     * @symbol ?begin@CompoundTag@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@std@@@std@@@std@@XZ
     * @hash   -1814080750
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>> begin() const;
    /**
     * @symbol ?clear@CompoundTag@@QEAAXXZ
     * @hash   705203535
     */
    MCAPI void clear();
    /**
     * @symbol ?clone@CompoundTag@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1331576180
     */
    MCAPI std::unique_ptr<class CompoundTag> clone() const;
    /**
     * @symbol ?contains@CompoundTag@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   203736463
     */
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?contains@CompoundTag@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@W4Type@Tag@@@Z
     * @hash   1433847094
     */
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>, enum class Tag::Type) const;
    /**
     * @symbol ?deepCopy@CompoundTag@@QEAAXAEBV1@@Z
     * @hash   -418609480
     */
    MCAPI void deepCopy(class CompoundTag const &);
    /**
     * @symbol ?end@CompoundTag@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@std@@@std@@@std@@XZ
     * @hash   2107863794
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>> end() const;
    /**
     * @symbol ?get@CompoundTag@@QEAAPEAVTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1601401336
     */
    MCAPI class Tag * get(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?get@CompoundTag@@QEBAPEBVTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1905851352
     */
    MCAPI class Tag const * get(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getBoolean@CompoundTag@@QEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1174338489
     */
    MCAPI bool getBoolean(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getByte@CompoundTag@@QEBAEV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   436301634
     */
    MCAPI unsigned char getByte(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getByteArray@CompoundTag@@QEBAAEBUTagMemoryChunk@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1815522707
     */
    MCAPI struct TagMemoryChunk const & getByteArray(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getByteTag@CompoundTag@@QEAAPEAVByteTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1479687654
     */
    MCAPI class ByteTag * getByteTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?getCompound@CompoundTag@@QEAAPEAV1@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -10190294
     */
    MCAPI class CompoundTag * getCompound(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?getCompound@CompoundTag@@QEBAPEBV1@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1196373454
     */
    MCAPI class CompoundTag const * getCompound(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getFloat@CompoundTag@@QEBAMV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1581839021
     */
    MCAPI float getFloat(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getInt@CompoundTag@@QEBAHV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   2067294811
     */
    MCAPI int getInt(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getInt64@CompoundTag@@QEBA_JV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1523657046
     */
    MCAPI __int64 getInt64(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getInt64Tag@CompoundTag@@QEAAPEAVInt64Tag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1772162490
     */
    MCAPI class Int64Tag * getInt64Tag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?getInt64Tag@CompoundTag@@QEBAPEBVInt64Tag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   750969194
     */
    MCAPI class Int64Tag const * getInt64Tag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getIntTag@CompoundTag@@QEAAPEAVIntTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   2080290714
     */
    MCAPI class IntTag * getIntTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?getIntTag@CompoundTag@@QEBAPEBVIntTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   450943166
     */
    MCAPI class IntTag const * getIntTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getList@CompoundTag@@QEAAPEAVListTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1597000584
     */
    MCAPI class ListTag * getList(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?getList@CompoundTag@@QEBAPEBVListTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1958488360
     */
    MCAPI class ListTag const * getList(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getShort@CompoundTag@@QEBAFV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -2077182182
     */
    MCAPI short getShort(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getShortTag@CompoundTag@@QEBAPEBVShortTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1675313848
     */
    MCAPI class ShortTag const * getShortTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getString@CompoundTag@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -485303735
     */
    MCAPI std::string const & getString(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?getStringTag@CompoundTag@@QEBAPEBVStringTag@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1582718426
     */
    MCAPI class StringTag const * getStringTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ?isEmpty@CompoundTag@@QEBA_NXZ
     * @hash   -198873008
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ??4CompoundTag@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   488654738
     */
    MCAPI class CompoundTag & operator=(class CompoundTag &&);
    /**
     * @symbol ?put@CompoundTag@@QEAAAEAVTag@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV2@@Z
     * @hash   1466929864
     */
    MCAPI class Tag & put(std::string, class Tag &&);
    /**
     * @symbol ?put@CompoundTag@@QEAAPEAVTag@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@4@@Z
     * @hash   -2086191892
     */
    MCAPI class Tag * put(std::string, std::unique_ptr<class Tag>);
    /**
     * @symbol ?putBoolean@CompoundTag@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1439936133
     */
    MCAPI void putBoolean(std::string, bool);
    /**
     * @symbol ?putByte@CompoundTag@@QEAAAEAEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z
     * @hash   -1458270713
     */
    MCAPI unsigned char & putByte(std::string, unsigned char);
    /**
     * @symbol ?putByteArray@CompoundTag@@QEAAAEAUTagMemoryChunk@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U2@@Z
     * @hash   -1900590716
     */
    MCAPI struct TagMemoryChunk & putByteArray(std::string, struct TagMemoryChunk);
    /**
     * @symbol ?putCompound@CompoundTag@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V1@@Z
     * @hash   -1082840402
     */
    MCAPI class CompoundTag & putCompound(std::string, class CompoundTag);
    /**
     * @symbol ?putCompound@CompoundTag@@QEAAPEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@3@@Z
     * @hash   2086285659
     */
    MCAPI class CompoundTag * putCompound(std::string, std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?putFloat@CompoundTag@@QEAAAEAMV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     * @hash   1510657083
     */
    MCAPI float & putFloat(std::string, float);
    /**
     * @symbol ?putInt@CompoundTag@@QEAAAEAHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1659370485
     */
    MCAPI int & putInt(std::string, int);
    /**
     * @symbol ?putInt64@CompoundTag@@QEAAAEA_JV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
     * @hash   1143580899
     */
    MCAPI __int64 & putInt64(std::string, __int64);
    /**
     * @symbol ?putShort@CompoundTag@@QEAAAEAFV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     * @hash   -571900549
     */
    MCAPI short & putShort(std::string, short);
    /**
     * @symbol ?putString@CompoundTag@@QEAAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@0@Z
     * @hash   -1019151175
     */
    MCAPI std::string & putString(std::string, std::string);
    /**
     * @symbol ?rawView@CompoundTag@@QEBAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@2@@std@@XZ
     * @hash   1389657262
     */
    MCAPI class std::map<std::string, class CompoundTagVariant, struct std::less<void>, class std::allocator<struct std::pair<std::string const, class CompoundTagVariant>>> const & rawView() const;
    /**
     * @symbol ?remove@CompoundTag@@QEAA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1491165621
     */
    MCAPI bool remove(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?rename@CompoundTag@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   500100707
     */
    MCAPI void rename(class gsl::basic_string_span<char const, -1>, std::string);
    /**
     * @symbol ?size@CompoundTag@@QEBA_KXZ
     * @hash   2069030445
     */
    MCAPI unsigned __int64 size() const;

};