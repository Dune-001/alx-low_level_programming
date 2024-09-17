#include "main.h"
/**
 * *_strchr - locate a char in a string
 * @s: pointer to memory area
 * @c: char to locate in str
 * Return: pointer to first occurrence c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; s++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}