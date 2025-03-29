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
	int m;
	unsigned long a = 1, b = 2, next;
	unsigned long a1, a2, b1, b2, next1, next2;

	printf("%lu, %lu, ", a, b);

	for (m = 3; m <= 92; m++) /* Normal fib sequence for first 92 terms */
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	/* Splitting numbers to handle overflow */
	a1 = a / 1000000000; /* Higher part */
	a2 = a % 1000000000; /* Lower part */
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (; m <= 98; m++)
	{
		next1 = a1 + b1; /* Compute higher part */
		next2 = a2 + b2; /* Compute lower part */

		if (next2 >= 1000000000) /* Handle carry */
		{
			next1++;
			next2 -= 1000000000;
		}
		printf(", %lu%09lu", next1, next2); /* Ensure leading zeros */

		a1 = b1;
		a2 = b2;
		b1 = next1;
		b2 = next2;
	}
	printf("\n");
	return (0);
}
