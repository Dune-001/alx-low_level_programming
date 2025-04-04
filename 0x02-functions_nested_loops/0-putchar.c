#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This function prints char one at a time without std lib.
 *
 * Return: Always 0.
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
