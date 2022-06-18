#include "Team.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

namespace ariel{
class Game{
private:
    Team teamHome;
    Team teamAway;
    string winner;
    vector<int> score;
public:
    Game();
    Game(Team t1, Team t2);
    ~Game();
    string winner();
    int randScore(Team t1);
    };
}
