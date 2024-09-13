#include "main.h"
/**
 * _isupper - checks whether a char is an uppercase letter.
 * @c: accepts a char.
 * Return: 1 f upper else 0 if lower.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
