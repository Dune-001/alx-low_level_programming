#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints sum of even fib
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int limit = 4000000;
	int num0 = 1;
	int num1 = 2;
	int nextTerm;
	int sum_even = 2;

	while (num1 < limit)
	{
		nextTerm = num0 + num1;
		if (nextTerm % 2 == 0)
		{
			sum_even += nextTerm;
		}
		num0 = num1;
		num1 = nextTerm;
	}
	printf("%d\n", sum_even);
	return (0);
}
