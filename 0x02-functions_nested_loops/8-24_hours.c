#include "main.h"
#include <stdio.h>
/**
 * print_time - prints time.
 * @hours: prints hours.
 * @minutes: prints minutes.
 *
 * Description: Prints the time.
 *
 * Return: prints time in format.
 */
void print_time(int hours, int minutes)
{
	printf("%02d:%02d\n", hours, minutes);
}
/**
 * jack_bauer - print every minute.
 *
 * Description: Prints every minute of the day.
 *
 * Return: prints in format hh:mm.
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int minutes = 0;

		while (minutes < 60)
		{
			print_time(hours, minutes);
			minutes++;
		}
		hours++;
	}
}
