#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range = range of arrays
 * @min: minimum int
 * @max: maximum int
 *
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *array;
	int size, k;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
	{
		array [k] = min + k;
	}
	return (array);
}
