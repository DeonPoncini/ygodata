#ifndef YGO_DATA_CARDDATA_C_H
#define YGO_DATA_CARDDATA_C_H

#include "CardType.h"

/* card data structure for C export */

struct ygo_data_C_StaticCardData
{
    char* name;
    ZU(ygo)ZU(data)CardType cardType;
    /* monster only */
    ZU(ygo)ZU(data)Attribute attribute;
    ZU(ygo)ZU(data)MonsterType monsterType;
    ZU(ygo)ZU(data)Type type;
    ZU(ygo)ZU(data)MonsterType monsterAbility;
    int level;
    int attack;
    int defense;
    int lpendulum;
    int rpendulum;
    /* spell and trap only */
    ZU(ygo)ZU(data)SpellType spellType;
    ZU(ygo)ZU(data)TrapType trapType;
    /* card text */
    char* text;
};

#endif
