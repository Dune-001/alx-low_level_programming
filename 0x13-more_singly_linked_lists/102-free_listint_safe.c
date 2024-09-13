#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - free listint_t safely, handling loops
 * @head: double pointer to the head of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t node_count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	slow = *h;
	fast = *h;
	while (slow != NULL)
	{
		if (fast && fast->next)// move slow by 1 and fast by 2
			fast = fast->next->next;
		else
			fast = NULL;
		if (fast == slow)
		{
			while (*h != slow)
			{
				temp = *h;
				*h = (*h)->next;
				free(temp);
				node_count++;
			}
			*h = NULL;
			return (node_count);
		}// free nodes safely if no lopp detected
		temp = *h;
		*h = (*h)->next;
		free(temp);
		node_count++;
	}
	*h = NULL;
	return (node_count);
}
