// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorkDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKDEFINITION
public:
    class WorkDefinition& operator=(class WorkDefinition const &) = delete;
    WorkDefinition(class WorkDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~WorkDefinition();
    /*
    inline  ~WorkDefinition(){
         (WorkDefinition::*rv)();
        *((void**)&rv) = dlsym("??1WorkDefinition@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI WorkDefinition();
    MCAPI void initialize(class EntityContext &, class WorkGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkDefinition>> &);

protected:

private:

};