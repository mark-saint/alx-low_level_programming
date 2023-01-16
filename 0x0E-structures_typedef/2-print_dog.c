#include "dog.h"

/**
* print_dog - fn
* @d: struct param
*/
void print_dog(struct dog *d)
{


if (d->name == NULL)
printf("nil");

if (d->owner == NULL)
printf("nil");

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);

}
