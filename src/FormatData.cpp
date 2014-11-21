#include "FormatData.h"

namespace ygo
{
namespace data
{

int DeckMax(DeckType deckType)
{
    switch (deckType) {
        case DeckType::MAIN: return 60;
        case DeckType::SIDE: return 15;
        case DeckType::EXTRA: return 15;
    }
}

int DeckMin(DeckType deckType)
{
    switch (deckType) {
        case DeckType::MAIN: return 40;
        case DeckType::SIDE: return 0;
        case DeckType::EXTRA: return 0;
    }
}

int CardLimitation(Limitation limitation, Format format)
{
    switch (limitation) {
        case Limitation::ILLEGAL: return 0;
        case Limitation::FORBIDDEN: {
            switch (format) {
                case Format::TRADITIONAL: return 1;
                case Format::ADVANCED: return 0;
            }
        }
        case Limitation::LIMITED: return 1;
        case Limitation::SEMILIMITED: return 2;
        case Limitation::UNLIMITED: return 3;
    }
}
}
}
