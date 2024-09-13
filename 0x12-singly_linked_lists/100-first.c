#include <stdio.h>
/**
* pre_main - executed before main
*
* Return: Always 0 (Success)
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
