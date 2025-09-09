#include "fruit.hpp"

Fruit::Fruit(std::string name, size_t amount, size_t basePrice,size_t expiryTime, size_t elapsedTime)
    :Cargo(name, amount, basePrice)
    ,expiryTime_(expiryTime)
    ,elapsedTime_(elapsedTime)
    {}   

size_t Fruit::getPrice() const
{   
    if(expiryTime_>=elapsedTime_) 
        return 0;
    return static_cast<size_t>(
        basePrice_ * (static_cast<float>(expiryTime_ - elapsedTime_)/elapsedTime_)
    );
}
std::string Fruit::getName() const{return name_;} 
size_t Fruit::getAmount() const{return amount_;}
size_t Fruit::getBasePrice() const{return basePrice_;}
float Fruit::getTime()const {return expiryTime_;}