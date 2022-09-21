/**
 * @file  MC/StructureFeatureTypeNames.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace StructureFeatureTypeNames.
 *
 */
namespace StructureFeatureTypeNames {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   784245938
     * @symbol ?getFeatureName@StructureFeatureTypeNames@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4StructureFeatureType@@@Z
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> getFeatureName(enum StructureFeatureType);
    /**
     * @hash   -1485511220
     * @symbol ?getFeatureType@StructureFeatureTypeNames@@YA?AW4StructureFeatureType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI enum StructureFeatureType getFeatureType(std::string const &);
    /**
     * @symbol ?getFeatureTypeAliasesMap@StructureFeatureTypeNames@@YAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4StructureFeatureType@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4StructureFeatureType@@@std@@@2@@std@@XZ
     */
    MCAPI class std::map<std::string, enum StructureFeatureType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum StructureFeatureType>>> const & getFeatureTypeAliasesMap();

};