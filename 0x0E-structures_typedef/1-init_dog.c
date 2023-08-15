#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializing dog
 * @d: pointer to our structure dog
 * @name: name of our dog
 * @age: its age
 * @owner: dog owner
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
