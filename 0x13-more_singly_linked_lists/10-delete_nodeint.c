#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index- deletes node at a given index of listnt_t
 * @head: double pointer to head of the list
 * @index: index of node to be deleted, starting at 0
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *temp_node;
	unsigned int k;

	if (current_node == NULL)
		return (-1);
	if (index = 0)
	{
		*head = current_node->next;// move head to the next node
		free(current_node);// free memory of the old head
		return (1);
	}
	for (k = 0; current_node != NULL && k < index - 1; k++)// find node before one to be deleted
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
		return (-1);
	temp_node = current_node->next;// store node to be deleted
	current_node->next = temp_node->next;// adjust pointer to skip node to be deleted
	free(temp_node);// free memory of deleted node
	return (1);
}
