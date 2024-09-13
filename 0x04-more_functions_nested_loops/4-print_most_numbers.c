#include "main.h"
/**
 * print_most_numbers - print except 2 & 4
 * Return: a list of digits
 */
void print_most_numbers(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		if (!(c == 2 || c == 4))
			_putchar(c);
	}
	_putchar('\n');
}
