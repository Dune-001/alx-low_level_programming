#include "main.h"
/**
 * _strpbrk - search for a string
 * @s: the string
 * @accept: pointer to string containing bytes to search for
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}