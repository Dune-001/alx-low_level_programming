#include <stddef.h>
#include "function_headers.h"
/**
 * int_index - index of an array
 * @array: the array
 * @size: size of array
 * @cmp: pointer to the function
 *
 * Return: Always 0 (Sucess)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return -1;
	}
	int k;
	
	for (k =0; k < size; k++)
	{
		if (cmp(array[k] != 0)
			{
				return (k);
			}
	}
	return (-1);
}
