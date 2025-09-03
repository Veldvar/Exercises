#include "classCargo.hpp"

class Item:public Cargo{
    public:
        Item(std::string name, size_t amount, size_t basePrice);
        virtual size_t getPrice() const;
        virtual std::string getName() const;
        virtual size_t getAmount() const;
        virtual size_t getBasePrice() const;
};