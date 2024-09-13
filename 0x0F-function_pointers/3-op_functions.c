#include "calc.h"
#include "function_headers.h"
/**
 * get_op_func - choose proper function for the arithmetic operation
 * @s: pointer
 *
 * Return: Proper function Always 0 (Success)
 */
int (*get_op_func(char *s))(int, int)
{
	if (*s == '+')
		return (op_add);
	if (*s == '-')
		return (op_sub);
	if (*s == '*')
		return (op_mul);
	if (*s == '/')
		return (op_div);
	if (*s == '%')
		return (op_mod);

	return (NULL);
}
