#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary representation for a number
 * @n: integer to convert
 *
 * Return: binary of integer n
 */
void print_binary(unsigned long int n)
{
	unsigned long int masked = 1UL << (sizeof(n) * 8 - 1);// create a mask with highest bit set
	int start = 0; // flag to indicate when to start printing

	while (mask)
	{
		if (n & mask)// if bit is 1, print 1
		{
			_putchar('1');
			start = 1;// encountering the first '1'
		}
		else if (start)// once started, print '0' for remaining bits
		{
			_putchar('0');
		}
		mask >>= 1;// shift mask to the right
	}
	if (!start)// if n is 0, print '0'
		_putchar('0');
}
