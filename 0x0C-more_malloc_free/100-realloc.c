#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * realloc - reallocates memory
 * @old_size: previoous memory 
 * @new_size: new memory block
 *
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
			return (NULL);
		return (new_pointer);
	}
	new_pointer = malloc(new_size);
	if (new_pointer == NULL)
		return (NULL);
	f (new_size > old_size)
	{
		memcpy(new_pointer, ptr, old_size);
	}
	else
	{
		memcpy(new_pointer, ptr, new_size);
	}
	free(ptr);
	return (new_pointer);
}
