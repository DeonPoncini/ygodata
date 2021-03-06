#include <ygo/data/Serialize.h>

#include <sstream>
#include <stdexcept>

#include <kizhi/Log.h>

#define BOOST_SPIRIT_THREADSAFE
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

namespace ygo
{
namespace data
{

CardType toCardType(const std::string& cardType)
{
         if (cardType == "Monster") return CardType::MONSTER;
    else if (cardType == "Spell")   return CardType::SPELL;
    else if (cardType == "Trap")    return CardType::TRAP;
    KIZHI_FATAL_F << "Invalid card type " << cardType;
    throw std::domain_error("Invalid card type " + cardType);
}

std::string fromCardType(CardType cardType)
{
    switch (cardType) {
        case CardType::MONSTER: return "Monster";
        case CardType::SPELL:   return "Spell";
        case CardType::TRAP:    return "Trap";
    }
}

Attribute toAttribute(const std::string& attribute)
{
         if (attribute == "None")   return Attribute::NONE;
    else if (attribute == "DARK")   return Attribute::DARK;
    else if (attribute == "DIVINE") return Attribute::DIVINE;
    else if (attribute == "EARTH")  return Attribute::EARTH;
    else if (attribute == "FIRE")   return Attribute::FIRE;
    else if (attribute == "LIGHT")  return Attribute::LIGHT;
    else if (attribute == "WATER")  return Attribute::WATER;
    else if (attribute == "WIND")   return Attribute::WIND;
    KIZHI_FATAL_F << "Invalid attribute " << attribute;
    throw std::domain_error("Invalid attribute " + attribute);
}

std::string fromAttribute(Attribute attribute)
{
    switch (attribute) {
        case Attribute::NONE:   return "None";
        case Attribute::DARK:   return "DARK";
        case Attribute::DIVINE: return "DIVINE";
        case Attribute::EARTH:  return "EARTH";
        case Attribute::FIRE:   return "FIRE";
        case Attribute::LIGHT:  return "LIGHT";
        case Attribute::WATER:  return "WATER";
        case Attribute::WIND:   return "WIND";
    }
}

Type toType(const std::string& type)
{
         if (type == "None")          return Type::NONE;
    else if (type == "Aqua")          return Type::AQUA;
    else if (type == "Beast")         return Type::BEAST;
    else if (type == "Beast-Warrior") return Type::BEASTWARRIOR;
    else if (type == "Creator God")   return Type::CREATORGOD;
    else if (type == "Dinosaur")      return Type::DINOSAUR;
    else if (type == "Divine-Beast")  return Type::DIVINEBEAST;
    else if (type == "Dragon")        return Type::DRAGON;
    else if (type == "Fairy")         return Type::FAIRY;
    else if (type == "Fiend")         return Type::FIEND;
    else if (type == "Fish")          return Type::FISH;
    else if (type == "Insect")        return Type::INSECT;
    else if (type == "Machine")       return Type::MACHINE;
    else if (type == "Plant")         return Type::PLANT;
    else if (type == "Psychic")       return Type::PSYCHIC;
    else if (type == "Pyro")          return Type::PYRO;
    else if (type == "Reptile")       return Type::REPTILE;
    else if (type == "Rock")          return Type::ROCK;
    else if (type == "Sea Serpent")   return Type::SEASERPENT;
    else if (type == "Spellcaster")   return Type::SPELLCASTER;
    else if (type == "Thunder")       return Type::THUNDER;
    else if (type == "Warrior")       return Type::WARRIOR;
    else if (type == "Winged Beast")  return Type::WINGEDBEAST;
    else if (type == "Wyrm")          return Type::WYRM;
    else if (type == "Zombie")        return Type::ZOMBIE;
    KIZHI_FATAL_F << "Invalid type " << type;
    throw std::domain_error("Invalid type " + type);
}

std::string fromType(Type type)
{
    switch (type) {
        case Type::NONE:         return "None";
        case Type::AQUA:         return "Aqua";
        case Type::BEAST:        return "Beast";
        case Type::BEASTWARRIOR: return "Beast-Warrior";
        case Type::CREATORGOD:   return "Creator God";
        case Type::DINOSAUR:     return "Dinosaur";
        case Type::DIVINEBEAST:  return "Divine-Beast";
        case Type::DRAGON:       return "Dragon";
        case Type::FAIRY:        return "Fairy";
        case Type::FIEND:        return "Fiend";
        case Type::FISH:         return "Fish";
        case Type::INSECT:       return "Insect";
        case Type::MACHINE:      return "Machine";
        case Type::PLANT:        return "Plant";
        case Type::PSYCHIC:      return "Psychic";
        case Type::PYRO:         return "Pyro";
        case Type::REPTILE:      return "Reptile";
        case Type::ROCK:         return "Rock";
        case Type::SEASERPENT:   return "Sea Serpent";
        case Type::SPELLCASTER:  return "Spellcaster";
        case Type::THUNDER:      return "Thunder";
        case Type::WARRIOR:      return "Warrior";
        case Type::WINGEDBEAST:  return "Winged Beast";
        case Type::WYRM:         return "Wyrm";
        case Type::ZOMBIE:       return "Zombie";
    }
}

MonsterType toMonsterType(const std::string& monsterType)
{
         if (monsterType == "None")     return MonsterType::NONE;
    else if (monsterType == "Normal")   return MonsterType::NORMAL;
    else if (monsterType == "Effect")   return MonsterType::EFFECT;
    else if (monsterType == "Fusion")   return MonsterType::FUSION;
    else if (monsterType == "Ritual")   return MonsterType::RITUAL;
    else if (monsterType == "Synchro")  return MonsterType::SYNCHRO;
    else if (monsterType == "Xyz")      return MonsterType::XYZ;
    else if (monsterType == "Pendulum") return MonsterType::PENDULUM;
    else if (monsterType == "Token")    return MonsterType::TOKEN;
    else if (monsterType == "Effect")   return MonsterType::EFFECT;
    else if (monsterType == "Flip")     return MonsterType::FLIP;
    else if (monsterType == "Toon")     return MonsterType::TOON;
    else if (monsterType == "Spirit")   return MonsterType::SPIRIT;
    else if (monsterType == "Union")    return MonsterType::UNION;
    else if (monsterType == "Gemini")   return MonsterType::GEMINI;
    else if (monsterType == "Tuner")    return MonsterType::TUNER;
    KIZHI_FATAL_F << "Invalid monster type " << monsterType;
    throw std::domain_error("Invalid monster type " + monsterType);
}

std::string fromMonsterType(MonsterType monsterType)
{
    switch (monsterType) {
        case MonsterType::NONE:     return "None";
        case MonsterType::NORMAL:   return "Normal";
        case MonsterType::EFFECT:   return "Effect";
        case MonsterType::FUSION:   return "Fusion";
        case MonsterType::RITUAL:   return "Ritual";
        case MonsterType::SYNCHRO:  return "Synchro";
        case MonsterType::XYZ:      return "Xyz";
        case MonsterType::PENDULUM: return "Pendulum";
        case MonsterType::TOKEN:    return "Token";
        case MonsterType::FLIP:     return "Flip";
        case MonsterType::TOON:     return "Toon";
        case MonsterType::SPIRIT:   return "Spirit";
        case MonsterType::UNION:    return "Union";
        case MonsterType::GEMINI:   return "Gemini";
        case MonsterType::TUNER:    return "Tuner";
    }
}

SpellType toSpellType(const std::string& spellType)
{
         if (spellType == "None")       return SpellType::NONE;
    else if (spellType == "Normal")     return SpellType::NORMAL;
    else if (spellType == "Continuous") return SpellType::CONTINUOUS;
    else if (spellType == "Field")      return SpellType::FIELD;
    else if (spellType == "Equip")      return SpellType::EQUIP;
    else if (spellType == "Quick-Play") return SpellType::QUICK;
    else if (spellType == "Ritual")     return SpellType::RITUAL;
    KIZHI_FATAL_F << "Invalid spell type " << spellType;
    throw std::domain_error("Invalid spell type " + spellType);
}

std::string fromSpellType(SpellType spellType)
{
    switch (spellType) {
        case SpellType::NONE:       return "None";
        case SpellType::NORMAL:     return "Normal";
        case SpellType::CONTINUOUS: return "Continuous";
        case SpellType::FIELD:      return "Field";
        case SpellType::EQUIP:      return "Equip";
        case SpellType::QUICK:      return "Quick-Play";
        case SpellType::RITUAL:     return "Ritual";
    }
}

TrapType toTrapType(const std::string& trapType)
{
         if (trapType == "None")       return TrapType::NONE;
    else if (trapType == "Normal")     return TrapType::NORMAL;
    else if (trapType == "Continuous") return TrapType::CONTINUOUS;
    else if (trapType == "Counter")    return TrapType::COUNTER;
    KIZHI_FATAL_F << "Invalid trap type " << trapType;
    throw std::domain_error("Invalid trap type " + trapType);
}

std::string fromTrapType(TrapType trapType)
{
    switch (trapType) {
        case TrapType::NONE:       return "None";
        case TrapType::NORMAL:     return "Normal";
        case TrapType::CONTINUOUS: return "Continuous";
        case TrapType::COUNTER:    return "Counter";
    }
}

int toSpeed(SpellType type)
{
    switch(type) {
        case SpellType::NONE: return 0;
        case SpellType::NORMAL:
        case SpellType::FIELD:
        case SpellType::CONTINUOUS:
        case SpellType::EQUIP:
        case SpellType::RITUAL: return 1;
        case SpellType::QUICK:  return 2;
    }
}

int toSpeed(TrapType type)
{
    switch(type) {
        case TrapType::NONE: return 0;
        case TrapType::NORMAL:
        case TrapType::CONTINUOUS: return 2;
        case TrapType::COUNTER: return 3;
    }
}

Location toLocation(const std::string& location)
{
         if (location == "Deck")      return Location::DECK;
    else if (location == "Extra")     return Location::EXTRA;
    else if (location == "Hand")      return Location::HAND;
    else if (location == "Graveyard") return Location::GRAVEYARD;
    else if (location == "Banished")  return Location::BANISHED;
    else if (location == "Limbo")     return Location::LIMBO;
    else if (location == "Field")     return Location::FIELD;
    else if (location == "LPendulum") return Location::LPENDULUM;
    else if (location == "RPendulum") return Location::RPENDULUM;
    else if (location == "M1")        return Location::M1;
    else if (location == "M2")        return Location::M2;
    else if (location == "M3")        return Location::M3;
    else if (location == "M4")        return Location::M4;
    else if (location == "M5")        return Location::M5;
    else if (location == "S1")        return Location::S1;
    else if (location == "S2")        return Location::S2;
    else if (location == "S3")        return Location::S3;
    else if (location == "S4")        return Location::S4;
    else if (location == "S5")        return Location::S5;
    KIZHI_FATAL_F << "Invalid location " << location;
    throw std::domain_error("Invalid location " + location);
}

std::string fromLocation(Location location)
{
    switch (location) {
        case Location::DECK:      return "Deck";
        case Location::EXTRA:     return "Extra";
        case Location::HAND:      return "Hand";
        case Location::GRAVEYARD: return "Graveyard";
        case Location::BANISHED:  return "Banished";
        case Location::FIELD:     return "Field";
        case Location::LPENDULUM: return "LPendulum";
        case Location::RPENDULUM: return "RPendulum";
        case Location::LIMBO:     return "Limbo";
        case Location::M1:        return "M1";
        case Location::M2:        return "M2";
        case Location::M3:        return "M3";
        case Location::M4:        return "M4";
        case Location::M5:        return "M5";
        case Location::S1:        return "S1";
        case Location::S2:        return "S2";
        case Location::S3:        return "S3";
        case Location::S4:        return "S4";
        case Location::S5:        return "S5";
    }
}

Position toPosition(const std::string& position)
{
         if (position == "FaceDown") return Position::FACEDOWN;
    else if (position == "FaceUp")   return Position::FACEUP;
    KIZHI_FATAL_F << "Invalid position " << position;
    throw std::domain_error("Invalid position " + position);
}

std::string fromPosition(Position position)
{
    switch (position) {
        case Position::FACEDOWN: return "FaceDown";
        case Position::FACEUP:   return "FaceUp";
    }
}

BattlePosition toBattlePosition(const std::string& battlePosition)
{
         if (battlePosition == "None")    return BattlePosition::NONE;
    else if (battlePosition == "Attack")  return BattlePosition::ATTACK;
    else if (battlePosition == "Defense") return BattlePosition::DEFENSE;
    KIZHI_FATAL_F << "Invalid battle position " << battlePosition;
    throw std::domain_error("Invalid battle position " + battlePosition);
}

std::string fromBattlePosition(BattlePosition battlePosition)
{
    switch (battlePosition) {
        case BattlePosition::NONE:    return "None";
        case BattlePosition::ATTACK:  return "Attack";
        case BattlePosition::DEFENSE: return "Defense";
    }
}

Format toFormat(const std::string& format)
{
         if (format == "Traditional")  return Format::TRADITIONAL;
    else if (format == "Advanced")     return Format::ADVANCED;
    else if (format == "MegaBanned")   return Format::MEGABANNED;
    KIZHI_FATAL_F << "Invalid format " << format;
    throw std::domain_error("Invalid format " + format);
}

std::string fromFormat(Format format)
{
    switch (format) {
        case Format::TRADITIONAL: return "Traditional";
        case Format::ADVANCED:    return "Advanced";
        case Format::MEGABANNED:  return "MegaBanned";
    }
}

Limitation toLimitation(const std::string& limitation)
{
         if (limitation == "Illegal")      return Limitation::ILLEGAL;
    else if (limitation == "Forbidden")    return Limitation::FORBIDDEN;
    else if (limitation == "Limited")      return Limitation::LIMITED;
    else if (limitation == "Semi-limited") return Limitation::SEMILIMITED;
    else if (limitation == "Unlimited")    return Limitation::UNLIMITED;
    KIZHI_FATAL_F << "Invalid limitation " << limitation;
    throw std::domain_error("Invalid limitation " + limitation);
}

std::string fromLimitation(Limitation limitation)
{
    switch (limitation) {
        case Limitation::ILLEGAL:     return "Illegal";
        case Limitation::FORBIDDEN:   return "Forbidden";
        case Limitation::LIMITED:     return "Limited";
        case Limitation::SEMILIMITED: return "Semi-limited";
        case Limitation::UNLIMITED:   return "Unlimited";
    }
}

DeckType toDeckType(const std::string& deckType)
{
         if (deckType == "Main")  return DeckType::MAIN;
    else if (deckType == "Side")  return DeckType::SIDE;
    else if (deckType == "Extra") return DeckType::EXTRA;
    KIZHI_FATAL_F << "Invalid deck type " << deckType;
    throw std::domain_error("Invalid deck type " + deckType);
}

std::string fromDeckType(DeckType deckType)
{
    switch (deckType) {
        case DeckType::MAIN:  return "Main";
        case DeckType::SIDE:  return "Side";
        case DeckType::EXTRA: return "Extra";
    }
}

StaticCardData toCard(boost::property_tree::ptree pt)
{
    return StaticCardData{
        pt.get<std::string>("name"),
        toCardType(pt.get<std::string>("cardType")),
        toAttribute(pt.get<std::string>("attribute")),
        toMonsterType(pt.get<std::string>("monsterType")),
        toType(pt.get<std::string>("type")),
        toMonsterType(pt.get<std::string>("monsterAbility")),
        pt.get<int>("level"),
        pt.get<int>("attack"),
        pt.get<int>("defense"),
        pt.get<int>("lpendulum"),
        pt.get<int>("rpendulum"),
        toSpellType(pt.get<std::string>("spellType")),
        toTrapType(pt.get<std::string>("trapType")),
        pt.get<std::string>("text")
    };
}

CardMap toCardMap(const std::string& json)
{
    std::stringstream ss;
    ss << json;

    boost::property_tree::ptree pt;
    boost::property_tree::read_json(ss, pt);

    std::vector<StaticCardData> main;
    std::vector<StaticCardData> side;
    std::vector<StaticCardData> extra;
    for (auto&& item : pt.get_child("main")) {
        main.push_back(toCard(item.second));
    }
    for (auto&& item : pt.get_child("side")) {
        side.push_back(toCard(item.second));
    }
    for (auto&& item : pt.get_child("extra")) {
        extra.push_back(toCard(item.second));
    }

    return {{DeckType::MAIN, main},
        {DeckType::SIDE, side},
        {DeckType::EXTRA, extra}};
}

void fromCard(boost::property_tree::ptree& pt, StaticCardData c)
{
    pt.put("name",c.name);
    pt.put("cardType",fromCardType(c.cardType));
    pt.put("attribute",fromAttribute(c.attribute));
    pt.put("monsterType",fromMonsterType(c.monsterType));
    pt.put("type",fromType(c.type));
    pt.put("monsterAbility",fromMonsterType(c.monsterAbility));
    pt.put("level",c.level);
    pt.put("attack",c.attack);
    pt.put("defense",c.defense);
    pt.put("lpendulum",c.lpendulum);
    pt.put("rpendulum",c.rpendulum);
    pt.put("spellType",fromSpellType(c.spellType));
    pt.put("trapType",fromTrapType(c.trapType));
    pt.put("text",c.text);
}

std::string fromCardMap(const CardMap cardMap)
{
    auto mainDeck = cardMap.find(DeckType::MAIN)->second;
    auto sideDeck = cardMap.find(DeckType::SIDE)->second;
    auto extraDeck = cardMap.find(DeckType::EXTRA)->second;

    boost::property_tree::ptree mainPt;
    boost::property_tree::ptree sidePt;
    boost::property_tree::ptree extraPt;
    for (auto&& c : mainDeck) {
        boost::property_tree::ptree card;
        fromCard(card, c);
        mainPt.push_back(std::make_pair("",card));
    }
    for (auto&& c : sideDeck) {
        boost::property_tree::ptree card;
        fromCard(card, c);
        sidePt.push_back(std::make_pair("",card));
    }
    for (auto&& c : extraDeck) {
        boost::property_tree::ptree card;
        fromCard(card, c);
        extraPt.push_back(std::make_pair("",card));
    }

    boost::property_tree::ptree pt;
    pt.add_child("main", mainPt);
    pt.add_child("side", sidePt);
    pt.add_child("extra", extraPt);

    std::stringstream ss;
    boost::property_tree::write_json(ss, pt);
    return ss.str();
}

}
}
