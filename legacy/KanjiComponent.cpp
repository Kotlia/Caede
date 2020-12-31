#include "KanjiComponent.h"

namespace me::kotlia
{

	KanjiComponent::KanjiComponent(const std::wstring &component)
	{
		this->component = component;
	}

	std::wstring KanjiComponent::format()
	{
		std::wstring temp = this->component;
		std::optional<int> counter;
		temp = temp.substr(1, (temp.length() - 1) - 1);
		std::vector<std::wstring> eachArr = StringHelper::trim(temp)->split(L"");

		int index = 0;
		for (auto s : eachArr)
		{
			if (!counter)
			{
				counter = 0;
			}
			else if (s.equals(L"["))
			{
				counter = counter + 1;
			}
			else if (s.equals(L"]"))
			{
				counter = counter - 1;
			}
			else if (counter == 0)
			{
				temp = temp.substr(0, index - 1) + L";" + temp.substr(index);
			}
			index++;
		}
		std::vector<std::wstring> arr = temp.split(L";");
		StringBuilder *res = new StringBuilder();
		std::wstring inner = L"";
		for (auto it : arr)
		{
			inner = it.substr(it.find(L",") + 2, (it.length() - 1) - (it.find(L",") + 2));
			res->append(inner.split(L",")[0]->replace(L"\"", L""));
		}

		delete res;
		return res->toString();
	}
}
