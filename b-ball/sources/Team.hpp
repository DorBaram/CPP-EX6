#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

namespace ariel{
    class Team{
    private:
        string name;        //the name of the team
        double skill;       //skill, in range of (0,1)
    public:
        Team(const string _name, const double _skill);      //name and skill, skill should be -1 if want to be rand
        ~Team();
        string getName();
        double getSkill();
 };
}