#include "classCargo.hpp"


class Fruit:public Cargo{
        int time_;
        const int ctime_;
    public:
        
        Fruit(std::string name, size_t amount, size_t basePrice,float time);
        Fruit& operator--();
        virtual size_t getPrice() const;
        virtual std::string getName() const; 
        virtual size_t getAmount() const;
        virtual size_t getBasePrice() const; 
};