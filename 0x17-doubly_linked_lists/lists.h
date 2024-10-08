#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to previous node
 * @next: points to next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

#endif