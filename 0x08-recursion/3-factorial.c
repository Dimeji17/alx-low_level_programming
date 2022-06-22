#include "main.h"
/**
 * factorial - TO find the factorial of n numbers
 * @n : the number
 * Return: Return factorial
**/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n *  factorial(n - 1));
	}
}
