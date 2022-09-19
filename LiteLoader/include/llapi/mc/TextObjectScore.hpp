/**
 * @file  TextObjectScore.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TextObjectScore.
 *
 */
class TextObjectScore {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTSCORE
public:
    class TextObjectScore& operator=(class TextObjectScore const &) = delete;
    TextObjectScore(class TextObjectScore const &) = delete;
    TextObjectScore() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -469111692
     */
    virtual ~TextObjectScore();
    /**
     * @vftbl  1
     * @symbol ?asString@TextObjectScore@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1130383815
     */
    virtual std::string asString() const;
    /**
     * @vftbl  2
     * @symbol ?asJsonValue@TextObjectScore@@UEBA?AVValue@Json@@XZ
     * @hash   1328883687
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl  3
     * @symbol ?resolve@TextObjectScore@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
     * @hash   -833947448
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @symbol ??0TextObjectScore@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   597217335
     */
    MCAPI TextObjectScore(std::string, std::string);
    /**
     * @symbol ?RAW_TEXT_SCORE_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -9349375
     */
    MCAPI static std::string const RAW_TEXT_SCORE_KEY;
    /**
     * @symbol ?RAW_TEXT_SCORE_NAME_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1464754687
     */
    MCAPI static std::string const RAW_TEXT_SCORE_NAME_KEY;
    /**
     * @symbol ?RAW_TEXT_SCORE_OBJECTIVE_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -391753023
     */
    MCAPI static std::string const RAW_TEXT_SCORE_OBJECTIVE_KEY;
    /**
     * @symbol ?RAW_TEXT_SCORE_STAR@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   550185695
     */
    MCAPI static std::string const RAW_TEXT_SCORE_STAR;

};