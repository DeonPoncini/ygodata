#ifndef YGO_DATA_CARDDATA_H
#define YGO_DATA_CARDDATA_H

#include <string>

#include <ygo/data/c/DataTypes.h>
#include <ygo/data/cpp/DataTypes.h>

namespace ygo
{
namespace data
{

ygo_data_StaticCardData* staticDataToC(const StaticCardData& s);
void deleteCStaticData(ygo_data_StaticCardData* c);

}
}

#endif
