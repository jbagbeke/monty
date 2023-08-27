#include "lists.h"

/**
 * free_dlistint - Frees nodes of a d-list
 * @head: Pointer to first node
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

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
