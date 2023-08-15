#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creating a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = strdup(name);
	new->owner = strdup(owner);
	if (new->name == NULL || new->owner == NULL)
	{
		return (NULL);
	}
	new->age = age;
	return (new);
}
