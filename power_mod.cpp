#include "power_mod.h"

using namespace boost::multiprecision;

cpp_int power_mod(cpp_int base, cpp_int power, cpp_int mod) {
    if (power < 0 || mod <= 0) {
        return -1;
    }
    size_t step = 1;
    cpp_int mask = 1;
    // Searching for MSB
    while (mask < power) {
        mask <<= step;
        step <<= 1;
    }
    while (mask << 1 <= power || mask > power) {
        step >>= 1;
        if (mask > power) {
            mask >>= step;
        } else if (mask < power) {
            mask <<= step;
        }
    }

    cpp_int ret = 1;
    if (mask) {
        while (mask) {
            ret = (ret * ret) % mod;
            if (power & mask) {
                ret = (ret * base) % mod;
            }
            mask >>= 1;
        }
    }
    return (ret + mod) % mod;
}
