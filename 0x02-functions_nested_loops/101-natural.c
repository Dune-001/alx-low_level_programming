#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: adds the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int sum = 0;
	int n = 1;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
