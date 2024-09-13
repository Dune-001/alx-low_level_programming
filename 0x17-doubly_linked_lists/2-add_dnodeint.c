#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add a new node at the beginning of dlistint_t list
 * @head: double pointer to the head of doubly linked list
 *
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n; //set new nodes data
    new_node->prev = NULL; //initialize prev pointer to NULL
    new_node->next = *head; //new_node next pointer set to current head of the list
    if (*head != NULL)
        (*head)->prev = new_node; //update previous head node prev pointer to point to the new node
    *head = new_node; //update head pointer to point to the new node
    return (new_node); //return address of the new node
}