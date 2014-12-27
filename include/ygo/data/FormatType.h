#ifndef YGO_DATA_FORMATTYPE_H
#define YGO_DATA_FORMATTYPE_H

#include <zephyr/CExport.h>

Z_NS_START(ygo)
Z_NS_START(data)

Z_ENUM_CLASS ZD(ygo)ZD(data)Format
{
    ZD(ygo)ZD(data)ZD(Format)TRADITIONAL,
    ZD(ygo)ZD(data)ZD(Format)ADVANCED
};

Z_ENUM_CLASS ZD(ygo)ZD(data)Limitation
{
    ZD(ygo)ZD(data)ZD(Limitation)ILLEGAL,
    ZD(ygo)ZD(data)ZD(Limitation)FORBIDDEN,
    ZD(ygo)ZD(data)ZD(Limitation)LIMITED,
    ZD(ygo)ZD(data)ZD(Limitation)SEMILIMITED,
    ZD(ygo)ZD(data)ZD(Limitation)UNLIMITED
};

Z_ENUM_CLASS ZD(ygo)ZD(data)DeckType
{
    ZD(ygo)ZD(data)ZD(DeckType)MAIN,
    ZD(ygo)ZD(data)ZD(DeckType)SIDE,
    ZD(ygo)ZD(data)ZD(DeckType)EXTRA
};

static const unsigned ZD(ygo)ZD(data)ZONE_COUNT = 5;
static const unsigned ZD(ygo)ZD(data)OPENING_HAND = 5;

Z_NS_END
Z_NS_END

#endif
