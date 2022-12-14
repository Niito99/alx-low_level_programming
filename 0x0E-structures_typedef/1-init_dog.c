#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialises a dog data structure
 * @d: a struct data type
 * @name: name to be initialised to the data structure
 * @age: the int value to init the age
 * @owner: the name of the owner
 * dog - struct name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
