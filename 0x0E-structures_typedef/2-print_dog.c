#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * print_dog - print dog function
 * @struct dog *d: pointer to dog.h
 *
 * Description: print the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n",d->owner);
	}
}
