#include <stdio.h>
/**
 * print_fuzzbuzz - print fuzzbuzz on multiples of 3 and 5 respectively
 * @n: accepts args
 * Return: FizzBuzz
 */
void print_fizzbuzz(int n)
{
	if (n % 3 == 0 && n % 5 == 0)
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
	else if (n % 3 == 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
	}
	else if (n % 5 == 0)
	{
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	}
	else
	{
		_putchar(n);
	}
}

int main(void)
{
	for (int i = 1; i <= 100; ++i)
	{
		print_fizzbuzz(i);
		if (i < 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
