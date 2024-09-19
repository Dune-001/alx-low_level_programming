#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @h: double pointer to head of doubly linked list
 * @idx: index where to add new node
 * @n: data to insert to new node
 *
 * Return: address of new node, or null if it fails or if insertion isn't possible
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int counter = 0;

    if (idx == 0) // insert at the beginning
    {
        return (add_nodeint(h, n));
    }
    temp = *h; // insert at the end
    while (temp != NULL && counter < idx - 1)
    {
        temp = temp->next;
        counter++;
    }
    if (temp == NULL || (temp->next == NULL && idx > counter + 1)) // if temp is null idx is out of range or if desired index is beyond the end of the list
    {
        return (NULL); // insertion isn't possible indicate failure
    }
    if (temp->next == NULL && idx == counter + 1)
    {
        return (add_dnodeint_end(h, n));
    }
    new_node = malloc(sizeof(dlistint_t)); // insert in the middle
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = temp->next; // new nodes next pointer points to current node
    new_node->prev = temp; // new node prev pointer point to the current node
    if (temp->next != NULL)
    {
        temp->next->prev = new_node; //update previous node of node that follows new node to point back to the new node
    }
    temp->next = new_node;
    return (new_node);
}