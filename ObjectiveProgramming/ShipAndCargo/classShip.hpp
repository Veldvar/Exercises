#include<iostream>
#include<string>


class Ship
{
    public:
        //default init
        Ship();
        //Initate
        Ship(size_t id, const std::string &name, size_t speed, size_t maxCrew, size_t capacity);
        //Convevience
        Ship(size_t id,size_t speed,size_t maxCrew);
        
        Ship& operator+=(size_t i);
        Ship& operator-=(size_t i);

        void setName(const std::string &name);
        size_t getId() const;
        std::string getName() const;
        size_t getSpeed() const;
        size_t getMaxCrew() const;
        size_t getCapacity() const;
        size_t getCrew()const;

      
        



    private:
        const size_t id_;
        std::string name_;
        size_t speed_;
        size_t maxCrew_;
        size_t capacity_;
        size_t crew_;

};