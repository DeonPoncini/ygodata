#ifndef YGO_DATA_CARDTYPE_H
#define YGO_DATA_CARDTYPE_H

#include <zephyr/CExport.h>

Z_NS_START(ygo)
Z_NS_START(data)

Z_ENUM_CLASS(ygo_data, CardType)
{
    MONSTER,
    SPELL,
    TRAP
};

Z_ENUM_CLASS(ygo_data, MonsterType)
{
    NONE,
    NORMAL,
    EFFECT,
    RITUAL,
    FUSION,
    SYNCHRO,
    XYZ,
    PENDULUM,
    TOKEN,
    FLIP,
    TOON,
    SPIRIT,
    UNION,
    GEMINI,
    TUNER
};

Z_ENUM_CLASS(ygo_data, SpellType)
{
    NONE,
    NORMAL,
    CONTINUOUS,
    FIELD,
    EQUIP,
    QUICK,
    RITUAL
};

Z_ENUM_CLASS(ygo_data, TrapType)
{
    NONE,
    NORMAL,
    CONTINUOUS,
    COUNTER
};

Z_ENUM_CLASS(ygo_data, Attribute)
{
    NONE,
    DARK,
    DIVINE,
    EARTH,
    FIRE,
    LIGHT,
    WATER,
    WIND
};

Z_ENUM_CLASS(ygo_data, Type)
{
    NONE,
    AQUA,
    BEAST,
    BEASTWARRIOR,
    CREATORGOD,
    DINOSAUR,
    DIVINEBEAST,
    DRAGON,
    FAIRY,
    FIEND,
    FISH,
    INSECT,
    MACHINE,
    PLANT,
    PSYCHIC,
    PYRO,
    REPTILE,
    ROCK,
    SEASERPENT,
    SPELLCASTER,
    THUNDER,
    WARRIOR,
    WINGEDBEAST,
    WYRM,
    ZOMBIE
};

Z_ENUM_CLASS(ygo_data, Location)
{
    FIELD,
    M1,
    M2,
    M3,
    M4,
    M5,
    GRAVEYARD,
    LPENDULUM,
    RPENDULUM,
    EXTRA,
    S1,
    S2,
    S3,
    S4,
    S5,
    DECK,
    HAND,
    BANISHED,
    LIMBO
};

Z_ENUM_CLASS(ygo_data, Position)
{
    FACEDOWN,
    FACEUP
};

Z_ENUM_CLASS(ygo_data, BattlePosition)
{
    NONE,
    ATTACK,
    DEFENSE
};

Z_NS_END
Z_NS_END

#endif
