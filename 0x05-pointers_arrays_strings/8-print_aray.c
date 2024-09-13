#include "main.h"
/**
 * print_array - print an array
 * @a: accepts the int
 * @n: acepts an int
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (j == n -1)
		{
			printf("%d\n", a[j]);
		}
		else
		{
			printf("%d, ," a[j]);
		}
	}
}
