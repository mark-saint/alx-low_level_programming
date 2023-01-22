#include "function_pointers.h"

/**
* int_index - fn
* @array: array
* @size: size
* @cmp: pointer to fn
* Return: sth
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);

if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(*(array + i)))
return (i);
}

}
return (-1);
}
