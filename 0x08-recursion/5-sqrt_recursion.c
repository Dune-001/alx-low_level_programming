#include "main.h"
/**
 * _sqrt_helper - helper function
 * @n: the number
 * @random: guess a number
 *
 * Return: -1 if n doesn't have a natural square root
 */
int _sqrt_helper(int n, int random)
{
	if (random * random > n)
	{
		return (-1);
	}
	if (random * random == n)
	{
		return (random);
	}
	return (_sqrt_helper(n, random + 1));
}
/**
 * _sqrt_recursion - find natural square root
 * @n: the number
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
