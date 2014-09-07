#ifndef YGO_CARDDATA_H
#define YGO_CARDDATA_H

#include <string>

#include "CardType.h"

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
};

}
}

#endif
