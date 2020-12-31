#include "Kaede.h"

namespace me::kotlia
{
	using Romaji = me::kotlia::Romaji;
me::kotlia::Romaji *Kaede::romaji;
Kanji *Kaede::kanji;

	void Kaede::main(std::vector<std::wstring> &args)
	{
		std::wcout << Kaede::romaji << std::endl;
	}
}
