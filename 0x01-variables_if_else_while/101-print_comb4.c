#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints a combination of three single digits
 * Numbers 012 120 102 021 201 210 are considered the same combination 0f 012
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 0;

	while (m < 1000)
	{
		int q = m / 100;
		int a = (m / 10) % 10;
		int h = m % 10;

		if (q < a && a < h)
		{
			putchar(q + '0');
			putchar(a + '0');
			putchar(h + '0');

			if (m < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		m++;
	}
	putchar('\n');
	return (0);
}
