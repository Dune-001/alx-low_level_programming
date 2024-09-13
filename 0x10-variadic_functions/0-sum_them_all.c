#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - add them all
 * @n: last fixed arg
 *
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list args;
	va_start(args, n);
	int sum = 0;
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
