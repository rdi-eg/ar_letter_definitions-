#ifndef AR_LETTER_DEFINITIONS_H
#define AR_LETTER_DEFINITIONS_H

#include <string>

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
#define S_HAMZA            L"\u0621"
#define S_ALEF_MADDA       L"\u0622"
#define S_ALEF_HAMZA_ABOVE L"\u0623"
#define S_WAW_HAMZA_ABOVE  L"\u0624"
#define S_ALEF_HAMZA_BELOW L"\u0625"
#define S_YEH_HAMZA_ABOVE  L"\u0626"
#define S_ALEF_NO_HAMZA    L"\u0627"
#define S_BEH              L"\u0628"
#define S_TEH_MARBOOTA     L"\u0629"
#define S_TEH              L"\u062A"
#define S_THEH             L"\u062B"
#define S_JEEM             L"\u062C"
#define S_HAH              L"\u062D"
#define S_KHAH             L"\u062E"
#define S_DAL              L"\u062F"
#define S_THAL             L"\u0630"
#define S_REH              L"\u0631"
#define S_ZAIN             L"\u0632"
#define S_SEEN             L"\u0633"
#define S_SHEEN            L"\u0634"
#define S_SAD              L"\u0635"
#define S_DAD              L"\u0636"
#define S_TAH              L"\u0637"
#define S_ZAH              L"\u0638"
#define S_AIN              L"\u0639"
#define S_GHAIN            L"\u063A"
#define S_FEH              L"\u0641"
#define S_QAF              L"\u0642"
#define S_KAF              L"\u0643"
#define S_LAM              L"\u0644"
#define S_MEEM             L"\u0645"
#define S_NOON             L"\u0646"
#define S_HEH              L"\u0647"
#define S_WAW              L"\u0648"
#define S_YEH_NO_DOTS      L"\u0649"
#define S_YEH_WITH_DOTS    L"\u064A"
#define S_TATWEEL          L"\u0640"
#define S_TANWEEN_FATHA    L"\u064b"
#define S_TANWEEN_DAMA     L"\u064c"
#define S_TANWEEN_KASRA    L"\u064d"
#define S_FATHA            L"\u064e"
#define S_DAMA             L"\u064f"
#define S_KASRA            L"\u0650"
#define S_SHADA            L"\u0651"
#define S_SKOON            L"\u0652"

extern const wchar_t arabic_letters_with_tashkeel[] =
{
	HAMZA           ,
	ALEF_MADDA      ,
	ALEF_HAMZA_ABOVE,
	WAW_HAMZA_ABOVE ,
	ALEF_HAMZA_BELOW,
	YEH_HAMZA_ABOVE ,
	ALEF_NO_HAMZA   ,
	BEH             ,
	TEH_MARBOOTA    ,
	TEH             ,
	THEH            ,
	JEEM            ,
	HAH             ,
	KHAH            ,
	DAL             ,
	THAL            ,
	REH             ,
	ZAIN            ,
	SEEN            ,
	SHEEN           ,
	SAD             ,
	DAD             ,
	TAH             ,
	ZAH             ,
	AIN             ,
	GHAIN           ,
	FEH             ,
	QAF             ,
	KAF             ,
	LAM             ,
	MEEM            ,
	NOON            ,
	HEH             ,
	WAW             ,
	YEH_NO_DOTS     ,
	YEH_WITH_DOTS   ,
	TATWEEL         ,
	TANWEEN_FATHA   ,
	TANWEEN_DAMA    ,
	TANWEEN_KASRA   ,
	FATHA           ,
	DAMA            ,
	KASRA           ,
	SHADA           ,
	SKOON
};

extern const wchar_t arabic_letters_without_tashkeel[] =
{
	HAMZA           ,
	ALEF_MADDA      ,
	ALEF_HAMZA_ABOVE,
	WAW_HAMZA_ABOVE ,
	ALEF_HAMZA_BELOW,
	YEH_HAMZA_ABOVE ,
	ALEF_NO_HAMZA   ,
	BEH             ,
	TEH_MARBOOTA    ,
	TEH             ,
	THEH            ,
	JEEM            ,
	HAH             ,
	KHAH            ,
	DAL             ,
	THAL            ,
	REH             ,
	ZAIN            ,
	SEEN            ,
	SHEEN           ,
	SAD             ,
	DAD             ,
	TAH             ,
	ZAH             ,
	AIN             ,
	GHAIN           ,
	FEH             ,
	QAF             ,
	KAF             ,
	LAM             ,
	MEEM            ,
	NOON            ,
	HEH             ,
	WAW             ,
	YEH_NO_DOTS     ,
	YEH_WITH_DOTS
};

extern const std::wstring s_arabic_letters_with_tashkeel[] =
{
	S_HAMZA           ,
	S_ALEF_MADDA      ,
	S_ALEF_HAMZA_ABOVE,
	S_WAW_HAMZA_ABOVE ,
	S_ALEF_HAMZA_BELOW,
	S_YEH_HAMZA_ABOVE ,
	S_ALEF_NO_HAMZA   ,
	S_BEH             ,
	S_TEH_MARBOOTA    ,
	S_TEH             ,
	S_THEH            ,
	S_JEEM            ,
	S_HAH             ,
	S_KHAH            ,
	S_DAL             ,
	S_THAL            ,
	S_REH             ,
	S_ZAIN            ,
	S_SEEN            ,
	S_SHEEN           ,
	S_SAD             ,
	S_DAD             ,
	S_TAH             ,
	S_ZAH             ,
	S_AIN             ,
	S_GHAIN           ,
	S_FEH             ,
	S_QAF             ,
	S_KAF             ,
	S_LAM             ,
	S_MEEM            ,
	S_NOON            ,
	S_HEH             ,
	S_WAW             ,
	S_YEH_NO_DOTS     ,
	S_YEH_WITH_DOTS   ,
	S_TATWEEL         ,
	S_TANWEEN_FATHA   ,
	S_TANWEEN_DAMA    ,
	S_TANWEEN_KASRA   ,
	S_FATHA           ,
	S_DAMA            ,
	S_KASRA           ,
	S_SHADA           ,
	S_SKOON
};

extern const std::wstring s_arabic_letters_without_tashkeel[] =
{
	S_HAMZA           ,
	S_ALEF_MADDA      ,
	S_ALEF_HAMZA_ABOVE,
	S_WAW_HAMZA_ABOVE ,
	S_ALEF_HAMZA_BELOW,
	S_YEH_HAMZA_ABOVE ,
	S_ALEF_NO_HAMZA   ,
	S_BEH             ,
	S_TEH_MARBOOTA    ,
	S_TEH             ,
	S_THEH            ,
	S_JEEM            ,
	S_HAH             ,
	S_KHAH            ,
	S_DAL             ,
	S_THAL            ,
	S_REH             ,
	S_ZAIN            ,
	S_SEEN            ,
	S_SHEEN           ,
	S_SAD             ,
	S_DAD             ,
	S_TAH             ,
	S_ZAH             ,
	S_AIN             ,
	S_GHAIN           ,
	S_FEH             ,
	S_QAF             ,
	S_KAF             ,
	S_LAM             ,
	S_MEEM            ,
	S_NOON            ,
	S_HEH             ,
	S_WAW             ,
	S_YEH_NO_DOTS     ,
	S_YEH_WITH_DOTS
};

#endif // AR_LETTER_DEFINITIONS_H
