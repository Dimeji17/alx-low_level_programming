#include "main.h"

/**
 * _abs - return abs value
 * @n : number to check
 * Return:0 or 1
 */

int _abs(int c)
{   
    
    int negate;

    if (c >= 0)
    {
        return(c);
    }
    else if (c < 0)
    {
        negate = (c * (-1));
        return(negate);
    }
    return(0);
}
