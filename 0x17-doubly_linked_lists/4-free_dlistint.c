#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees dlistint_t list
 * @head: pointer to the head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL) // loop continues until all nodes are free i.e: head == NULL
    {
        temp = head; // store current node in temp pointer
        head = head->next; // head pointer is moved to the next node
        free(temp); // free current node
    }
}