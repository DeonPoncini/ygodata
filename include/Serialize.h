#ifndef YGO_SERIALIZE_H
#define YGO_SERIALIZE_H

#include "CardData.h"

namespace ygo
{

CardType toCardType(const std::string& cardType);
Attribute toAttribute(const std::string& attribute);
Type toType(const std::string& type);
MonsterType toMonsterType(const std::string& monsterType);
MonsterAbility toMonsterAbility(const std::string& monsterAbility);
SpellType toSpellType(const std::string& spellType);
TrapType toTrapType(const std::string& trapType);

std::string fromCardType(CardType cardType);
std::string fromAttribute(Attribute attribute);
std::string fromType(Type type);
std::string fromMonsterType(MonsterType monsterType);
std::string fromMonsterAbility(MonsterAbility monster2ndType);
std::string fromSpellType(SpellType spellType);
std::string fromTrapType(TrapType trapType);

int toSpeed(SpellType type);
int toSpeed(TrapType type);

Location toLocation(const std::string& location);
std::string fromLocation(Location location);

Position toPosition(const std::string& position);
std::string fromPosition(Position position);
BattlePosition toBattlePosition(const std::string& battlePosition);
std::string fromBattlePosition(BattlePosition battlePosition);

}

#endif
