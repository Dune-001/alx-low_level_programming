#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees listint_t and sets head as null
 * @head: double pointer to head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)// check if double pointer is null
		return;
	while (*head != NULL)
	{
		temp = *head;// store current node
		*head = (*head)->next;// move to next node
		free(temp);// free the memory of the current node
	}
	*head = NULL;// set the head to null
}
