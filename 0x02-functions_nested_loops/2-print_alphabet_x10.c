#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets.
 *
 * Description: Prints 10 tmes the alphabets.
 *
 * Return: 10 times the lowercase alphabets.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int repetitions = 10;

	while (repetitions < 10)
	{
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
		letter = 'a';
		_putchar('\n');
		repetitions++;
	}
}
