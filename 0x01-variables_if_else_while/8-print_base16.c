#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print base 16 values in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;
	int L = 10;

	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	while (L < 16)
	{
		putchar(L + 'a' - 10);
		L++;
	}
	putchar('\n');
	return (0);
}
