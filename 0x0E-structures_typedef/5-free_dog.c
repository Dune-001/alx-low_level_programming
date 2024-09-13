#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * free_dog - free memory for dog_t
 * @dog_t *d: struct for dog
 *
 * Description: freeing memory allocated for dog_t struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
