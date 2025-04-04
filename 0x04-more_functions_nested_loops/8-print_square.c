#include "main.h"
/**
 * print_square - prints a square
 * @size: space for the square
 * Return: A square
 */
void print_square(int size)
{
	int r, s;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (r = 0; r < size; r++)
	{
		for (s = 0; s < size; s++)
			_putchar('#');
		_putchar('\n');
	}
}
