#include<iostream>
#include<string>
#include "classShip.hpp"



        //default init
        Ship::Ship()
        :id_(-1)
        {}
        
        //Initate
        Ship::Ship(size_t id, const std::string &name, size_t speed, size_t maxCrew, size_t capacity)
            :
            id_(id)
            , name_(name)
            , speed_(speed)
            , maxCrew_(maxCrew)
            , capacity_(capacity)
            , crew_(0)
        {}
        //Convevience
        Ship::Ship(size_t id,size_t speed,size_t maxCrew)
            :Ship(id, "", speed, maxCrew, 0)
        {}

        Ship& Ship::operator+=(size_t i){
            crew_+=i;
            return *this;
        }
        Ship& Ship::operator-=(size_t i){
            crew_-=i;
            return *this;
        }

        void Ship::setName(const std::string &name){
            name_=name;
        }
        size_t Ship::getId() const {return id_;}
        std::string Ship::getName() const {return name_;}
        size_t Ship::getSpeed() const {return speed_;}
        size_t Ship::getMaxCrew() const {return maxCrew_;}
        size_t Ship::getCapacity() const {return capacity_;}
        size_t Ship::getCrew()const{return crew_;}

        