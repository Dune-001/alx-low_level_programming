#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements of listint_t list
 * @h: pointer to the head of the list
 *
 * Return: numer of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
