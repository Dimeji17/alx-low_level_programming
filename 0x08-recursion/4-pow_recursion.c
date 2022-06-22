#include "main.h"
/**
 * _pow_recursion - raises a number to another number
 * @x : the base
 * @y : the power
 * Return: return x raise to the power y
**/
int _pow_recursion(int x, int y)
{
	if (y  < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
