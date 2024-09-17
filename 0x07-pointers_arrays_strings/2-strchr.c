#include "main.h"
/**
 * *_strchr - locate a char in a string
 * @s: pointer to memory area
 * @c: char to locate in str
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return(s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return NULL;
}