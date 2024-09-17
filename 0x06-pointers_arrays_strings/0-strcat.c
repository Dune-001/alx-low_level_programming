#include "main.h"
/**
 * *_strcat - concantenates two strings
 * @dest: first string
 * @src: second string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}