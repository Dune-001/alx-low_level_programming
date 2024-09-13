#include "main.h"
/**
 * _isalpha - checks if its an alphabetic char.
 * @c: takes a single char.
 *
 * Description: if a char is alphabetic returns 1 otherwise 0
 *
 * Return: 1 if alphabetic 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
