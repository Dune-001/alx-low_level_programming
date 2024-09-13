#include <stdio.h>
#include <stdlib.h>
#include "function_headers.h"
/**
 * main - prog begins
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, k;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)main;
	for (k = 0; k < num_bytes; k++)
	{
		printf("%02x", ptr[k]);
		if (k != num_bytes -1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
