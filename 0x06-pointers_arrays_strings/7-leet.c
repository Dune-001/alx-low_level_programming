#include "main.h"
/**
 * *leet - change char to int
 * @str: the string
 * Return: Always 0
 */
char *leet(char *str)
{
	char *start = str;
	char leet_map[256] = {0};

	leet_map['a'] = '4';
	leet_map['A'] = '4';
	leet_map['e'] = '3';
	leet_map['E'] = '3';
	leet_map['o'] = '0';
	leet_map['O'] = '0';
	leet_map['t'] = '7';
	leet_map['T'] = '7';
	leet_map['l'] = '1';
	leet_map['L'] = '1';
	while (*str != '\0')
	{
		if (leet_map[(unsigned char)*str])
		{
			*str = leet_map[(unsigned char)*str];
		}
		str++;
	}
	return (start);
}
