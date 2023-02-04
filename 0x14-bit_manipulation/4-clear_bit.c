#include "main.h"

/**
* clear_bit - fn
* @n: num
* @index: index
* Return: 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;

x = ~(1 << index);
*n = *n & x;

return (1);
}
