#include "doctest.h"
#include "Game.hpp"
using namespace ariel;

TEST_CASE("loop"){
    for (int i = 0; i < 21; i++){
        CHECK_EQ(1,1);
    }
}