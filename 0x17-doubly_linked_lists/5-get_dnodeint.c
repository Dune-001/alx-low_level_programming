#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns nth node of dlistint_t linked list
 * @head: pointer to head of doubly linked list
 * @index: index of the node, starting from 0
 *
 * Return: nth node of the list or NULL if not doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int counter = 0;

    while (head != NULL) // traverse list until head == NULL
    {
        if (counter == index) // check if counter matches desired index
            return (head); // if node at requested index is found returns pointer to that node
        head = head->next; // if index isn't reached it moves pointer to the next node
        counter++;
    }
    return (NULL);
}