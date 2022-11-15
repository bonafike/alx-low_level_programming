#include "dog.h"
#include "stdio.h"

/**
 * init_dog - initializes a variable
 * @d: the string of the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of thr dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
