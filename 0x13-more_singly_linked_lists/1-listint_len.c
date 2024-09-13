#include "lists.h"
/**
 * listint_len  - returns number of elements of listint_t list
 * @h: pointer to head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
