#include "main.h"
/**
 * *memset - set memory
 * @s: pointer to memory area
 * @b: byte to fill memory with
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
