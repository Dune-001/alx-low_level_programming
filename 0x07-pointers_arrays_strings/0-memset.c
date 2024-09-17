#include "main.h"
/**
 * *memset - set memory
 * @s: pointer to memory area
 * @b: byte to fill memory with
 * @n: number of bytes to be filled
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
