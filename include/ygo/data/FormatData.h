#ifndef YGO_DATA_FORMATDATA_H
#define YGO_DATA_FORMATDATA_H

#include <ygo/data/cpp/DataTypes.h>

#include <map>
#include <vector>

namespace ygo
{
namespace data
{

int deckMax(DeckType deckType);
int deckMin(DeckType deckType);
int cardLimitation(Limitation limitation, Format format);

typedef std::map<DeckType,std::vector<StaticCardData>> CardMap;

}
}

#endif
