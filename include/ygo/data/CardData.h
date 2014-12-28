#ifndef YGO_DATA_CARDDATA_H
#define YGO_DATA_CARDDATA_H

#include <string>

#include "CardType.h"

struct ygo_data_C_StaticCardData;

namespace ygo
{
namespace data
{

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

ygo_data_C_StaticCardData* staticDataToC(const StaticCardData& s);
void deleteCStaticData(ygo_data_C_StaticCardData* c);

}
}

#endif
