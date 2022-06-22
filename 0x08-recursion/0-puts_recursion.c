#include "main.h"
/**
 * _puts_recursion - puts a new line at the end of a string
 * @s : is a pointer to the string
 * return : nothing to return
**/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
