#include <stdio.h>
/**
 * print_times_table - prints a times table
 * @k: Times table to print
 *
 * Description: prints the multiplication table for a given number 0 to n.
 *
 * Return: the times table for int n.
 */
void print_times_table(int n)
{
	int m, k, product;

	if (n < 0 || n > 15)
		return;

	for (m = 0; m <= n; m++)
	{
		for (k = 0; k <= n; k++)
		{
			product = m * k;

			if (k == 0)
				printf("%d", product);
			else
				printf(", %3d", product);
		}
		printf("\n");
	}
}
