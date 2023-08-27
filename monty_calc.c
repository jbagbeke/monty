#include "monty.h"

/**
 * dlistint_len - calculates number of elements in d-list
 * @h: Pointer to first element of doubly-linked list
 * Return: Number of elements in list
 */
int monty_calc(stack_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
