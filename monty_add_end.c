#include "monty.h"

/**
 * monty_add_end - adds node at end of list
 * @stack: Pointer to first node of d-list
 * @line_number: data of new node to be added
 * Return: New node added
 */
stack_t *monty_add__end(stack_t **head)
{
	stack_t *node1, *ptr;

	node1 = malloc(sizeof(stack_t));
	if (!node1)
		return (NULL);

	node1->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = node1;
		node1->prev = ptr;
		return (node1);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = node1;
	node1->prev = ptr;
	return (node1);
}
