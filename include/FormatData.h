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

static std::map<DeckType,std::pair<int,int>> DeckLimits =
{
    {DeckType::MAIN,{40,60}},
    {DeckType::SIDE,{0,15}},
    {DeckType::EXTRA,{0,15}},
};

}

#endif
