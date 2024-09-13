#include "main.h"
/**
 * print_numbers - print single digit numbers
 * Return: digit numbers
 */
void print_numbers(void)
{
	char g;

	for (g = '0'; g <= '9'; g++)
	{
		_putchar(g);
	}
	_putchar('\n');
}
