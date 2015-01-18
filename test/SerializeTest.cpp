#define BOOST_TEST_MODULE ygodata
#include <boost/test/unit_test.hpp>
#include <ygo/data/Serialize.h>

BOOST_AUTO_TEST_SUITE(Serialize)

// check for round trip
#define RT_CHECK(x, t) ygo::data::t::x == \
    ygo::data::to##t (ygo::data::from##t (ygo::data::t::x))

BOOST_AUTO_TEST_CASE(CardType)
{
    BOOST_CHECK(RT_CHECK(MONSTER, CardType));
    BOOST_CHECK(RT_CHECK(SPELL, CardType));
    BOOST_CHECK(RT_CHECK(TRAP, CardType));
}

BOOST_AUTO_TEST_CASE(Attribute)
{
    BOOST_CHECK(RT_CHECK(NONE, Attribute));
    BOOST_CHECK(RT_CHECK(DARK, Attribute));
    BOOST_CHECK(RT_CHECK(DIVINE, Attribute));
    BOOST_CHECK(RT_CHECK(EARTH, Attribute));
    BOOST_CHECK(RT_CHECK(FIRE, Attribute));
    BOOST_CHECK(RT_CHECK(LIGHT, Attribute));
    BOOST_CHECK(RT_CHECK(WATER, Attribute));
    BOOST_CHECK(RT_CHECK(WIND, Attribute));
}

BOOST_AUTO_TEST_CASE(Type)
{
    BOOST_CHECK(RT_CHECK(NONE, Type));
    BOOST_CHECK(RT_CHECK(AQUA, Type));
    BOOST_CHECK(RT_CHECK(BEAST, Type));
    BOOST_CHECK(RT_CHECK(BEASTWARRIOR, Type));
    BOOST_CHECK(RT_CHECK(CREATORGOD, Type));
    BOOST_CHECK(RT_CHECK(DINOSAUR, Type));
    BOOST_CHECK(RT_CHECK(DIVINEBEAST, Type));
    BOOST_CHECK(RT_CHECK(DRAGON, Type));
    BOOST_CHECK(RT_CHECK(FAIRY, Type));
    BOOST_CHECK(RT_CHECK(FIEND, Type));
    BOOST_CHECK(RT_CHECK(FISH, Type));
    BOOST_CHECK(RT_CHECK(INSECT, Type));
    BOOST_CHECK(RT_CHECK(MACHINE, Type));
    BOOST_CHECK(RT_CHECK(PLANT, Type));
    BOOST_CHECK(RT_CHECK(PSYCHIC, Type));
    BOOST_CHECK(RT_CHECK(PYRO, Type));
    BOOST_CHECK(RT_CHECK(REPTILE, Type));
    BOOST_CHECK(RT_CHECK(ROCK, Type));
    BOOST_CHECK(RT_CHECK(SEASERPENT, Type));
    BOOST_CHECK(RT_CHECK(SPELLCASTER, Type));
    BOOST_CHECK(RT_CHECK(THUNDER, Type));
    BOOST_CHECK(RT_CHECK(WARRIOR, Type));
    BOOST_CHECK(RT_CHECK(WINGEDBEAST, Type));
    BOOST_CHECK(RT_CHECK(WYRM, Type));
    BOOST_CHECK(RT_CHECK(ZOMBIE, Type));
}

BOOST_AUTO_TEST_CASE(MonsterType)
{
    BOOST_CHECK(RT_CHECK(NONE, MonsterType));
    BOOST_CHECK(RT_CHECK(NORMAL, MonsterType));
    BOOST_CHECK(RT_CHECK(EFFECT, MonsterType));
    BOOST_CHECK(RT_CHECK(FUSION, MonsterType));
    BOOST_CHECK(RT_CHECK(RITUAL, MonsterType));
    BOOST_CHECK(RT_CHECK(SYNCHRO, MonsterType));
    BOOST_CHECK(RT_CHECK(XYZ, MonsterType));
    BOOST_CHECK(RT_CHECK(PENDULUM, MonsterType));
    BOOST_CHECK(RT_CHECK(TOKEN, MonsterType));
    BOOST_CHECK(RT_CHECK(FLIP, MonsterType));
    BOOST_CHECK(RT_CHECK(TOON, MonsterType));
    BOOST_CHECK(RT_CHECK(SPIRIT, MonsterType));
    BOOST_CHECK(RT_CHECK(UNION, MonsterType));
    BOOST_CHECK(RT_CHECK(GEMINI, MonsterType));
    BOOST_CHECK(RT_CHECK(TUNER, MonsterType));
}

BOOST_AUTO_TEST_CASE(SpellType)
{
    BOOST_CHECK(RT_CHECK(NONE, SpellType));
    BOOST_CHECK(RT_CHECK(NORMAL, SpellType));
    BOOST_CHECK(RT_CHECK(CONTINUOUS, SpellType));
    BOOST_CHECK(RT_CHECK(FIELD, SpellType));
    BOOST_CHECK(RT_CHECK(EQUIP, SpellType));
    BOOST_CHECK(RT_CHECK(QUICK, SpellType));
    BOOST_CHECK(RT_CHECK(RITUAL, SpellType));
}

BOOST_AUTO_TEST_CASE(TrapType)
{
    BOOST_CHECK(RT_CHECK(NONE, TrapType));
    BOOST_CHECK(RT_CHECK(NORMAL, TrapType));
    BOOST_CHECK(RT_CHECK(CONTINUOUS, TrapType));
    BOOST_CHECK(RT_CHECK(COUNTER, TrapType));
}

BOOST_AUTO_TEST_CASE(Location)
{
    BOOST_CHECK(RT_CHECK(DECK, Location));
    BOOST_CHECK(RT_CHECK(EXTRA, Location));
    BOOST_CHECK(RT_CHECK(HAND, Location));
    BOOST_CHECK(RT_CHECK(GRAVEYARD, Location));
    BOOST_CHECK(RT_CHECK(BANISHED, Location));
    BOOST_CHECK(RT_CHECK(FIELD, Location));
    BOOST_CHECK(RT_CHECK(LPENDULUM, Location));
    BOOST_CHECK(RT_CHECK(RPENDULUM, Location));
    BOOST_CHECK(RT_CHECK(LIMBO, Location));
    BOOST_CHECK(RT_CHECK(M1, Location));
    BOOST_CHECK(RT_CHECK(M2, Location));
    BOOST_CHECK(RT_CHECK(M3, Location));
    BOOST_CHECK(RT_CHECK(M4, Location));
    BOOST_CHECK(RT_CHECK(M5, Location));
    BOOST_CHECK(RT_CHECK(S1, Location));
    BOOST_CHECK(RT_CHECK(S2, Location));
    BOOST_CHECK(RT_CHECK(S3, Location));
    BOOST_CHECK(RT_CHECK(S4, Location));
    BOOST_CHECK(RT_CHECK(S5, Location));
}

BOOST_AUTO_TEST_CASE(Position)
{
    BOOST_CHECK(RT_CHECK(FACEDOWN, Position));
    BOOST_CHECK(RT_CHECK(FACEUP, Position));
}

BOOST_AUTO_TEST_CASE(BattlePosition)
{
    BOOST_CHECK(RT_CHECK(NONE, BattlePosition));
    BOOST_CHECK(RT_CHECK(ATTACK, BattlePosition));
    BOOST_CHECK(RT_CHECK(DEFENSE, BattlePosition));
}

BOOST_AUTO_TEST_CASE(Format)
{
    BOOST_CHECK(RT_CHECK(TRADITIONAL, Format));
    BOOST_CHECK(RT_CHECK(ADVANCED, Format));
}

BOOST_AUTO_TEST_CASE(Limitation)
{
    BOOST_CHECK(RT_CHECK(ILLEGAL, Limitation));
    BOOST_CHECK(RT_CHECK(FORBIDDEN, Limitation));
    BOOST_CHECK(RT_CHECK(LIMITED, Limitation));
    BOOST_CHECK(RT_CHECK(SEMILIMITED, Limitation));
    BOOST_CHECK(RT_CHECK(UNLIMITED, Limitation));
}

BOOST_AUTO_TEST_CASE(DeckType)
{
    BOOST_CHECK(RT_CHECK(MAIN, DeckType));
    BOOST_CHECK(RT_CHECK(SIDE, DeckType));
    BOOST_CHECK(RT_CHECK(EXTRA, DeckType));
}

void scd_check_eq(ygo::data::StaticCardData s, ygo::data::StaticCardData rts)
{
    BOOST_CHECK(s.name == rts.name);
    BOOST_CHECK(s.cardType == rts.cardType);
    BOOST_CHECK(s.attribute == rts.attribute);
    BOOST_CHECK(s.monsterType == rts.monsterType);
    BOOST_CHECK(s.type == rts.type);
    BOOST_CHECK(s.monsterAbility == rts.monsterAbility);
    BOOST_CHECK(s.level == rts.level);
    BOOST_CHECK(s.attack == rts.attack);
    BOOST_CHECK(s.defense == rts.defense);
    BOOST_CHECK(s.lpendulum == rts.lpendulum);
    BOOST_CHECK(s.rpendulum == rts.rpendulum);
    BOOST_CHECK(s.spellType == rts.spellType);
    BOOST_CHECK(s.trapType == rts.trapType);
    BOOST_CHECK(s.text == rts.text);
}

BOOST_AUTO_TEST_CASE(CardMap)
{
    ygo::data::StaticCardData c1 = {
        "Test1",
        ygo::data::CardType::MONSTER,
        ygo::data::Attribute::DARK,
        ygo::data::MonsterType::NORMAL,
        ygo::data::Type::BEAST,
        ygo::data::MonsterType::NONE,
        4,
        1000,
        2000,
        0,
        0,
        ygo::data::SpellType::NONE,
        ygo::data::TrapType::NONE,
        "Example card 1"
    };

    ygo::data::StaticCardData c2 = {
        "Test2",
        ygo::data::CardType::SPELL,
        ygo::data::Attribute::NONE,
        ygo::data::MonsterType::NONE,
        ygo::data::Type::NONE,
        ygo::data::MonsterType::NONE,
        0,
        0,
        0,
        0,
        0,
        ygo::data::SpellType::CONTINUOUS,
        ygo::data::TrapType::NONE,
        "Example card 2"
    };

    ygo::data::StaticCardData c3 = {
        "Test3",
        ygo::data::CardType::TRAP,
        ygo::data::Attribute::NONE,
        ygo::data::MonsterType::NONE,
        ygo::data::Type::NONE,
        ygo::data::MonsterType::NONE,
        0,
        0,
        0,
        0,
        0,
        ygo::data::SpellType::NONE,
        ygo::data::TrapType::COUNTER,
        "Example card 3"
    };

    ygo::data::StaticCardData c4 = {
        "Test4",
        ygo::data::CardType::TRAP,
        ygo::data::Attribute::NONE,
        ygo::data::MonsterType::NONE,
        ygo::data::Type::NONE,
        ygo::data::MonsterType::NONE,
        0,
        0,
        0,
        0,
        0,
        ygo::data::SpellType::NONE,
        ygo::data::TrapType::NORMAL,
        "Example card 4"
    };

    ygo::data::StaticCardData c5 = {
        "Test5",
        ygo::data::CardType::MONSTER,
        ygo::data::Attribute::FIRE,
        ygo::data::MonsterType::SYNCHRO,
        ygo::data::Type::DINOSAUR,
        ygo::data::MonsterType::EFFECT,
        8,
        2500,
        1700,
        0,
        0,
        ygo::data::SpellType::NONE,
        ygo::data::TrapType::NONE,
        "Example card 5"
    };

    ygo::data::CardMap deck = {
        {ygo::data::DeckType::MAIN, { c1, c2, c3 }},
        {ygo::data::DeckType::SIDE, { c2, c4 }},
        {ygo::data::DeckType::EXTRA, { c5 } } };
    auto main = deck[ygo::data::DeckType::MAIN];
    auto side = deck[ygo::data::DeckType::SIDE];
    auto extra = deck[ygo::data::DeckType::EXTRA];

    auto rtdeck = ygo::data::toCardMap(fromCardMap(deck));
    auto rtmain = rtdeck[ygo::data::DeckType::MAIN];
    auto rtside = rtdeck[ygo::data::DeckType::SIDE];
    auto rtextra = rtdeck[ygo::data::DeckType::EXTRA];

    BOOST_CHECK_EQUAL(deck.size(), rtdeck.size());
    BOOST_CHECK_EQUAL(main.size(), rtmain.size());
    BOOST_CHECK_EQUAL(side.size(), rtside.size());
    BOOST_CHECK_EQUAL(extra.size(), rtextra.size());

    for (auto i = 0; i < main.size(); i++) {
        scd_check_eq(main[i], rtmain[i]);
    }

    for (auto i = 0; i < side.size(); i++) {
        scd_check_eq(side[i], rtside[i]);
    }

    for (auto i = 0; i < extra.size(); i++) {
        scd_check_eq(extra[i], rtextra[i]);
    }
}

BOOST_AUTO_TEST_SUITE_END()
