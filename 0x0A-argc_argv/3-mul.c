#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	
	if (argc != 3)
	{
		_putchar("Error\n");
		return (1);
	}
	
        num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2
	_putchar("%d\n", result);
	return (0);
}
