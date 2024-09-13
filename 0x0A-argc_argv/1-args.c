#include <stdio.h>
#include "main.h"
/**
 * main - prints number of args
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	_putchar("%d\n", argc - 1);
	return (0);
}
