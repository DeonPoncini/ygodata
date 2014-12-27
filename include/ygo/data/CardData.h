#ifndef YGO_DATA_CARDDATA_H
#define YGO_DATA_CARDDATA_H

#include <string>
#include <zephyr/CExport.h>

#include "CardType.h"

Z_NS_START(ygo)
Z_NS_START(data)

#ifdef __cplusplus
struct StaticCardData
{
    std::string name;
    CardType cardType;
    // monster only
    Attribute attribute;
    MonsterType monsterType;
    Type type;
    MonsterType monsterAbility;
    int level;
    int attack;
    int defense;
    int lpendulum;
    int rpendulum;
    // spell and trap only
    SpellType spellType;
    TrapType trapType;
    // card text
    std::string text;
};
#endif

struct ZD(ygo)ZD(data)C_StaticCardData
{
    const char* name;
    ZU(ygo)ZU(data)CardType cardType;
    // monster only
    ZU(ygo)ZU(data)Attribute attribute;
    ZU(ygo)ZU(data)MonsterType monsterType;
    ZU(ygo)ZU(data)Type type;
    ZU(ygo)ZU(data)MonsterType monsterAbility;
    int level;
    int attack;
    int defense;
    int lpendulum;
    int rpendulum;
    // spell and trap only
    ZU(ygo)ZU(data)SpellType spellType;
    ZU(ygo)ZU(data)TrapType trapType;
    // card text
    const char* text;
};

Z_NS_END
Z_NS_END

#endif
