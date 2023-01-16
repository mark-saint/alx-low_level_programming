#include "dog.h"

/**
 * free_dog - fn
 * @d: param
 * Description: sth
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
