#include <stdio.h>
/**
 * print_fuzzbuzz - print fuzzbuzz on multiples of 3 and 5 respectively
 * @n: accepts args
 * Return: FizzBuzz
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
		}
		else
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i / 10) + '0');
		}
		if (i != 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
