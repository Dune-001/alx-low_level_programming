#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number o an usigned int
 * @b: pointing to a string containng binary number
 *
 * Result: converted number or 0 if b is null or if b doesn't contain 0 or 1 only
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int k;

	if (b == NULL)
		return (0);
	for (k = 0; b[k] != '\0'; k++)// iterate through all char in b
	{
		if (b[k] != '0' && b[k] != '1')// invalid character check
			return (0);
		number = (number << 1) | (b[k] - '0');// shift left and add current bit
	}
	return (number);
