#include "main.h"

/**
* more_numbers - sth
* Description: prints 10 times the numbers, from 0 to 14,
 * Return: null
 */

void more_numbers(void)
{
int count;
int i;

for (count = 0; count < 10; count++)
{
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar('0' + 1);

_putchar('0' + i % 10);
}
}
_putchar('\n');
}
}
