#include "main.h"

/**
* print_alphabet_x10 :sth
*Descrition:sth
*/

void print_alphabet_x10(void)
{
int count;
char x;
for (count=0; count < 10; count++)
{
for (x = 'a'; x<='z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
