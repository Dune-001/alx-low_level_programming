#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - return largest of a prime number
 * @n: acccept a prime factor
 * Return: largest prime factor
 */
/**
 * print_number - return a number to print
 * @n: accept an integer
*/
/**
 * main - the start of the program
 * @void - no int
*/
void print_number(long n)
{
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	print_number(n / 10);
	_putchar((n % 10) + '0');
}

long largest_prime_factor(long n)
{
	long largest = -1;
	long i;

	while (number % 2 == 0)
	{
		largest = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (number % i == 0)
		{
			largest = i;
			number /= i;
		}
	}
	if (number > 2)
		largest = n;
	return (largest);
}
int main(void)
{
	long number = 612852475143;
	long largest = largest_prime_factor(number);

	print_number(largest);
	_putchar('\n');
	return (0);
}
