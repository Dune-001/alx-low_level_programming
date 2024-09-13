#include "main.h"
/**
 * _strlen - length of a string
 * @s: takes a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int size = 0;
	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
