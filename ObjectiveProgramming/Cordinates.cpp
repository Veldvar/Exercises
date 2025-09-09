#include <iostream>
#include <cmath>
class Cordinates {
    public:
        Cordinates(size_t positionX, size_t positionY)
        : positionX_(positionX)
        , positionY_(positionY)
        {}
        size_t getPositionX_()const{return positionX_;}
        size_t getPositionY_()const{return positionY_;}
        static size_t distance(const Cordinates& lhs, const Cordinates& rhs){
            return std::sqrt(std::pow((int)lhs.positionX_ - (int)rhs.positionX_,2)+std::pow((int)lhs.positionY_ - (int)rhs.positionY_,2));
        }
        bool operator== (const Cordinates & rhs )const{
            return this-> positionX_ == rhs.positionX_ && this->positionY_ == rhs.positionY_;
        }       
    private:
        size_t positionX_=0;
        size_t positionY_=0;


};