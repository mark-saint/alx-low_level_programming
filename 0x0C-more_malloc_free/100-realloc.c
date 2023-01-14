#include "main.h"
#include <stdlib.h>

/**
* _realloc - fn
* @ptr: param
* @old_size: param
* @new_size: param
* Return: sth
* Description: sth
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *new_ptr;
char *p = ptr;

if (p == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

if (new_size == old_size)
{
return (ptr);
}

if (new_size == 0 && p != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
if (new_size > old_size)
new_size = old_size;
for (i = 0; i < new_size; i++)
{
new_ptr[i] = p[i];
}
free(ptr);

return (new_ptr);

}
