#include "item.hpp"

Item::Item(std::string name, size_t amount, size_t basePrice)
:Cargo(name, amount, basePrice)
{}
size_t Item::getPrice() const{};
std::string Item::getName() const{};
size_t Item::getAmount() const{};
size_t Item::getBasePrice() const{};
