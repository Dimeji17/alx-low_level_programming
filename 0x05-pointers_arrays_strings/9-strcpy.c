#include<stdio.h>
#include "main.h"
/**
 *_strcpy - update value.
 *@mim: value to be evaluate.
 *@src: value to be evaluate.
 *Return: not.
 */
char *_strcpy(char *mim, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		mim[x] = src[x];
	}
	mim[l] = '\0';
	return (mim);
}
