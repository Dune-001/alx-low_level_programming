#include "calc.h"
#include "funtion_headers.h"
/**
 * main - program starts
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success
 */
int main(int argc, char *argv[])
{
	int num1, num2 result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		_putchar("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL || argv[2][1] != '\0')
	{
		_putchar("Error\n");
		return (99);
	}
	result = operation(num1, num2);
	_putchar("%d\n", result);
	result (0);
}
