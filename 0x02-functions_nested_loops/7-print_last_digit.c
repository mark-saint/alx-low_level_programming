#include "main.h"

/**
*print_last_digit- sth
*Description: sth
*@x: sth
*Return: sth
*/

int print_last_digit(int x)
{
int y = x % 10;

if (x < 0)
{
y *= -1;
}

_putchar('0' + y);
return (y);
}
