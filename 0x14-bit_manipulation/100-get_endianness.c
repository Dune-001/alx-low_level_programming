#include "main.h"
/**
 * get_endianness - check for endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *byte = (char *) & number; //points to the memory address of num (a pointer to a byte)

	if (byte[0] == 1) // if first byte is 1, it's little endian
	{
		return (1); // little endian
	}
	else
	{
		return (0); // big endian
	}
}
