#include <stddef.h>
#include "function_headers.h"
/**
 * array_iterator - iterate over the array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: ALways 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (size_t k = 0; k < size; k++)
	{
		action(aray[k]);
	}
}
