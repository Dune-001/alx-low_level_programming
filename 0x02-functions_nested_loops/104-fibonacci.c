#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints first 98 fib.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 98;
	unsigned int num0 = 1;
	unsigned int num1 = 2;
	unsigned int nextTerm;
	int counter = 2;

	printf("%u, %u, ", num0, num1);

	while (counter < m)
	{
		nextTerm = num0 + num1;
		printf("%u", nextTerm);

		if (counter != m - 1)
		{
			printf(", ");
		}
		num0 = num1;
		num1 = nextTerm;
		counter++;
	}
	printf("\n");
	return 0;
}
