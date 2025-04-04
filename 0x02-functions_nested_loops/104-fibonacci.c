#9include <stdio.h>
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
	unsigned long a1, a2, b1, b2, high, low, divisor = 1000000000;

	printf("%lu, %lu", a, b);

	for (m = 3; m <= 92; m++) /* Normal fib sequence for first 92 terms */
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	/* Splitting numbers to handle overflow */
	a1 = a / divisor; /* Higher part */
	a2 = a % divisor; /* Lower part */
	b1 = b / divisor;
	b2 = b % divisor;

	for (; m <= 98; m++)
	{
		high = a1 + b1; /* Compute higher part */
		low = a2 + b2; /* Compute lower part */

		if (low >= divisor) /* Handle carry */
		{
			high += 1;
			low -= divisor;
		}
		printf(", %lu%09lu", high, low); /* Ensure leading zeros */

		a1 = b1;
		a2 = b2;
		b1 = high;
		b2 = low;
	}
	printf("\n");
	return (0);
}
