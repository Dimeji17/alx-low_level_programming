#include "main.h"
/**
 *_memset -fills memory with a specified value
 *@s: starting address of memory to be filled
 *@b: the desired value
 *@n: number of bytes to be changed
 *
 *Return: returns new arry with changed n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
