#include <stdlb.h>
#include "lists.h"
/**
 * add_nodeint - adds anew node at beginning of listint_t list
 * @head: double pointer to head of the list
 * @n: integer to store in the new node
 *
 * Return: address ofnew element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_mode;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n; // set value of the new node
	new_node->next = *head; // make new node point to current head
	*head = new_node; // update head to point to new_node
	return (new_node);
}
