#include "main.h"
/**
 * _strspn - get length of a prefix substring
 * @s: String
 * @accept: pointer to substring with accepted char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *accept_ptr;

	while (*s)
	{
		accept_ptr = accept;
		while (*accept_ptr)
		{
			if (*s == *accept_ptr)
			{
				break;
			}
			accept_ptr++;
		}
		if (*accept_ptr)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
