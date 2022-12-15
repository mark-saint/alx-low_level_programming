#include "main.h"

/**
* print_triangle - sth
* Description: sth
* @size: sth
*/
void print_triangle(int size)
{
int i;
int a;
int b;

if (size > 0)
{
for (i = size; i > 0; i--)
{
for (a = 1; a < i; a++)
{
putchar(' ');
}

for (b = 0; b <= size - a; b++)
{
putchar('#');
}
putchar('\n');
}
}
else
putchar('\n');

}
