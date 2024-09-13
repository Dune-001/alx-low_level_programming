#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * is_digit - finds digit
 * @str: string
 * print_error -print error
 * multiply - multiply two int
 * @num1: first digit
 * @num2: second digit
 *
 * Return: Always 0 (Success)
 */
int is_digit(char *str);
void print_error(void);
char *multiply(char *num1, char *num2);

int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		print_error();
	}
	if (!is_digit(argv[1] || !isdigit(argv[2]))
	{
		print_error();
	}
	result = multiply(argv[1], argv[2]);
	if (result == NULL)
	{
		 print_error();
	}
	_putchar("%s\n", result);
	free(result);
	return (0);
}
	int is_digit(char *str)
	{
		while (*str)
		{
			if (!isdigit(*str))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
	void print_error(void)
	{
		_putchar("Error\n");
		exit(98);
	}
	char *multiply(char *num1, char *num2)
	{
		int len1 = strlen(num1);
		int len2 = strlen(num2);
		int len_result = len1 + len2;
		char *result = calloc(len_result + 1, sizeof(char));
		int k, l, carry;

		if (result == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < len_result; k++)
		{
			result[k] = '0';
		}
		for (k = len1 - 1; k >=0; k--)
		{
			carry = 0;
			for (l = len2 - 1; l >= 0; l--)
			{
				int prod = ((num[k] - '0') * (num2 [l] - '0') + (result[k + l + 1] -'0')
					    carry = prod / 10;
					    result[k + l + 1] = (prod % 10) + '0';
					    }
					result[k + l + 1] += carry;
			}
			for (k = 0; k < len_result; k++)
			{
				if (result[k] != '0')
				{
					break:
				}
			}
			if (k == len_result)
			{
				result[2] = '\0';
				return (result);
			}
			return (result + k);\
		}
