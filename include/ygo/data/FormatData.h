#ifndef YGO_DATA_FORMATDATA_H
#define YGO_DATA_FORMATDATA_H

#include "CardData.h"

#include <map>
#include <vector>

namespace ygo
{
namespace data
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

typedef std::map<DeckType,std::vector<StaticCardData>> CardMap;
static const unsigned ZONE_COUNT = 5;
static const unsigned OPENING_HAND = 5;

}
}

#endif
