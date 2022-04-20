#include "power_mod.h"

uint64_t power_mod(uint32_t base, uint64_t power, uint32_t mod) {
    uint64_t mask = 1UL << 63;
    uint64_t ret = 1;
    // Shift until first 1 bit
    while (!(power & mask)) {
        mask >>= 1;
    }
    if (mask) {
        while (mask) {
            ret = (ret * ret) % mod;
            if (power & mask) {
                ret = (ret * base) % mod;
            }
            mask >>= 1;
        }
    } else {
        return 1;
    }
    return ret;
}
