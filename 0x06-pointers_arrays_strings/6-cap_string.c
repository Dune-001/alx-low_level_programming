#include "main.h"
/**
 * *cap_string - capitalize all words of a string
 * @str: the string
 * Return: Always 0
*/
char *cap_string(char *str)
{
	char *start = str;
	int capitalize_next = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
		    *str == ',' || *str == ';' || *str == '.' ||
		    *str == '!' || *str == '?' || *str == '"' ||
		    *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - ('a' - 'A');
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}
		str++;
	}
	return (start);
}
