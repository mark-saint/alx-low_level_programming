#include "main.h"

/**
*print_times_table- sth
*@n: sth
*/


void print_times_table(int n)
{
int count1, count2, product;

if (n >= 0 && n <= 15)
{
for (count1 = 0; count1 <= n; count1++)
{
_putchar('0');

for (count2 = 1; count2 <= n; count2++)
{
_putchar(',');
_putchar(' ');

product = count1 * count2

if (product <= 99)
{
_putchar(' ');
}
if (product <= 9)
{
_putchar(' ');
}

if (product >=100)
{
_putchar(product / 100 + '0');
_putchar((product / 10) % 10 + '0');
}
else if (product <= 99 && product >= 10)
{
_putchar(product / 10 + '0');
}
_putchar(product % 10 + '0');
}
_putchar('\n');
}
}

}
