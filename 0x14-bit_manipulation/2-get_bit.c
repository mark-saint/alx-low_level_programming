#include "main.h"

/**
* get_bit - fn
* @n: num
* @index: index
* Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x, y;

if (index > sizeof(unsigned long int ) * 8 - 1)
return (-1);

y = 1 << index;

x = n & y;
if (x == y)
{
return (1);
}
return (0);
}

