#include <ygo/data/FormatData.h>

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
                case Format::MEGABANNED: return 0;
            }
        }
        case Limitation::LIMITED:
            switch (format) {
                case Format::TRADITIONAL: return 1;
                case Format::ADVANCED: return 1;
                case Format::MEGABANNED: return 0;
            }
        case Limitation::SEMILIMITED:
            switch (format) {
                case Format::TRADITIONAL: return 2;
                case Format::ADVANCED: return 2;
                case Format::MEGABANNED: return 0;
            }
        case Limitation::UNLIMITED: return 3;
    }
}

}
}
