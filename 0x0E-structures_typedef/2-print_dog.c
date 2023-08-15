#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: dog
 *
 *
 */
void print_dog(dog_t *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
