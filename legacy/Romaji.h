#pragma once

#include <string>

namespace me::kotlia
{


	class Romaji
	{
	public:
		static std::wstring hiraganize(const std::wstring &text);
		static std::wstring romanize(const std::wstring &text);
	};

}
