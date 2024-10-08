#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - create a duplicate str
 * @str: Accepts a str
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}
	return(dup_str);
}
