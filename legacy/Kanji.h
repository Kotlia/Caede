#pragma once

#include "KanjiComponent.h"
#include <string>

namespace me::kotlia
{

	using IOException = java::io::IOException;

	class Kanji
	{
	public:
		static std::wstring encodeURIComponent(const std::wstring &str);
		static KanjiComponent *toKanji(const std::wstring &str);
	};

}
