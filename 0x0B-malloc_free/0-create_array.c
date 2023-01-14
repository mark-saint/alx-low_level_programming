#include "main.h"
#include <stdlib.h>

/**
* create_array - returns pointer to array
* @size: size
* @c: char
* Return: ptr
* Destcription: sth
*/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b = 0;

if (size == 0)
return (NULL);
a = malloc(sizeof(*a) * size);

if (a == NULL)
return (NULL);

while (b < size)
{
a[b] = c;
b++;
}

return (a);
}
