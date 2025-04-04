#include "main.h"
/**
 * print_most_numbers - print except 2 & 4
 * Return: a list of digits
 */
void print_most_numbers(void)
{
	char nums[] = "01356789\n";
	char h = 0;

	for (nums[h] != '\0')
	{
		_putchar(nums[h]);
		h++;
	}
}
