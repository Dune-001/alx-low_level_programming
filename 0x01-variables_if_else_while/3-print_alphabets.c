#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabets in both lower and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
