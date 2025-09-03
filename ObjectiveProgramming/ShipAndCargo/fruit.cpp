#include "fruit.hpp"

Fruit::Fruit(std::string name, size_t amount, size_t basePrice,float time)
    :Cargo(name, amount, basePrice)
    ,time_(time)
    ,ctime_(time)
    {}   

Fruit& Fruit::operator--(){
    time_--;
    return *this;
};
size_t Fruit::getPrice() const{return basePrice_*time_/ctime_;};
std::string Fruit::getName() const{return name_;}; 
size_t Fruit::getAmount() const{return amount_;};
size_t Fruit::getBasePrice() const{return basePrice_;};