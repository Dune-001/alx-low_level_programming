#include "lists.h"
/**
 * dlistint_len - gives number of elements in dlistint_t list
 * @h: pointer to head of doubly linked list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
            counter++;
            h = h->next;
    }
    return (counter);
}