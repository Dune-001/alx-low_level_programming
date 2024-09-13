#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adding a node 
 * @head: head of the list
 * @str: NULL
 *
 * Return: Always 0 (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_mode == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_mode;
	return (new_node);
}
