#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print elements of dlistint_t list
 * @h: pointer to head of the doubly linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        counter++;
        h = h->next;
    }
    return (counter);
}