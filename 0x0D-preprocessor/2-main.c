#include <stdio.h>
/**
 * main-program to print the name of file it was compiled from
 *
 * Return:0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
