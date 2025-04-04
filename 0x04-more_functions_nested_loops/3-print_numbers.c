#include "main.h"
/**
 * print_numbers - print single digit numbers
 * Return: digit numbers
 */
void print_numbers(void)
{
	char nums[] = "0123456789\n";
	char g = 0;

	while (nums[g] != '\0')
	{
		_putchar(nums[g]);
		g++;
	}
}
