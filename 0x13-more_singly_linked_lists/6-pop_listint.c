#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t and returns head node's data (n)
 * @head: double pointer to head of list
 *
 * Return: data of head node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return(0);
	temp = *head;// store current head node
	data = temp->n;// get data of head node
	*head = (*head)->next;// move head to the next node
	free(temp);// free memory of the old node
	return(data);
}
