#include "main.h"
/**
 * print_number - print an integer
 * @n: accept an integer
 * Return: An int
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}
	int divisor = 1;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
