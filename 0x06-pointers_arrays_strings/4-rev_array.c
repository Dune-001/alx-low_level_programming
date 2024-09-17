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

	for (h = n - 1; h > n /2; h--)
	{
		temp = a[n - 1 -h];
		a[n - 1 - h] = a[h];
		a[h] = temp;
	}
}
