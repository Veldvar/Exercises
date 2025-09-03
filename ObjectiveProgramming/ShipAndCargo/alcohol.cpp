#include"alcohol.hpp"

Alcohol::Alcohol(std::string name, size_t amount, size_t basePrice)
:Cargo(name, amount, basePrice)
{}
size_t Alcohol::getPrice() const{};
std::string Alcohol::getName() const{};
size_t Alcohol::getAmount() const{};
size_t Alcohol::getBasePrice() const{};

