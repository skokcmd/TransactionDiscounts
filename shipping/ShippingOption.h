#ifndef TRANSACTIONDISCOUNTS_SHIPPINGOPTION_H
#define TRANSACTIONDISCOUNTS_SHIPPINGOPTION_H


#include "PackageSize.h"
#include "Provider.h"

/**
 * @brief Class representing a shipping option
 */
class ShippingOption {
private:
    Provider provider;
    PackageSize size;
    double price;
public:
    /**
     * @brief Constructor for ShippingOption
     * @param provider The provider of the shipping option
     * @param size The size of the shipping option
     * @param price The price of the shipping option
     */
    ShippingOption(Provider provider, PackageSize size, double price);

    // getters and setters
    Provider getProvider() const;

    void setProvider(Provider provider);

    PackageSize getSize() const;

    void setSize(PackageSize size);

    double getPrice() const;

    void setPrice(double price);

};


#endif //TRANSACTIONDISCOUNTS_SHIPPINGOPTION_H
