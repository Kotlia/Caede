#pragma once

#include <string>
#include <vector>
#include <optional>
#include "stringhelper.h"
#include "stringbuilder.h"

namespace me::kotlia
{

	class KanjiComponent
	{
	private:
		std::wstring component;
	public:
		KanjiComponent(const std::wstring &component);
		virtual std::wstring format();
	};

}
