#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: copied string
 * @src: string to be copied
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *first = dest;
	while (*src != '\0')
	{
		*dest = *src;
		_putchar(*dest);
		dest++;
		src;
	}
	*dest = '\0';
	_putchar('\n');
	return first;
}
