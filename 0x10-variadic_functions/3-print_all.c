#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print all formats
 * @char: holds char
 * @format: format currently in use
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int k = 0;
	char *str;
	char current_format;
	int print_separator = 0;

	va_start(args, format);
	while (format && format [k])
	{
		current_format = format[k];
		if (print_separator && (current_format == 'c' || current_format == 'f' || current_format == 'i'|| current_format == 's'))
		{
			printf(", ");
		}
		switch (current_format)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			print_separator = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			print_separator = 1;
			break;
		case "f":
			printf("%f", va_arg(args, double));
			print_separator = 1;
			break;
		case "s":
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			print_separator = 1;
			break;
		}
		k++;
	}
	va_end(args);
	printf("\n");
}
