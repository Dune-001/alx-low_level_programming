#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listnt_safe - prints a listint_t linked list
 * @head: pointer to head of the list
 *
 * Return: number of nodes 
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node_count = 0;

	if (head == NULL)
		return (0);
	slow = head;
	fast = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		_putchar("[%p] %d\n" (void *)slow, slow->n);
		node_count++;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)// loop detected
		{
			_putchar("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}
	while (slow != NULL)
	{
		_putchar("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		node_count++;
	}
	return (node_count):
}
