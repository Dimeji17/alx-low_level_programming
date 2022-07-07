#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all- program to print the sum total of numbers
 *@n: number of numbers to be added
 *Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;

	va_list args;

	va_start(args, n);
	for (int i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}

