#include <ygo/data/CardData.h>
#include <ygo/data/CardData_C.h>

#include <zephyr/cstring.h>

namespace ygo
{
namespace data
{

ygo_data_C_StaticCardData* staticDataToC(const StaticCardData& s)
{
    return new ygo_data_C_StaticCardData {
        zephyr::cstring::make_copy(s.name),
        s.cardType,
        s.attribute,
        s.monsterType,
        s.type,
        s.monsterAbility,
        s.level,
        s.attack,
        s.defense,
        s.lpendulum,
        s.rpendulum,
        s.spellType,
        s.trapType,
        zephyr::cstring::make_copy(s.text)
    };
}

void deleteCStaticData(ygo_data_C_StaticCardData* c)
{
    zephyr::cstring::delete_copy(c->name);
    zephyr::cstring::delete_copy(c->text);
    delete c;
}

}
}
