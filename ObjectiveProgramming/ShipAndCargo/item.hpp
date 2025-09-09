#include "classCargo.hpp"

class Item:public Cargo{
    public:
        enum class Rarity{
            common,
            rare,
            epic,
            legendary
        };
        Item(std::string name, size_t amount, size_t basePrice, Rarity rarity);
        ~Item(){};
        virtual size_t getPrice() const;
        virtual std::string getName() const;
        virtual size_t getAmount() const;
        virtual size_t getBasePrice() const;
        virtual Rarity getRarity()const{};
        Cargo& operator+=(size_t amount) {
            amount_ += amount;
            return *this;
    }
        Cargo& operator-=(size_t amount) {
            amount_ -= amount;
            return *this;
    }
    private:
        Rarity rarity_;
};