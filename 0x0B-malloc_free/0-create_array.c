#include <stdlib.h>
#include "main.h"
/**
 * create array - create an array
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < size; h++)
	{
		array[h] = c;
	}
	return (array);
}
