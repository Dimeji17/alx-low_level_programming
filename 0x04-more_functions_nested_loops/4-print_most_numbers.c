#include "main.h"

/**
*prints the numbers except 2 and 4.
*retur the other numbers
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			_putchar(c);
	_putchar('\n');
}
