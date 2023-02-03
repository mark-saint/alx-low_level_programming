#include "main.h"

/**
* binary_to_uint - fn
* @b: string
* Return: uint
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0;
int i;

if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '1' || b[i] != 0)
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
x <<= 1;
if (b[i] == '1')
x++;
}
return (x);
}
