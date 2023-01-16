#include "dog.h"

/**
* new_dog - hard stuff
* @name: param
* @age: param
* @owner: param
* Return: copy
* Description: sth
*/
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int x, y, z;
dog_t *d;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

for (x = 0; name[x]; x++)
{
;
}
d->name = malloc(sizeof(*name) * x);
d->age = age;

for (y = 0; owner[y]; y++)
{
;
}
d->owner = malloc(sizeof(*owner) * y);

for (z = 0; z < x; z++)
{
d->name[z] = name[z];
}
for (z = 0; z < y; z++)
{
d->owner[z] = owner[z];
}
return (d);

}
