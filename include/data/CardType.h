#ifndef YGO_CARDTYPE_H
#define YGO_CARDTYPE_H

namespace ygo
{
namespace data
{

enum class CardType
{
    MONSTER,
    SPELL,
    TRAP
};

enum class MonsterType
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

enum class SpellType
{
    NONE,
    NORMAL,
    CONTINUOUS,
    FIELD,
    EQUIP,
    QUICK,
    RITUAL
};

enum class TrapType
{
    NONE,
    NORMAL,
    CONTINUOUS,
    COUNTER
};

enum class Attribute
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

enum class Type
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

enum class Location
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

enum class Position
{
    FACEDOWN,
    FACEUP
};

enum class BattlePosition
{
    NONE,
    ATTACK,
    DEFENSE
};

}
}

#endif
