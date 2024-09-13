#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of listint_t list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the node at the specified index, or null if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		if (current_index == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		current_index++;
	}
	return (NULL);
}
