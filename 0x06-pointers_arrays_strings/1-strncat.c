#include "main.h"
/**
 * *_strncat - concantenates two strings
 * @dest: first string
 * @src: second string
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (n == 0)
	{
		*dest = '\0';
	}
	return (dest_start);
}