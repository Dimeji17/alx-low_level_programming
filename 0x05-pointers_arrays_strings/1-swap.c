#include "main.h"
/**
* swap_int - swaps the value of two numbers
* @a: is the first variable
* @b: is the second variable
* nothing to return
*/
void swap_int(int *a, int *b)
{

	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
