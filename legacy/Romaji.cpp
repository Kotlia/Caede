#include "Romaji.h"

namespace me::kotlia
{
	using Transliterator = com::ibm::icu::text::Transliterator;

	std::wstring Romaji::hiraganize(const std::wstring &text)
	{
		return Transliterator::getInstance(L"Latin-Hiragana").transliterate(text);
	}

	std::wstring Romaji::romanize(const std::wstring &text)
	{
		return Transliterator::getInstance(L"Hiragana-Latin").transliterate(text);
	}
}
