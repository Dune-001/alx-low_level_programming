#include "main.h"
/**
 * _strpbrk - search for a string
 * @s: the string
 * @accept: pointer to string containing bytes to search for
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *accept_ptr;

	while (*s != '\0')
	{
		char *accept_ptr = accept;
		while (*accept_ptr != '\0')
		{
			if (*s== *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}
	return NULL;
}
