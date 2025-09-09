#include"alcohol.hpp"

Alcohol::Alcohol(std::string name, size_t amount, size_t basePrice,size_t percentage)
    :Cargo(name, amount, basePrice)
    ,percentage_(percentage)
{}
size_t Alcohol::getPrice() const{return static_cast<size_t>(basePrice_*amount_*static_cast<double>(percentage_)/96.0);}
std::string Alcohol::getName() const{return name_;};
size_t Alcohol::getAmount() const{return amount_;};
size_t Alcohol::getBasePrice() const{return basePrice_;};
size_t Alcohol::getPercentage()const{return percentage_;}

