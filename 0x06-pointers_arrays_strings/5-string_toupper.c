#include "main.h"
/**
 * *string_toupper - convert to upper case
 * @str: holds the string
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	char *start = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (start);
}
