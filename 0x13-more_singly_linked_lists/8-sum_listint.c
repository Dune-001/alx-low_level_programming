#include "lists.h"
/**
 * sum_listint - return the sum of all the data (n) in listint_t
 * @head: poiter to the head of the list
 *
 * Return: sum of all data (n) in the list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;// add the data of the current node to the sum
		current_node = current_node->next;// move to the next node
	}
	return (sum);// return the total sum
}
