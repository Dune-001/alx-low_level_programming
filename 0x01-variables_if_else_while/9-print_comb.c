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
	int m;
	
	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
		if (m < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
