#include "main.h"
/**
 * puts2 - second char
 * @str: accepts a string
 * Return: Always 0
 */
void puts2(char *str)
{
	int k = 0;
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k += 2;
	}
	_putchar('\n');
}
