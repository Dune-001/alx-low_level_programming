#include <stdio.h>
#include "main.h"
/**
 * main - print args
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
	{
		_putchar("%s\n", argv[h]);
	}
	return (0);
}
