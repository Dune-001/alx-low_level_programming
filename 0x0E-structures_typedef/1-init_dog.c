#include "dog.h"
#include "main.h"
/**
 * init_dog - initialising dog.h
 * struct dog *d - structure containing dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: initialising struct dog
 */
void init_dog(struct dog *d, char *name, float *age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
