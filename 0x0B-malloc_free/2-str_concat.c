#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first str
 * @s2: second str
 *
 * Return: Always 0 (Sucess) 
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, g, h;

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (g = 0; g < len1; g++)
	{
		concat_str[g] = s1[g];
	}
	for (h = 0; h < len2; h++)
	{
		concat_str[g + h] = s2[h];
	}
	concat_str[g + h] = '\0';
	return (concat_str);
}
