#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set value of a it to 0 at a given index of a number
 * @n: integer to use
 * @index: bit to set to 0
 *
 * Return: 1 if it works, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))// check if the index is not out of range
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
