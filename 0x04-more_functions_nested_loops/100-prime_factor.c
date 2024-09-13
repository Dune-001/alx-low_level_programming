#include <stdio.h>
#include <math.h>
/**
 * largest_prime - return largest of a prime number
 * @h: acccept a prime factor
 * Return: largest prime factor
 */
int main(void)
{
	long long number = 612852475143;
	long long largest_prime_factor = -1;

	while (number % 2 == 0)
	{
		largest_prime_factor = 2;
		number /= 2;
	}
	for (int i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_prime_factor = i;
			number = number / i;
		}
	}
	if (number > 2)
	{
		largest_prime_factor = number;
	}
	_putchar(largest_prime_factor);
	_putchar('\n');
