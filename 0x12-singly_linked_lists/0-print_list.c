#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print elements of list_t
 * @h: pointer to list_t
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
