#include "monty.h"

/**
 * add_dnodeint - adds node at beginning of list
 * @head: Pointer to a pointer to first node
 * @n: Integer to store in data part of node
 * Return: Pointer to first node of d-list
 */
stack_t *add_node(stack_t **head)
{
	stack_t *node1;

	node1 = malloc(sizeof(stack_t));
	if (!node1)
		return (NULL);

	node1->next = *head;

	if (*head != NULL)
		(*head)->prev = node1;

	*head = node1;
	return (node1);
}
