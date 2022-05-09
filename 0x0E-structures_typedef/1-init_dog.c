#include "dog.h"

/**
 * init_dog - initalizes a struct dog
 *
 * @d: the initilized
 * @name: a name
 * @age: the age
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
