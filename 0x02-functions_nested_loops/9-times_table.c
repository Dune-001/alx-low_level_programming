#include "main.h"
/**
 * times_table - creates a multiplication table from 0-9.
 *
 * Description: prints the 9 timestable.
 *
 * Return: multiples for each digit from 0-9 in column and row form.
 */
void times_table(void)
{
	int m, n, product;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			product = m * n;

			if (n == 0)
				_putchar(product + '0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
