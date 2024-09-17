#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of two diagonlas of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: dimension of the matrix
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int k;

	for (k = 0; k < size; k++)
	{
		sum1 += a[k * size + k];
		sum2 += a[k * size + (size - 1 - k)];
	}
	printf("%d, %d\n", sum1, sum2);
}
