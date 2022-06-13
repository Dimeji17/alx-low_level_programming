#include<stdio.h>
#include "main.h"
/**
* _strlen - calculate and return length of string
* @s : string to be evaluated
* Return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
