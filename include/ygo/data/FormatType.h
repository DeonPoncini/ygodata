#ifndef YGO_DATA_FORMATTYPE_H
#define YGO_DATA_FORMATTYPE_H

#include <zephyr/CExport.h>

Z_NS_START(ygo)
Z_NS_START(data)

Z_ENUM_CLASS(ygo_data, Format)
{
    TRADITIONAL,
    ADVANCED
};

Z_ENUM_CLASS(ygo_data, Limitation)
{
    ILLEGAL,
    FORBIDDEN,
    LIMITED,
    SEMILIMITED,
    UNLIMITED
};

Z_ENUM_CLASS(ygo_data, DeckType)
{
    MAIN,
    SIDE,
    EXTRA
};

static const unsigned Z_VAR(ygo_data, ZONE_COUNT) = 5;
static const unsigned Z_VAR(ygo_data, OPENING_HAND) = 5;

Z_NS_END
Z_NS_END

#endif
