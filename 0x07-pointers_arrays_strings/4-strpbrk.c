#include "main.h"
/**
 * _strpbrk - search for a string
 * @s: the string
 * @accept: pointer to string containing bytes to search for
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return NULL;
}