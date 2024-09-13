#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add new node at end of dlistint_t list
 * @head: double pointer to the head of the doubly linked list
 * @n: data to nsert in new node
 *
 * Return: Address of new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;

    new_node = malloc(sizeof(dlistint_t));
    new_node->n = n;
    new_node->prev = NULL;
    if (*head == NULL) // if list is empty new node becomes the head
    {
        new_node->prev = NULL; //prev of new node is set to NULL
        *head = new_node; // head pointer is updated to point to new node
        return (new_node); //return new nodes address in this case
    }
    temp = *head; // temp receives head pointer
    while (temp->next != NULL)// traverse list to find last node
    {
        temp = temp->next;
    }
    temp->next = new_node; // last node next pointer is updated to point to new node
    new_node->prev = temp; // new node prev pointer is set to point to previous last node
    return (new_node);
}