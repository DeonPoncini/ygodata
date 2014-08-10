#ifndef YGO_CARDDATA_H
#define YGO_CARDDATA_H

#include <string>

#include "CardType.h"

namespace ygo
{

class Player;

struct CardData
{
    std::string name;
    CardType cardType;
    Location location;
    Position position;
    Player* owner;
    Player* controller;
    // monster only
    Attribute attribute;
    MonsterType monsterType;
    Type type;
    MonsterAbility monsterAbility;
    BattlePosition battlePosition;
    int level;
    int attack;
    int defense;
    int lpendulum;
    int rpendulum;
    // spell and trap only
    SpellType spellType;
    TrapType trapType;
    int speed;
};

}

#endif
