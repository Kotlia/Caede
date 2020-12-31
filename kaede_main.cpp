export module ;

import <string>;
import <vector>;
#include "Kaede.cpp"

int main(int argc, char **argv)
{
    std::vector<std::wstring> args(argv + 1, argv + argc);
    me::kotlia::Kaede::main(args);
}

