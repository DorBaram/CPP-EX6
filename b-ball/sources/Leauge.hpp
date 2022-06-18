#pragma once
#include "Game.hpp"
#include "Team.hpp"
#include "Schedule.hpp"
#include "schedule.hpp"
#include <unordered_map>
#include <vector>
using namespace std;
using namespace ariel;

#define NUM_OF_TEAMS 20;

class League{

    private:
        unordered_map<Team, int> league;
        vector<string> names;
        Schedule* schedule;
    
    public:

        League(vector<Team> teams = {});

        ~League(){}

        unordered_map<Team*, int> getTable();
        void sort_table();
        friend ostream &operator<<(ostream& output, const League& l1);
        vector<Team*> getLeaders(int);
        int winStreak();
        int lossStreak();
        int efficientTeams();
        Team* scoredMost();
        Team* leastScored();

};