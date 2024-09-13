#include "main.h"
/**
 * puts_half - print half of string
 * @str: Accepts a string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int size = 0;
	int j;
	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
	{
		j = size / 2;
	}
	else
	{
		j = (size - 1) / 2;
	}
	while (str[k] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
