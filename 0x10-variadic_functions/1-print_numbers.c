#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print the numbers
 * @separator: separates added numbers
 * @n: number of numbers
 *
 * Return: ALways 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		int num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && k < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
