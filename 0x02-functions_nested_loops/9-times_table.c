#include "main.h"

/**
*times_table- sth
*Descrction: sth
*/

void times_table(void)
{
int count1, count2, product;

for (count1 = 0; count1 < 10; count1++)
{
_putchar('0');

for (count2 = 1; count2 < 10; count2++)
{
_putchar(',');
_putchar(' ');
product = count1 * count2;

if (product < 10)
{
_putchar(' ');
}
else
{
_putchar('0' + product / 10);
}

_putchar('0' + product % 10);
}

_putchar('\n');
}
}
