#include <stdio.h>
#include "main.h"
/**
 * get_bit - get bit using it's index
 * @n: integer to check index
 * @index: index of the bit to return
 *
 * Return: value of the bit at the index specified
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))// check if index is out of range
		return (-1);
	return (n >> index) & 1;// right shift n by index and check least significant bit
}
