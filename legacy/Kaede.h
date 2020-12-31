#pragma once

#include "Romaji.h"
#include "Kanji.h"
#include <string>
#include <vector>
#include <iostream>

namespace me::kotlia
{

	using Romaji = me::kotlia::Romaji;

	class Kaede
	{
	private:
		static Romaji *romaji;
	public:
		static Kanji *kanji;

		static void main(std::vector<std::wstring> &args);
	};

}
