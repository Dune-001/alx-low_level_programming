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
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (m = 0; m < 10; m++)
		_putchar(alphabet);
}
