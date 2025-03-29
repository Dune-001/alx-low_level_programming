#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98
 * @n: The starting number
 *
 * Description: prints upto 98 from a starting point.
 *
 * Return: natural numbers
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
