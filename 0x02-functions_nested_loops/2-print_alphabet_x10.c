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
	int m;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (m = 0; m < 10; m++)
	{
		int j = 0;
		while (alphabet[j] != '\0')
		{
			_putchar(alphabet[j]);
			j++;
		}
		_putchar('\n');
	}
}
