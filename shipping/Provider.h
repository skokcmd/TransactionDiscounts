#ifndef TRANSACTIONDISCOUNTS_PROVIDER_H
#define TRANSACTIONDISCOUNTS_PROVIDER_H

#include <ostream>

/**
 * @brief Enum for provider types
 */
enum class Provider {
    LP,
    MR
};

/**
 * @brief Operator for printing provider to ostream
 * @param os
 * @param provider
 * @return std::ostream reference
 */
std::ostream& operator<<(std::ostream& os, const Provider& provider);

#endif //TRANSACTIONDISCOUNTS_PROVIDER_H
