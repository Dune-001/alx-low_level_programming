#include "main.h"
/**
 * print_rev - reverse of a string
 * @s: Accepts a string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int size = 0;
	while (*s != '\0')
	{
		size++;
		s++
			}
	for (int h = size - 1; h >= 0; h--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
