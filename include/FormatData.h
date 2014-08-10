#ifndef YGO_FORMATDATA_H
#define YGO_FORMATDATA_H

namespace ygo
{

static const int PRIMARY_DECK_MIN = 40;
static const int PRIMARY_DECK_MAX = 60;

static const int EXTRA_DECK_MIN = 0;
static const int EXTRA_DECK_MAX = 15;

static const int SIDE_DECK_MIN = 0;
static const int SIDE_DECK_MAX = 15;

enum class Format
{
    TRADITIONAL,
    ADVANCED
};

enum class Limitation
{
    ILLEGAL,
    FORBIDDEN,
    LIMITED,
    SEMILIMITED,
    UNLIMITED
};

enum class DeckType
{
    MAIN,
    SIDE,
    EXTRA
};

}

#endif
