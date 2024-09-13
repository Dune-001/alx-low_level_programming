#include "main.h"
/**
 * print_alphabet - prints the alphabets in lower case.
 *
 * Description: Prints the alphabets followed by  a new line
 *
 * Return: Alphabets in lowercase.
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
