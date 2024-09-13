#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 0;

	while (m < 10)
	{
		int u = 0;

		while (u < 10)
		{
			putchar(m + '0');
			if (m != 9 || u != 9)
			{
				putchar(',');
				putchar(' ');
			}
			u++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
