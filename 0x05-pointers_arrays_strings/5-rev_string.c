#include "main.h"
/**
 * rev_string - reverse a string
 * @s: Accept a string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int size = 0;
	char *first = s;
	char *last = s;

	while (*last != '\0')
	{
		size++;
		last++;
	}
	last--;
	while (first < last)
	{
		char holder = *first;
		*first = *last;
		*last = holder;
		first++;
		last--;
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
