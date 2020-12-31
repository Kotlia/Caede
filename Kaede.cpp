export module Kaede;

import Romaji;
import Kanji;
import <string>;
import <vector>;
import <iostream>;

namespace me::kotlia
{

	using Romaji = me::kotlia::Romaji;

	export class Kaede
	{
	private:
		static Romaji *romaji;
	public:
		static Kanji *kanji;

		static void main(std::vector<std::wstring> &args)
		{
			std::wcout << Kaede::romaji << std::endl;
		}
	};

}
