#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concantenate all arguments
 * @ac: number of args
 * @av: char 
 *
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int n;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		total_length += strlen(av[n]) + 1; // +1 for the '\n'
	}
	*result = malloc((total_length + 1) * sizeof(char)); // +1 for null term
	if (result == NULL)
	{
		return (NULL); // return null on mem alloc failure
	}
	char *current_pos = result;
	for (m = 0; m < ac; m++)
	{
		strcpy(current_pos, av[n]);
		current_pos += strlen(av[n]);
		*current_pos = '\n'; // add newline character
		current_pos++;
	}
	*current_pos = '\0'; // null terminate the string
	return (result);
}
