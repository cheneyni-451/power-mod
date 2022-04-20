#ifndef POWER_MOD_H
#define POWER_MOD_H

#include <boost/multiprecision/cpp_int.hpp>

/**
 * @brief Computes base^(power) % mod.
 */
boost::multiprecision::cpp_int power_mod(boost::multiprecision::cpp_int base,
                                         boost::multiprecision::cpp_int power,
                                         boost::multiprecision::cpp_int mod);

#endif /* POWER_MOD_H */
