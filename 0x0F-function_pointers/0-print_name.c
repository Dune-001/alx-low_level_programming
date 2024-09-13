#include <stdio.h>
#include "function_headers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: pointer to name
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f ++ NULL)
	{
		return;
	}
	f(name);
}
