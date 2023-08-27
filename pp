#include "lists.h"

/**
 * free_dlistint - Frees nodes of a d-list
 * @head: Pointer to first node
 * Return: Void
 */
void monty_free(stack_t *head)
{
stack_t *ptr;

if (head == NULL)
return;
while (head != NULL)
{
ptr = head;
head = head->next;
free(ptr);
}
ptr = NULL;
}
