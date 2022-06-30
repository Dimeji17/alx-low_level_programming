#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b : amount of bytes storage allocated
 * Return: return the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *store = malloc(b);

	if (store == NULL)
		exit(98);
	return (store);
}
