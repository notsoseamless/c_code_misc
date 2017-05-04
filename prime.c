#include <stdio.h>
#include "prime.h"


#define PRIME_STORE (25)

/* list of known primes */
const unsigned int primes[PRIME_STORE]=
{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};



/******************************************************************************
 * prototypes
 ******************************************************************************/
static void print_banner(void);





/******************************************************************************
 * public functions
 ******************************************************************************/

/* returns true if num is prime */
unsigned int IsPrime(unsigned int num)
{
    unsigned int index;
    unsigned int result;
    
    print_banner();
    
    result = 0;
    for(index=0; index<PRIME_STORE; index++)
    {
        /*printf("            %d mod %d = %d\n", num , primes[index], (num % primes[index]));*/
        
        if(num == primes[index])
        {
            /* num is a prime */
            result = 1;
        }
        else if(0 == (num % primes[index]))
        {
            /* divisable by a prime, so is NOT a prime */
            result = 0;
            break;
        }
        else
        {
            /* must be a prime then */
            result = 1;
        }
    }
    return result;
}

/* return true if a and b are coprime */
unsigned int AreCoPrime(const unsigned int a, const unsigned int b)
{
    unsigned int result;
    
    print_banner();
    
  
    
    
    return result;
}



/******************************************************************************
 * private functions
 ******************************************************************************/



static void print_banner(void)
{
    printf("\n\n\n");
    printf("###########################################################\n");
    printf("#                                                         #\n");
    printf("#                         PRIMES                          #\n");
    printf("#                                                         #\n");
    printf("###########################################################\n");
}

