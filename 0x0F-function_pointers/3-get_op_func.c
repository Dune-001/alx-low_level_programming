// definitions of arithmetic operations
#include "calc.h"
#include "function_headers.h"
/**
 * op_add - add
 * @a: first digit
 * @b: second digit
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract
 * @a: first digit
 * @b: second digit
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 * @a: first digit
 * @b: second digit
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 * @a: first digit
 * @b: second digit
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		_putchar("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - modulo
* @a: first digit
* @b: second digit
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		_putchar("Error\n");
		exit(100);
	}
	return (a % b);
}
