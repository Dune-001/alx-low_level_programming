#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check if malloc runs
 * @b: accept an int
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
