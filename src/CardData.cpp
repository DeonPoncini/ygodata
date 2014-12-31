#include <ygo/data/CardData.h>

#include <zephyr/cstring.h>

namespace ygo
{
namespace data
{

ygo_data_StaticCardData* staticDataToC(const StaticCardData& s)
{
    return new ygo_data_StaticCardData {
        zephyr::cstring::make_copy(s.name),
        static_cast<ygo_data_CardType>(s.cardType),
        static_cast<ygo_data_Attribute>(s.attribute),
        static_cast<ygo_data_MonsterType>(s.monsterType),
        static_cast<ygo_data_Type>(s.type),
        static_cast<ygo_data_MonsterType>(s.monsterAbility),
        s.level,
        s.attack,
        s.defense,
        s.lpendulum,
        s.rpendulum,
        static_cast<ygo_data_SpellType>(s.spellType),
        static_cast<ygo_data_TrapType>(s.trapType),
        zephyr::cstring::make_copy(s.text)
    };
}

void deleteCStaticData(ygo_data_StaticCardData* c)
{
    zephyr::cstring::delete_copy(c->name);
    zephyr::cstring::delete_copy(c->text);
    delete c;
}

}
}
