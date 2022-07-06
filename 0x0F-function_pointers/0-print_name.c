#include <stddef.h>
#include "function_pointers.h"
/* print_name- function to print a name
 * @*name: pointer to name
 * @*f: pointer that returns nothing
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
        printf(name);
}
