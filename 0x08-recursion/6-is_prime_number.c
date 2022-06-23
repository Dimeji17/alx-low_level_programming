#include "main.h"

int is_prime_number(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return(0);
        }
        else if (n%i != 0) 
        {
            return(1);
        }
    }
    return (1);
}
