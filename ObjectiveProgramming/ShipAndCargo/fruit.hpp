#include "classCargo.hpp"


class Fruit:public Cargo{  
protected:   
    size_t expiryTime_;
    size_t elapsedTime_;
public:
    
    Fruit(std::string name, size_t amount, size_t basePrice,size_t expiryTime, size_t elapsedTime);
    ~Fruit(){};
    size_t getPrice() const override;
    std::string getName() const override; 
    size_t getAmount() const override;
    size_t getBasePrice() const override;
    float getTime()const;
    
    Cargo& operator--() {--amount_;return *this;}
    
    Cargo& operator+=(size_t amount) {
        amount_ += amount;
        return *this;
    }
    Cargo& operator-=(size_t amount) {
        amount_ -= amount;
        return *this;};
    };