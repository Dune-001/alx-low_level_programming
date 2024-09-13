#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int h, k;

	if (argc == 1)
	{
		_putchar("0\n");
		return (0);
	}
	for (h = 0; h < argc; h++)
	{
		char *arg = argv[h];
		
		for (k = 0; arg[k] != '\0'; k++)
		{
			if (!isdigit(arg[k]))
			{
				_putchar("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	_putchar("%d\n", sum);
	return (0);
}
