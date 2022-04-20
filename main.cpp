#include <iostream>
#include <string>

#include "power_mod.h"

using std::cout;
using std::string;

int main(int argc, char **argv) {
    if (argc != 4) {
        cout << "Usage: " << argv[0] << "<base> <power> <mod>" << '\n';
    }
    uint32_t base = std::stoul(argv[1]);
    uint64_t power = std::stoull(argv[2]);
    uint64_t mod = std::stoull(argv[3]);
    cout << power_mod(base, power, mod) << '\n';
}
