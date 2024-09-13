#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * calloc - allocate memory
 * @nmemb: first char
 * @size: size of nmemb
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	memset(pointer, 0, nmemb * size);
	return (pointer);
}
