#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees our dog from memory
 * @d: our dog
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
