#include "main.h"
/**
 * _pow_recursion - finds the square root
 * @x: base number
 * @y: number to square
 * Return: Allways 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
