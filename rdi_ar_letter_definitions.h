#ifndef AR_LETTER_DEFINITIONS_H
#define AR_LETTER_DEFINITIONS_H

#include <string>
#include <vector>

/// If all you need is the below macro definitions for the Arabic alphabet then you can
/// just include this header. You don't need to link to the library.
/// However if you're interested in the definitions of the maps, vectors and
/// conversion functions then you must link your program to this library

#define FASLA            L'\u060C'
#define QUESTION_MARK    L'\u061F'
#define FASLA_MANKOOTA   L'\u060B'
#define HAMZA            L'\u0621'
#define ALEF_MADDA       L'\u0622'
#define ALEF_HAMZA_ABOVE L'\u0623'
#define WAW_HAMZA_ABOVE  L'\u0624'
#define ALEF_HAMZA_BELOW L'\u0625'
#define YEH_HAMZA_ABOVE  L'\u0626'
#define ALEF_NO_HAMZA    L'\u0627'
#define BEH              L'\u0628'
#define TEH_MARBOOTA     L'\u0629'
#define TEH              L'\u062A'
#define THEH             L'\u062B'
#define JEEM             L'\u062C'
#define HAH              L'\u062D'
#define KHAH             L'\u062E'
#define DAL              L'\u062F'
#define THAL             L'\u0630'
#define REH              L'\u0631'
#define ZAIN             L'\u0632'
#define SEEN             L'\u0633'
#define SHEEN            L'\u0634'
#define SAD              L'\u0635'
#define DAD              L'\u0636'
#define TAH              L'\u0637'
#define ZAH              L'\u0638'
#define AIN              L'\u0639'
#define GHAIN            L'\u063A'
#define FEH              L'\u0641'
#define QAF              L'\u0642'
#define KAF              L'\u0643'
#define LAM              L'\u0644'
#define MEEM             L'\u0645'
#define NOON             L'\u0646'
#define HEH              L'\u0647'
#define WAW              L'\u0648'
#define YEH_NO_DOTS      L'\u0649'
#define YEH_WITH_DOTS    L'\u064A'
#define TATWEEL          L'\u0640'
#define TANWEEN_FATHA    L'\u064b'
#define TANWEEN_DAMA     L'\u064c'
#define TANWEEN_KASRA    L'\u064d'
#define FATHA            L'\u064e'
#define DAMA             L'\u064f'
#define KASRA            L'\u0650'
#define SHADA            L'\u0651'
#define SKOON            L'\u0652'

// same thing but strings instead of chars

#define S_FASLA            std::wstring(L"\u060C")
#define S_QUESTION_MARK    std::wstring(L"\u061F")
#define S_FASLA_MANKOOTA   std::wstring(L"\u061B")
#define S_HAMZA            std::wstring(L"\u0621")
#define S_ALEF_MADDA       std::wstring(L"\u0622")
#define S_ALEF_HAMZA_ABOVE std::wstring(L"\u0623")
#define S_WAW_HAMZA_ABOVE  std::wstring(L"\u0624")
#define S_ALEF_HAMZA_BELOW std::wstring(L"\u0625")
#define S_YEH_HAMZA_ABOVE  std::wstring(L"\u0626")
#define S_ALEF_NO_HAMZA    std::wstring(L"\u0627")
#define S_BEH              std::wstring(L"\u0628")
#define S_TEH_MARBOOTA     std::wstring(L"\u0629")
#define S_TEH              std::wstring(L"\u062A")
#define S_THEH             std::wstring(L"\u062B")
#define S_JEEM             std::wstring(L"\u062C")
#define S_HAH              std::wstring(L"\u062D")
#define S_KHAH             std::wstring(L"\u062E")
#define S_DAL              std::wstring(L"\u062F")
#define S_THAL             std::wstring(L"\u0630")
#define S_REH              std::wstring(L"\u0631")
#define S_ZAIN             std::wstring(L"\u0632")
#define S_SEEN             std::wstring(L"\u0633")
#define S_SHEEN            std::wstring(L"\u0634")
#define S_SAD              std::wstring(L"\u0635")
#define S_DAD              std::wstring(L"\u0636")
#define S_TAH              std::wstring(L"\u0637")
#define S_ZAH              std::wstring(L"\u0638")
#define S_AIN              std::wstring(L"\u0639")
#define S_GHAIN            std::wstring(L"\u063A")
#define S_FEH              std::wstring(L"\u0641")
#define S_QAF              std::wstring(L"\u0642")
#define S_KAF              std::wstring(L"\u0643")
#define S_LAM              std::wstring(L"\u0644")
#define S_MEEM             std::wstring(L"\u0645")
#define S_NOON             std::wstring(L"\u0646")
#define S_HEH              std::wstring(L"\u0647")
#define S_WAW              std::wstring(L"\u0648")
#define S_YEH_NO_DOTS      std::wstring(L"\u0649")
#define S_YEH_WITH_DOTS    std::wstring(L"\u064A")
#define S_TATWEEL          std::wstring(L"\u0640")
#define S_TANWEEN_FATHA    std::wstring(L"\u064b")
#define S_TANWEEN_DAMA     std::wstring(L"\u064c")
#define S_TANWEEN_KASRA    std::wstring(L"\u064d")
#define S_FATHA            std::wstring(L"\u064e")
#define S_DAMA             std::wstring(L"\u064f")
#define S_KASRA            std::wstring(L"\u0650")
#define S_SHADA            std::wstring(L"\u0651")
#define S_SKOON            std::wstring(L"\u0652")

namespace RDI
{

extern const std::vector<wchar_t> _arabic_letters_with_tashkeel;
extern const std::vector<wchar_t> _arabic_letters_without_tashkeel;
extern const std::vector<std::wstring> _s_arabic_letters_with_tashkeel;
extern const std::vector<std::wstring> _s_arabic_letters_without_tashkeel;
extern const std::vector<wchar_t> _arabic_letters_with_symbols;

}
#endif // AR_LETTER_DEFINITIONS_H
