#include "main.h"
/**
 * print_triangle - Print a triangle
 * @size: size of # to use
 * Return: A triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int g = 0; g < size; g++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
