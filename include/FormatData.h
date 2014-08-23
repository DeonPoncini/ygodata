#ifndef YGO_FORMATDATA_H
#define YGO_FORMATDATA_H

#include <map>

namespace ygo
{

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

int DeckMax(DeckType deckType);
int DeckMin(DeckType deckType);
int CardLimitation(Limitation limitation, Format format);

}

#endif
