#include "main.h"
/**
 * times_table - creates a multiplication table from 0-9.
 *
 * Description: prints the 9 timestable.
 *
 * Return: multiples for each digit from 0-9 in column and row form.
 */
void times_table(void)
{
	int row = 0;

	while (row <= 9)
	{
		int col = 0;

		while (col <= 9)
		{
			int answer = row * col;
			_putchar(answer);
			if (col < 9)
			{
				_putchar(,);
				_putchar( );
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
