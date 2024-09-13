#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free memory of the node
 * @head: pointer to the head of the node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;//save current node
		head = head->next;//move to next node
		free(temp->str);//free string inside the node
		free(temp);//free the node itself
	}
}
