#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - fn
* @b: param
* Return: ptr
* Description: sth
*/
void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
