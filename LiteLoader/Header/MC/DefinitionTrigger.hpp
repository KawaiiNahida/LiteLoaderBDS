// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DefinitionTrigger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

public:
    MCAPI DefinitionTrigger(class DefinitionTrigger &&);
    MCAPI DefinitionTrigger();
    MCAPI DefinitionTrigger(class DefinitionTrigger const &);
    MCAPI bool canTrigger(class RenderParams &) const;
    MCAPI bool canTrigger(class Actor const &, class VariantParameterList const &) const;
    MCAPI class DefinitionTrigger & operator=(class DefinitionTrigger &&);
    MCAPI class DefinitionTrigger & operator=(class DefinitionTrigger const &);
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;
    MCAPI ~DefinitionTrigger();
    MCAPI static class BidirectionalUnorderedMap<std::string, enum FilterSubject> TargetEnumValues;
    MCAPI static void bindType();
    MCAPI static class DefinitionTrigger fromCompoundTag(class CompoundTag const &);

protected:

private:

};