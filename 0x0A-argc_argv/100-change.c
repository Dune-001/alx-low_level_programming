#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints minimum coins for change
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: Always 0 (Success) 
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		_putchar("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);
	int coins [] = {25, 10, 5, 2, 1};
	int total_coins = 0;
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int h;

	if (cents < 0)
	{
		_putchar("0\n");
		return (0);
	}
	for (h = 0; h < num_coins; h++)
	{
		total_coins += cents / coins[h];
		cents %= coins[h];
	}
	_putchar("%d\n", total_coins);
	return (0);
}
