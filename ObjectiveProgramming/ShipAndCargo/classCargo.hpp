#include<string>
#include<iostream>

class  Cargo {

    public:
        Cargo(std::string name, size_t amount, size_t basePrice); 
        
        Cargo& operator+= (const size_t i);
        Cargo& operator-= (const size_t i);
        
        virtual size_t getPrice() const = 0;
        virtual std::string getName() const = 0;
        virtual size_t getAmount() const = 0;
        virtual size_t getBasePrice() const = 0;
    
    protected:
        std::string name_;
        size_t amount_;
        size_t basePrice_;
            
};


