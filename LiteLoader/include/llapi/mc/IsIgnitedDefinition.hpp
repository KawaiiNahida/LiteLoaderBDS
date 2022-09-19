/**
 * @file  IsIgnitedDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure IsIgnitedDefinition.
 *
 */
struct IsIgnitedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISIGNITEDDEFINITION
public:
    struct IsIgnitedDefinition& operator=(struct IsIgnitedDefinition const &) = delete;
    IsIgnitedDefinition(struct IsIgnitedDefinition const &) = delete;
    IsIgnitedDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@IsIgnitedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   478030030
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@IsIgnitedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   1475888060
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@IsIgnitedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsIgnitedDefinition@@@JsonUtil@@@std@@@Z
     * @hash   2069124372
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIgnitedDefinition>> &);

};