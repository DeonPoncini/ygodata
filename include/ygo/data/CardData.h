#ifndef YGO_DATA_CARDDATA_H
#define YGO_DATA_CARDDATA_H

#include <string>

#include <zephyr/CExport.h>

#include "CardType.h"

Z_NS_START(ygo)
Z_NS_START(data)

Z_STRUCT(ygo_data, StaticCardData)
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

Z_NS_END
Z_NS_END

#endif
