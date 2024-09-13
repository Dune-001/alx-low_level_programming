#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: address of the node where the loop starts or null if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next; // move slow pointer by 1 step
		fast = fast->next->next; // move fast pointer by two steps
		if (slow == fast) // loop detected
		{
			slow = head; // reset slow pointer to the start
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);// fast and slow now point to the start of the loop
		}
	}
	return (NULL); // no loop detected
}
