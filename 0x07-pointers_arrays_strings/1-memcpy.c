#include "main.h"
/**
 * *_memcpy - copy to a memory area
 * @dest: destination
 * @src: source of the string
 * @n: number of bytes to be copied
 * Return: Always 0
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	char *dest_start = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--:
	}
	return (dest_start);
}
