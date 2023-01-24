#include <llapi/ModAPI.h>
#include <llapi/LoggerAPI.h>

#include <llapi/mc/Material.hpp>
#include <llapi/mod/CustomBlock.h>
#include <llapi/mc/BlockActor.hpp>
#include <llapi/mod/TestBlock.h>
#include <llapi/mc/Item.hpp>
#include <llapi/mc/ItemRegistry.hpp>
#include <llapi/mc/ItemRegistryRef.hpp>
#include <llapi/mod/TestItem.h>
Logger blockRegLogger("BlockRegistry");
typedef std::vector<std::pair<std::string, CompoundTag>> BlockProperties;


#include <llapi/mc/VanillaStates.hpp>
// event: RegisterBlocksEvent
THook(void, "?registerBlocks@BlockDefinitionGroup@@QEAAXXZ", BlockDefinitionGroup* a1) {
    original(a1);
    auto ttt = ll::mod::registerBlock<TestBlock>("fiercecraft:ancient_debris_marker");
   /* BlockActor::registerBlockActor(BlockActorType(89) ,"TestFurnace");*/
    
}

// event: RegisterItemsEvent
THook(void, "?registerItems@VanillaItems@@SAXVItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@_N@Z",
      ItemRegistryRef* a1, void* a2, void* a3) {
    original(a1, a2, a3);
    ll::mod::registerItem<TestItem>("fiercecraft:fierce_heart", 903);
}

TInstanceHook(BlockProperties, "?generateServerBlockProperties@BlockDefinitionGroup@@QEBA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@std@@XZ",
              BlockDefinitionGroup)
{
    auto properties = original(this);

    for (auto& weakLegacy : ll::mod::registeredBlocks) {
        auto tag = CompoundTag::create();

        // menu_category
        auto menu_category = CompoundTag::create();
        //menu_category->putString("group", "itemGroup.name.stone");
        //menu_category->putString("category", "nature"); // StringFromCreativeItemCategory
        menu_category->putBoolean("is_hidden_in_commands", *((BYTE *)(weakLegacy.get()) + 272));
        tag->putCompound("menu_category", std::move(menu_category));

        properties.emplace_back(std::make_pair(weakLegacy->getTypeName(), std::move(*tag)));
    }
    return properties;
}