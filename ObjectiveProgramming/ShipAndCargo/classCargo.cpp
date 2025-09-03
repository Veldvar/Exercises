#include <string>
#include "classCargo.hpp"


    Cargo::Cargo(std::string name, size_t amount, size_t basePrice)
        :   name_(name)
        ,   amount_(amount)
        ,   basePrice_(basePrice)
        {}    
    Cargo& Cargo::operator+= (const size_t i){amount_+=i; return *this;}
    Cargo& Cargo::operator-= (const size_t i){amount_-=i; return *this;} 


