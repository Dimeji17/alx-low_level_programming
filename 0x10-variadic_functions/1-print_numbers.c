#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int nex;

	va_start(nums, n);
	for (nex = 0; nex < n; nex++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && nex != (n-1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
