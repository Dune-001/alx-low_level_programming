#include "main.h"
/**
 * _islower - checks if a char is lowercase.
 * @c: char to be checked.
 *
 * Description: prints 1 if its lowercase otherwise prints 0.
 *
 * Return: 1 if its lowercase 0 if its not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
