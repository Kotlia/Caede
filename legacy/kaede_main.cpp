#pragma once

#include <string>
#include <vector>
#include "Kaede.h"

int main(int argc, char **argv)
{
    std::vector<std::wstring> args(argv + 1, argv + argc);
    me::kotlia::Kaede::main(args);
}

