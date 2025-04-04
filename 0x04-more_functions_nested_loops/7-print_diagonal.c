#include "main.h"
/**
 * print_diagonal - produce a diagonal
 * @n: accepts the number of \\
 * Return: Always \
 */
void print_diagonal(int n)
{
	int k, l;

	if (p <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			for (l = 0; l < k; l++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
