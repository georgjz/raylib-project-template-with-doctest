#include "factorial.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"


TEST_CASE("testing the fact function in class Factorial") 
{
    // class under test
    Factorial* cut = new Factorial();

    // run tests 
    CHECK( cut->fact(0) == 1 );
    CHECK( cut->fact(1) == 1 );
    CHECK( cut->fact(2) == 2 );
    CHECK( cut->fact(3) == 6 );
    CHECK( cut->fact(10) == 3628800 );

    // clean up 
    delete cut;
}