#ifndef POWER_MOD_H
#define POWER_MOD_H

#include <cstdint>

/**
 * @brief Computes base^(power) % mod.
 */
uint64_t power_mod(uint32_t base, uint64_t power, uint32_t mod);

#endif /* POWER_MOD_H */
