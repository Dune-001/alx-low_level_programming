#include "main.h"
/**
 * prime-helper - helper function
 * @n: the number
 * @h: checks possible numbers
 */
int prime_helper(int n, int h)
{
	if (n <= 1)
	{
		return (0);
	}
	if (h * h > n)
	{
		return (1);
	}
	if (n % h == 0)
	{
		return (0);
	}
	return (prime_helper(n, h + 1));
}
/**
 * is_prime_number - check if a digit is a prime number
 * @n: The number to test
 * Return: Always 0
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
