#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints first 50 fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int k;

	printf("%ld, %ld", a, b);

	for (k = 3; k <= 50; k++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}



