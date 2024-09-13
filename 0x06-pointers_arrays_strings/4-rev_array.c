#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int h,temp;

	for (h = 0; h < n /2; h++)
	{
		temp = a[h];
		a[h] = a[n - 1 - i];
		a[n -1 - i] = temp;
	}
}
