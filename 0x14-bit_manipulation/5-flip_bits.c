#include "main.h"

/**
* flip_bits - fn
* @n: num
* @m: num
* Return: num
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bits_to_flip, x, i = 0;
int count = 0;

bits_to_flip = n ^ m;
x = 1;

while (i < (sizeof(unsigned long int) * 8))
{
if (x == (bits_to_flip & x))
{
count++;
}
x <<= 1;
i++;
}
return (count);

}
