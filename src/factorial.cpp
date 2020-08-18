#include "factorial.h"

int Factorial::fact( int n )
{
    return 
        n <= 1 ? n : fact( n - 1 ) * n;
}

Factorial::Factorial()
{
    // empty constructor
}