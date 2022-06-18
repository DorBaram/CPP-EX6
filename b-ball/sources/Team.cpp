#include "Team.hpp"

namespace ariel{
    Team::Team(const string _name, const double _skill){
        this->name = _name;
        if (_skill <= -1){      
            this->skill = rand()/RAND_MAX;      //generates a random number between 0,1
        }
        else{
            this->skill = _skill;
        }
        
    }
    Team::~Team(){
        
    }
    string Team::getName(){
        return this->name;
    }
    double Team::getSkill(){
        return this->skill;
    }
}