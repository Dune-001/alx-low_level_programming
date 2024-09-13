#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free listint_t list
 * @head: pointer to head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;// store current node
		head = head->next;// movve to next node
		free(temp);// free memory of the current node
	}
}
