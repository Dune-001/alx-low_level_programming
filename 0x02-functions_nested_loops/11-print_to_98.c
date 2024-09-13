#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98
 * @n: accepts an int.
 *
 * Description: prints upto 98 from a starting point.
 *
 * Return: natural numbers
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	printf("\n");
}
/**
 * main - Entry point.
 *
 * Description: prints a number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	print_to_98();
	return (0);
}
