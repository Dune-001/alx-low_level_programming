#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print single digits using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 0;

	while (z < 10)
	{
		putchar(z + '0');
		z++;
	}
	putchar('\n');
	return (0);
}
