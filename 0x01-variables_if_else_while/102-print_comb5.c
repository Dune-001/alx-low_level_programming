#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all the unique combinations of two two-digit numbers
 * numbers are separated by a space and a comma
 * digits are printed with leading zeros if necessary
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;

	while (num1 < 100)
	{
		int num2 = num1 + 1;

		while (num2 < 100)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 < 98 || num2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
