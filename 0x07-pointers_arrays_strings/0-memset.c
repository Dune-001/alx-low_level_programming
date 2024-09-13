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
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
