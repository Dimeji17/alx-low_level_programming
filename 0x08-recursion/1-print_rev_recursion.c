#include <stdio.h>

void reverse(char *s);

int main ()
{
   char a[] = "hello man";
   reverse(a);
   return(0);
}

void reverse(char *s)
{
    if (*s )
    {
        reverse(s+1);
        printf("%c", *s);
    }
}
