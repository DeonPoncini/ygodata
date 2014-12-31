#ifndef YGO_DATA_FORMATDATA_H
#define YGO_DATA_FORMATDATA_H

#include <ygo/data/cpp/DataTypes.h>

#include <map>
#include <vector>

namespace ygo
{
namespace data
{

int DeckMax(DeckType deckType);
int DeckMin(DeckType deckType);
int CardLimitation(Limitation limitation, Format format);

typedef std::map<DeckType,std::vector<StaticCardData>> CardMap;

}
}

#endif
