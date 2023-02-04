#include "main.h"

/**
* set_bit - fn
* @n: num
* @index: index
* Return: 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;

x = 1 << index;
*n = x | *n;

return (1);
}
