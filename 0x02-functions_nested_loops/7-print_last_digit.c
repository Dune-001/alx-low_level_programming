#include "main.h"
/**
 * print_last_digit - prints the last digit in a number.
 * @y: accepts an int.
 *
 * Description: will print the final digit of a num.
 *
 * Return: returns the last digit.
 */
int print_last_digit(int y)
{
	int last_digit;

	last_digit = y % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}
