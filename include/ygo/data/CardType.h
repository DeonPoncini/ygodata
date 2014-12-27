#ifndef YGO_DATA_CARDTYPE_H
#define YGO_DATA_CARDTYPE_H

#include <zephyr/CExport.h>

Z_NS_START(ygo)
Z_NS_START(data)

Z_ENUM_CLASS ZD(ygo)ZD(data)CardType
{
    ZD(ygo)ZD(data)ZD(CardType)MONSTER,
    ZD(ygo)ZD(data)ZD(CardType)SPELL,
    ZD(ygo)ZD(data)ZD(CardType)TRAP
};

Z_ENUM_CLASS ZD(ygo)ZD(data)MonsterType
{
    ZD(ygo)ZD(data)ZD(MonsterType)NONE,
    ZD(ygo)ZD(data)ZD(MonsterType)NORMAL,
    ZD(ygo)ZD(data)ZD(MonsterType)EFFECT,
    ZD(ygo)ZD(data)ZD(MonsterType)RITUAL,
    ZD(ygo)ZD(data)ZD(MonsterType)FUSION,
    ZD(ygo)ZD(data)ZD(MonsterType)SYNCHRO,
    ZD(ygo)ZD(data)ZD(MonsterType)XYZ,
    ZD(ygo)ZD(data)ZD(MonsterType)PENDULUM,
    ZD(ygo)ZD(data)ZD(MonsterType)TOKEN,
    ZD(ygo)ZD(data)ZD(MonsterType)FLIP,
    ZD(ygo)ZD(data)ZD(MonsterType)TOON,
    ZD(ygo)ZD(data)ZD(MonsterType)SPIRIT,
    ZD(ygo)ZD(data)ZD(MonsterType)UNION,
    ZD(ygo)ZD(data)ZD(MonsterType)GEMINI,
    ZD(ygo)ZD(data)ZD(MonsterType)TUNER
};

Z_ENUM_CLASS ZD(ygo)ZD(data)SpellType
{
    ZD(ygo)ZD(data)ZD(SpellType)NONE,
    ZD(ygo)ZD(data)ZD(SpellType)NORMAL,
    ZD(ygo)ZD(data)ZD(SpellType)CONTINUOUS,
    ZD(ygo)ZD(data)ZD(SpellType)FIELD,
    ZD(ygo)ZD(data)ZD(SpellType)EQUIP,
    ZD(ygo)ZD(data)ZD(SpellType)QUICK,
    ZD(ygo)ZD(data)ZD(SpellType)RITUAL
};

Z_ENUM_CLASS ZD(ygo)ZD(data)TrapType
{
    ZD(ygo)ZD(data)ZD(TrapType)NONE,
    ZD(ygo)ZD(data)ZD(TrapType)NORMAL,
    ZD(ygo)ZD(data)ZD(TrapType)CONTINUOUS,
    ZD(ygo)ZD(data)ZD(TrapType)COUNTER
};

Z_ENUM_CLASS ZD(ygo)ZD(data)Attribute
{
    ZD(ygo)ZD(data)ZD(Attribute)NONE,
    ZD(ygo)ZD(data)ZD(Attribute)DARK,
    ZD(ygo)ZD(data)ZD(Attribute)DIVINE,
    ZD(ygo)ZD(data)ZD(Attribute)EARTH,
    ZD(ygo)ZD(data)ZD(Attribute)FIRE,
    ZD(ygo)ZD(data)ZD(Attribute)LIGHT,
    ZD(ygo)ZD(data)ZD(Attribute)WATER,
    ZD(ygo)ZD(data)ZD(Attribute)WIND
};

Z_ENUM_CLASS ZD(ygo)ZD(data)Type
{
    ZD(ygo)ZD(data)ZD(Type)NONE,
    ZD(ygo)ZD(data)ZD(Type)AQUA,
    ZD(ygo)ZD(data)ZD(Type)BEAST,
    ZD(ygo)ZD(data)ZD(Type)BEASTWARRIOR,
    ZD(ygo)ZD(data)ZD(Type)CREATORGOD,
    ZD(ygo)ZD(data)ZD(Type)DINOSAUR,
    ZD(ygo)ZD(data)ZD(Type)DIVINEBEAST,
    ZD(ygo)ZD(data)ZD(Type)DRAGON,
    ZD(ygo)ZD(data)ZD(Type)FAIRY,
    ZD(ygo)ZD(data)ZD(Type)FIEND,
    ZD(ygo)ZD(data)ZD(Type)FISH,
    ZD(ygo)ZD(data)ZD(Type)INSECT,
    ZD(ygo)ZD(data)ZD(Type)MACHINE,
    ZD(ygo)ZD(data)ZD(Type)PLANT,
    ZD(ygo)ZD(data)ZD(Type)PSYCHIC,
    ZD(ygo)ZD(data)ZD(Type)PYRO,
    ZD(ygo)ZD(data)ZD(Type)REPTILE,
    ZD(ygo)ZD(data)ZD(Type)ROCK,
    ZD(ygo)ZD(data)ZD(Type)SEASERPENT,
    ZD(ygo)ZD(data)ZD(Type)SPELLCASTER,
    ZD(ygo)ZD(data)ZD(Type)THUNDER,
    ZD(ygo)ZD(data)ZD(Type)WARRIOR,
    ZD(ygo)ZD(data)ZD(Type)WINGEDBEAST,
    ZD(ygo)ZD(data)ZD(Type)WYRM,
    ZD(ygo)ZD(data)ZD(Type)ZOMBIE
};

Z_ENUM_CLASS ZD(ygo)ZD(data)Location
{
    ZD(ygo)ZD(data)ZD(Location)FIELD,
    ZD(ygo)ZD(data)ZD(Location)M1,
    ZD(ygo)ZD(data)ZD(Location)M2,
    ZD(ygo)ZD(data)ZD(Location)M3,
    ZD(ygo)ZD(data)ZD(Location)M4,
    ZD(ygo)ZD(data)ZD(Location)M5,
    ZD(ygo)ZD(data)ZD(Location)GRAVEYARD,
    ZD(ygo)ZD(data)ZD(Location)LPENDULUM,
    ZD(ygo)ZD(data)ZD(Location)RPENDULUM,
    ZD(ygo)ZD(data)ZD(Location)EXTRA,
    ZD(ygo)ZD(data)ZD(Location)S1,
    ZD(ygo)ZD(data)ZD(Location)S2,
    ZD(ygo)ZD(data)ZD(Location)S3,
    ZD(ygo)ZD(data)ZD(Location)S4,
    ZD(ygo)ZD(data)ZD(Location)S5,
    ZD(ygo)ZD(data)ZD(Location)DECK,
    ZD(ygo)ZD(data)ZD(Location)HAND,
    ZD(ygo)ZD(data)ZD(Location)BANISHED,
    ZD(ygo)ZD(data)ZD(Location)LIMBO
};

Z_ENUM_CLASS ZD(ygo)ZD(data)Position
{
    ZD(ygo)ZD(data)ZD(Position)FACEDOWN,
    ZD(ygo)ZD(data)ZD(Position)FACEUP
};

Z_ENUM_CLASS ZD(ygo)ZD(data)BattlePosition
{
    ZD(ygo)ZD(data)ZD(BattlePosition)NONE,
    ZD(ygo)ZD(data)ZD(BattlePosition)ATTACK,
    ZD(ygo)ZD(data)ZD(BattlePosition)DEFENSE
};

Z_NS_END
Z_NS_END

#endif
