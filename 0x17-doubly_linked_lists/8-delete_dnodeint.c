#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given index of dlistint_t linked list
 * @head: double pointer to head of the doubly linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp;
    unsigned int counter = 0;

    if (*head == NULL) // check if list is empty
    {
        return (-1); // list is empty
    }
    temp = *head;
    if (index == 0) // delete head node
    {
        *head = temp->next; // point header pointer to next node
        if (*head != NULL)
        {
            (*head)->prev = NULL; //prev pointer of new head if exists set to NULL
        }
        free(temp); //free old head node
        return (1); // success
    }
    while (temp != NULL && counter < index) // traverse node just before the target index
    {
        temp = temp->next; // temp is moved forward
        counter++; // incremented until counter matches index or temp == NULL
    }
    if (temp == NULL) // temp is null index is out of range
    {
        return (-1);
    }
    if (temp->next == NULL) // if node to be deleted is the last node
    {
        temp->prev->next = NULL; // previous node's next pointer is set to
        free(temp); // last node is freed
        return (1); // success
    }
    temp->prev->next = temp->next; // update next pointer of the previous node
    temp->next->prev = temp->prev; // update prev pointer of next node
    free(temp); // free node
    return (1); // success
}