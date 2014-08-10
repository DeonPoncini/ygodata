#include "Serialize.h"

#include <stdexcept>

namespace ygo
{

CardType toCardType(const std::string& cardType)
{
    if (cardType == "Monster")
    {
        return CardType::MONSTER;
    }
    else if (cardType == "Spell")
    {
        return CardType::SPELL;
    }
    else if (cardType == "Trap")
    {
        return CardType::TRAP;
    }
    throw std::domain_error("Invalid card type");
}

std::string fromCardType(CardType cardType)
{
    switch (cardType)
    {
        case CardType::MONSTER: return "Monster";
        case CardType::SPELL: return "Spell";
        case CardType::TRAP: return "Trap";
    }
    throw std::domain_error("Invalid card type");
}

Attribute toAttribute(const std::string& attribute)
{
    if (attribute == "None")
    {
        return Attribute::NONE;
    }
    else if (attribute == "Dark")
    {
        return Attribute::DARK;
    }
    else if (attribute == "Divine")
    {
        return Attribute::DIVINE;
    }
    else if (attribute == "Earth")
    {
        return Attribute::EARTH;
    }
    else if (attribute == "Fire")
    {
        return Attribute::FIRE;
    }
    else if (attribute == "Light")
    {
        return Attribute::LIGHT;
    }
    else if (attribute == "Water")
    {
        return Attribute::WATER;
    }
    else if (attribute == "Wind")
    {
        return Attribute::WIND;
    }
    throw std::domain_error("Invalid attribute");
}

std::string fromAttribute(Attribute attribute)
{
    switch (attribute)
    {
        case Attribute::NONE: return "None";
        case Attribute::DARK: return "Dark";
        case Attribute::DIVINE: return "Divine";
        case Attribute::EARTH: return "Earth";
        case Attribute::FIRE: return "Fire";
        case Attribute::LIGHT: return "Light";
        case Attribute::WATER: return "Water";
        case Attribute::WIND: return "Wind";

    }
    throw std::domain_error("Invalid attribute");
}

Type toType(const std::string& type)
{
    if (type == "None")
    {
        return Type::NONE;
    }
    else if (type == "Aqua")
    {
        return Type::AQUA;
    }
    else if (type == "Beast")
    {
        return Type::BEAST;
    }
    else if (type == "BeastWarrior")
    {
        return Type::BEASTWARRIOR;
    }
    else if (type == "CreatorGod")
    {
        return Type::CREATORGOD;
    }
    else if (type == "Dinosaur")
    {
        return Type::DINOSAUR;
    }
    else if (type == "DivineBeast")
    {
        return Type::DIVINEBEAST;
    }
    else if (type == "Dragon")
    {
        return Type::DRAGON;
    }
    else if (type == "Fairy")
    {
        return Type::FAIRY;
    }
    else if (type == "Fiend")
    {
        return Type::FIEND;
    }
    else if (type == "Fish")
    {
        return Type::FISH;
    }
    else if (type == "Insect")
    {
        return Type::INSECT;
    }
    else if (type == "Machine")
    {
        return Type::MACHINE;
    }
    else if (type == "Plant")
    {
        return Type::PLANT;
    }
    else if (type == "Psychic")
    {
        return Type::PSYCHIC;
    }
    else if (type == "Pyro")
    {
        return Type::PYRO;
    }
    else if (type == "Reptile")
    {
        return Type::REPTILE;
    }
    else if (type == "Rock")
    {
        return Type::ROCK;
    }
    else if (type == "SeaSerpent")
    {
        return Type::SEASERPENT;
    }
    else if (type == "Spellcaster")
    {
        return Type::SPELLCASTER;
    }
    else if (type == "Thunder")
    {
        return Type::THUNDER;
    }
    else if (type == "Warrior")
    {
        return Type::WARRIOR;
    }
    else if (type == "WingedBeast")
    {
        return Type::WINGEDBEAST;
    }
    else if (type == "Wyrm")
    {
        return Type::WYRM;
    }
    else if (type == "Zombie")
    {
        return Type::ZOMBIE;
    }
    throw std::domain_error("Invalid type");
}

std::string fromType(Type type)
{
    switch (type)
    {
        case Type::NONE: return "None";
        case Type::AQUA: return "Aqua";
        case Type::BEAST: return "Beast";
        case Type::BEASTWARRIOR: return "BeastWarrior";
        case Type::CREATORGOD: return "CreatorGod";
        case Type::DINOSAUR: return "Dinosaur";
        case Type::DIVINEBEAST: return "DivineBeast";
        case Type::DRAGON: return "Dragon";
        case Type::FAIRY: return "Fairy";
        case Type::FIEND: return "Fiend";
        case Type::FISH: return "Fish";
        case Type::INSECT: return "Insect";
        case Type::MACHINE: return "Machine";
        case Type::PLANT: return "Plant";
        case Type::PSYCHIC: return "Psychic";
        case Type::PYRO: return "Pyro";
        case Type::REPTILE: return "Reptile";
        case Type::ROCK: return "Rock";
        case Type::SEASERPENT: return "SeaSerpent";
        case Type::SPELLCASTER: return "Spellcaster";
        case Type::THUNDER: return "Thunder";
        case Type::WARRIOR: return "Warrior";
        case Type::WINGEDBEAST: return "WingedBeast";
        case Type::WYRM: return "Wyrm";
        case Type::ZOMBIE: return "Zombie";
    }
    throw std::domain_error("Invalid type");
}

MonsterType toMonsterType(const std::string& monsterType)
{
    if (monsterType == "None")
    {
        return MonsterType::NONE;
    }
    else if (monsterType == "Normal")
    {
        return MonsterType::NORMAL;
    }
    else if (monsterType == "Effect")
    {
        return MonsterType::EFFECT;
    }
    else if (monsterType == "Fusion")
    {
        return MonsterType::FUSION;
    }
    else if (monsterType == "Ritual")
    {
        return MonsterType::RITUAL;
    }
    else if (monsterType == "Synchro")
    {
        return MonsterType::SYNCHRO;
    }
    else if (monsterType == "Xyz")
    {
        return MonsterType::XYZ;
    }
    else if (monsterType == "Pendulum")
    {
        return MonsterType::PENDULUM;
    }
    else if (monsterType == "Token")
    {
        return MonsterType::TOKEN;
    }
    throw std::domain_error("Invalid monster type");
}

std::string fromMonsterType(MonsterType monsterType)
{
    switch (monsterType)
    {
        case MonsterType::NONE: return "None";
        case MonsterType::NORMAL: return "Normal";
        case MonsterType::EFFECT: return "Effect";
        case MonsterType::FUSION: return "Fusion";
        case MonsterType::RITUAL: return "Ritual";
        case MonsterType::SYNCHRO: return "Synchro";
        case MonsterType::XYZ: return "Xyz";
        case MonsterType::PENDULUM: return "Pendulum";
        case MonsterType::TOKEN: return "Token";
    }
    throw std::domain_error("Invalid monster type");
}

MonsterAbility toMonsterAbility(const std::string& monsterAbility)
{
    if (monsterAbility == "None")
    {
        return MonsterAbility::NONE;
    }
    else if (monsterAbility == "Effect")
    {
        return MonsterAbility::EFFECT;
    }
    else if (monsterAbility == "Flip")
    {
        return MonsterAbility::FLIP;
    }
    else if (monsterAbility == "Toon")
    {
        return MonsterAbility::TOON;
    }
    else if (monsterAbility == "Spirit")
    {
        return MonsterAbility::SPIRIT;
    }
    else if (monsterAbility == "Union")
    {
        return MonsterAbility::UNION;
    }
    else if (monsterAbility == "Gemini")
    {
        return MonsterAbility::GEMINI;
    }
    else if (monsterAbility == "Tuner")
    {
        return MonsterAbility::TUNER;
    }
    throw std::domain_error("Invalid monster 2nd type");
}

std::string fromMonsterAbility(MonsterAbility monsterAbility)
{
    switch (monsterAbility)
    {
        case MonsterAbility::NONE: return "None";
        case MonsterAbility::EFFECT: return "Effect";
        case MonsterAbility::FLIP: return "Flip";
        case MonsterAbility::TOON: return "Toon";
        case MonsterAbility::SPIRIT: return "Spirit";
        case MonsterAbility::UNION: return "Union";
        case MonsterAbility::GEMINI: return "Gemini";
        case MonsterAbility::TUNER: return "Tuner";
    }
    throw std::domain_error("Invalid monster 2nd type");
}

SpellType toSpellType(const std::string& spellType)
{
    if (spellType == "None")
    {
        return SpellType::NONE;
    }
    else if (spellType == "Normal")
    {
        return SpellType::NORMAL;
    }
    else if (spellType == "Continuous")
    {
        return SpellType::CONTINUOUS;
    }
    else if (spellType == "Field")
    {
        return SpellType::FIELD;
    }
    else if (spellType == "Equip")
    {
        return SpellType::EQUIP;
    }
    else if (spellType == "Quick")
    {
        return SpellType::QUICK;
    }
    else if (spellType == "Ritual")
    {
        return SpellType::RITUAL;
    }
    throw std::domain_error("Invalid spell type");
}

std::string fromSpellType(SpellType spellType)
{
    switch (spellType)
    {
        case SpellType::NONE: return "None";
        case SpellType::NORMAL: return "Normal";
        case SpellType::CONTINUOUS: return "Continuous";
        case SpellType::FIELD: return "Field";
        case SpellType::EQUIP: return "Equip";
        case SpellType::QUICK: return "Quick";
        case SpellType::RITUAL: return "Ritual";
    }
    throw std::domain_error("Invalid spell type");
}

TrapType toTrapType(const std::string& trapType)
{
    if (trapType == "None")
    {
        return TrapType::NONE;
    }
    if (trapType == "Normal")
    {
        return TrapType::NORMAL;
    }
    else if (trapType == "Continuous")
    {
        return TrapType::CONTINUOUS;
    }
    else if (trapType == "Counter")
    {
        return TrapType::COUNTER;
    }
    throw std::domain_error("Invalid trap type");
}

std::string fromTrapType(TrapType trapType)
{
    switch (trapType)
    {
        case TrapType::NONE: return "None";
        case TrapType::NORMAL: return "Normal";
        case TrapType::CONTINUOUS: return "Continuous";
        case TrapType::COUNTER: return "Counter";
    }
    throw std::domain_error("Invalid trap type");
}

int toSpeed(SpellType type)
{
    switch(type)
    {
        case SpellType::NONE:
            return 0;
        case SpellType::NORMAL:
        case SpellType::FIELD:
        case SpellType::CONTINUOUS:
        case SpellType::EQUIP:
        case SpellType::RITUAL:
            return 1;
        case SpellType::QUICK:
            return 2;
    }
    throw std::domain_error("Invalid spell type");
}

int toSpeed(TrapType type)
{
    switch(type)
    {
        case TrapType::NONE:
            return 0;
        case TrapType::NORMAL:
        case TrapType::CONTINUOUS:
            return 2;
        case TrapType::COUNTER:
            return 3;
    }
    throw std::domain_error("Invalid trap type");
}

Location toLocation(const std::string& location)
{
    if (location == "Deck")
    {
        return Location::DECK;
    }
    else if (location == "Extra")
    {
        return Location::EXTRA;
    }
    else if (location == "Hand")
    {
        return Location::HAND;
    }
    else if (location == "Graveyard")
    {
        return Location::GRAVEYARD;
    }
    else if (location == "Banished")
    {
        return Location::BANISHED;
    }
    else if (location == "Limbo")
    {
        return Location::LIMBO;
    }
    else if (location == "Field")
    {
        return Location::FIELD;
    }
    else if (location == "LPendulum")
    {
        return Location::LPENDULUM;
    }
    else if (location == "RPendulum")
    {
        return Location::RPENDULUM;
    }
    else if (location == "M1")
    {
        return Location::M1;
    }
    else if (location == "M2")
    {
        return Location::M2;
    }
    else if (location == "M3")
    {
        return Location::M3;
    }
    else if (location == "M4")
    {
        return Location::M4;
    }
    else if (location == "M5")
    {
        return Location::M5;
    }
    else if (location == "S1")
    {
        return Location::S1;
    }
    else if (location == "S2")
    {
        return Location::S2;
    }
    else if (location == "S3")
    {
        return Location::S3;
    }
    else if (location == "S4")
    {
        return Location::S4;
    }
    else if (location == "S5")
    {
        return Location::S5;
    }
    throw std::domain_error("Invalid location");
}

std::string fromLocation(Location location)
{
    switch (location)
    {
        case Location::DECK: return "Deck";
        case Location::EXTRA: return "Extra";
        case Location::HAND: return "Hand";
        case Location::GRAVEYARD: return "Graveyard";
        case Location::BANISHED: return "Banished";
        case Location::FIELD: return "Field";
        case Location::LPENDULUM: return "LPendulum";
        case Location::RPENDULUM: return "RPendulum";
        case Location::LIMBO: return "Limbo";
        case Location::M1: return "M1";
        case Location::M2: return "M2";
        case Location::M3: return "M3";
        case Location::M4: return "M4";
        case Location::M5: return "M5";
        case Location::S1: return "S1";
        case Location::S2: return "S2";
        case Location::S3: return "S3";
        case Location::S4: return "S4";
        case Location::S5: return "S5";
    }
    throw std::domain_error("Invalid location");
}

Position toPosition(const std::string& position)
{
    if (position == "FaceDown")
    {
        return Position::FACEDOWN;
    }
    else if (position == "FaceUp")
    {
        return Position::FACEUP;
    }
    throw std::domain_error("Invalid position");
}

std::string fromPosition(Position position)
{
    switch (position)
    {
        case Position::FACEDOWN: return "FaceDown";
        case Position::FACEUP: return "FaceUp";
    }
    throw std::domain_error("Invalid position");
}

BattlePosition toBattlePosition(const std::string& battlePosition)
{
    if (battlePosition == "None")
    {
        return BattlePosition::NONE;
    }
    else if (battlePosition == "Attack")
    {
        return BattlePosition::ATTACK;
    }
    else if (battlePosition == "Defense")
    {
        return BattlePosition::DEFENSE;
    }
    throw std::domain_error("Invalid battle position");
}

std::string fromBattlePosition(BattlePosition battlePosition)
{
    switch (battlePosition)
    {
        case BattlePosition::NONE: return "None";
        case BattlePosition::ATTACK: return "Attack";
        case BattlePosition::DEFENSE: return "Defense";
    }
}

}
