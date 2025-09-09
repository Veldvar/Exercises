#include "item.hpp"

Item::Item(std::string name, size_t amount, size_t basePrice,Rarity rarity)
:Cargo(name, amount, basePrice)
,rarity_(rarity)
{}
size_t Item::getPrice() const
{
    switch(rarity_)
    {
        case Rarity::common: return basePrice_ * amount_;
        case Rarity::rare: return basePrice_ * amount_* 2;
        case Rarity::epic: return basePrice_ * amount_* 3;
        case Rarity::legendary: return basePrice_ * amount_* 4;
        default: return basePrice_ * amount_;
    }
};
std::string Item::getName() const{return name_;}
size_t Item::getAmount() const{return amount_;}
size_t Item::getBasePrice() const{return basePrice_;}
Item::Rarity Item::getRarity()const{return rarity_;}