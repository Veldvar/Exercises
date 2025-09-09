#include "classCargo.hpp"

class Alcohol:public Cargo{
    public:
        Alcohol(std::string name, size_t amount, size_t basePrice,size_t percentage);
        ~Alcohol(){};
         size_t getPrice()  const override;
         std::string getName() const override;
         size_t getAmount() const override;
         size_t getBasePrice() const override;
         size_t getPercentage()const ;
        
        Cargo& operator+=(size_t amount) {
            amount_ += amount;
            return *this;
        }
        Cargo& operator-=(size_t amount) {
            amount_ -= amount;
            return *this;
        }
    private:
    size_t percentage_;
    };
