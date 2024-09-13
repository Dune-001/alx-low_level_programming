#include "main.h"
/**
 * print_square - prints a square
 * @size: space for the square
 * Return: A square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (int r = 0; r < size; r++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
