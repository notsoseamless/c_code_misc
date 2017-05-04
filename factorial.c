#include <stdio.h>
#include "factorial.h"

int factorial(unsigned int number)
{
    if(number <= 1)
        return 1;
    return number * factorial(number - 1);
}

