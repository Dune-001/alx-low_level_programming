#include "main.h"
/**
 * flip_bits - determine how many bits differ between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits the two numbers differ by
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;// use xor to find differing bits
	unsigned int counter = 0;

	while (xor_result > 0) //count number of 1s in xor_result
	{
		count += xor_result & 1; //increment count if the least significant bit is 1
		xor_result >>= 1; //shift xor_result to the right by 1 bit
	}
	return (counter);
}
