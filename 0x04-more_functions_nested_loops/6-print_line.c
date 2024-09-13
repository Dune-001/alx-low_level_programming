#include "main.h"
/**
 * print_line - prints _
 * @n: accepts a int
 * Return: a  line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int k = 0; k < n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
