#include "main.h"
#include <stdlib.h>

/**
* _calloc - fn
* @nmemb: sth
* @size: sth
* Description: stj
* Return: sth
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *a;
if (nmemb == 0 || size == 0)
return (NULL);

a = malloc(nmemb * size);

if (a == NULL)
return (NULL);

return (a);
}
