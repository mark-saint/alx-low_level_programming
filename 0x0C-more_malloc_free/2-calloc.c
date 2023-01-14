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
char *a;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);

a = malloc(nmemb * size);

if (a == NULL)
return (NULL);

i = 0;
while (i < nmemb * size)
{
a[i] = 0;
i++;
}
return (a);
}
