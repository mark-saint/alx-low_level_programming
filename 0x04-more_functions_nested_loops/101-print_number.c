#include "main.h"

/**
 * print_number - sth
 * Description: sth
 * @n: sth
 */

void print_number(int n)

{
int i = n;
if (n < 0)
{
_putchar('-');
i = -i;
}

if (i / 10)
print_number(i / 10);

_putchar((i % 10) + '0');
}
