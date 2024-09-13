#include "lists.h"
/**
 * reverse_listint - reverse listint_t
 * @head: double ponter to the head of the list
 *
 * Return: point to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; // initialize pre to null as the ew tail of the reversed list
	listint_t *next = NULL; // temporary pointer to store the next node

	while (*head != NULL)
	{
		next = (*head)->next; // store the next node
		(*head)->next = prev; // reverse current node's pointer
		prev = *head; // move prev to current node
		*head = next; // move to next node in the orginal list
	}
	*head = prev; // update the head pointer to the new first node, previously the tail
	return (*head);// return new head of the reversed list
}
