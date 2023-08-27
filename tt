#include "lists.h"

/**
 * dlistint_len - calculates number of elements in d-list
 * @h: Pointer to first element of doubly-linked list
 * Return: Number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
