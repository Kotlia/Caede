export module Romaji;

import <string>;

namespace me::kotlia
{

	using Transliterator = com::ibm::icu::text::Transliterator;

	export class Romaji
	{
	public:
		static std::wstring hiraganize(const std::wstring &text)
		{
			return Transliterator::getInstance(L"Latin-Hiragana").transliterate(text);
		}
		static std::wstring romanize(const std::wstring &text)
		{
			return Transliterator::getInstance(L"Hiragana-Latin").transliterate(text);
		}
	};

}
