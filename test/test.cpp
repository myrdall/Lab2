#include "../thirdparty/catch.hpp"
#include "../functions.h"

#define CATCH_CONFIG_MAIN


TEST_CASE("check first perscent function"){

        int n = 1000;

        int percent = 10;

        int percent_amount = n * percent / 100;

        int income = n - percent_amount;
        
        REQUIRE(percent_amount == 100);
        REQUIRE(income == 900);

        } 
        


