#include <stdio.h>
#include "main.h"
/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: contains the bits
 * @index: index of the bit to get changed
 *
 * Return: 1 if it worked, -1 if it didn't work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))// check if index isn't out of range
		return (-1);
	*n |= (1UL << index);// biwise or sets the bit at given index to 1
	return (1);
}
