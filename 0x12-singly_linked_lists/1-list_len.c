#include <stdlib.h>
#include "lists.h"
/**
 * list_len - size of list_t
 * @h: pointer to list_t
 *
 * Return: ALways 0 (Success)
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
