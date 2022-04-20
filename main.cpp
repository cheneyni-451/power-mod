#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

#include "power_mod.h"

using std::cout;

using namespace boost::multiprecision;

int main(int argc, char **argv) {
    if (argc != 4) {
        cout << "Usage: " << argv[0] << "<base> <power> <mod>" << '\n';
    }
    cpp_int base(argv[1]);
    cpp_int power(argv[2]);
    cpp_int mod(argv[3]);
    cout << power_mod(base, power, mod) << '\n';
}
