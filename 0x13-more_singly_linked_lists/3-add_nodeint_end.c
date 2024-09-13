#include <stdlb.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end of listint_t
 * @head: double pointer to the head of the list
 * @n: integer value to add to the list
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;// set value of the new node
	new_node->next = NULL;// new node will be the last node, next is NULL
	if (*head == NULL)// if list is empty, make new node the head
	{
		*head = new_node;
		return (new_node);
	}
	last = *head;//start at the head of the list
	while (last->next != NULL)//traverse to end of the list
	{
		last = last->next;
	}
	last->next = new_node; // append new node to end of the list
	return (new_node);
}
