#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include "main.h"
/**
 * new_dog - new desc of dog
 * @name: dogs name
 * @age: age of the dog
 * @owner: name of the dogs owner
 *
 * Description: creating a new dogs desc
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
