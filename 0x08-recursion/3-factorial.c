#include "main.h"
/**
 * factorial finds the faactorial of a number
 * @n: the factorial number
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n -1));
}
