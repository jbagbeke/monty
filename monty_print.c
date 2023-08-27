#include "monty.h"

/**
 * print_dlistint - prints all elements of a double-linked list
 * @h: Pointer to first element of list
 * Return: Number of elements in a list
 */
size_t monty_print(stack_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num += 1;
	}
	return (num);
}
