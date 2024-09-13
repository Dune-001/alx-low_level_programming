#include "lists.h"
/**
 * sum_dlistint - return sum of aall data(n) of a dlistint_t linked list
 * @head: pointer to head of the doubly linked list
 *
 * Return: sum of all data(n) or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n; // add each nodes n value to sum
        head = head->next;
    }
    return (sum);
}