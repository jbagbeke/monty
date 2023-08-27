#include "monty.h"

stack_t *monty_head = NULL;

/**
 *
 *
 *
 *
 *
 *
 */
int monty_exe(char **b, int func_num, unsigned int num)
{
	int count, i;
	instruction_t *inst;
	stack_t *monty_stack, *tmp_stack;

	count = count_tokens(b);
	
	if (count == 1)
	{
	if (strcmp(b[0], "push") == 0)
		push_error(num);

	inst = select_funct(func_num, b[0]);

	if (strcmp(b[0], "push") != 0)
		inst->f(&tmp_stack, num);
	}

	if (count > 1)
	{
	for (i = 1; i < count; i++)
	{
		if (check(b[i]) == 0)
	{
		inst = select_funct(func_num, b[0]);

		if (strcmp(b[0], "push") == 0)
		{
			monty_stack = malloc(sizeof(stack_t));

			if (monty_stack == NULL)
			{
				fprintf(stderr, "Error: malloc failed\n");
				exit(EXIT_FAILURE);
			}

			monty_stack->n = atoi(b[i]);
			inst->f(&monty_stack, num);
		}
	}

	}
	}
	free(inst);
	return (0);
}

/**
 *
 *
 *
 *
 *
 */
void monty_push(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	(void)line_number;

	if (monty_head == NULL)
	{
		(*stack)->prev = NULL;
		(*stack)->next = monty_head;
		monty_head = *stack;
	}

	if (monty_head != NULL)
	{
		ptr = monty_head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = *stack;
		(*stack)->prev = ptr;
		(*stack)->next = NULL;
	}
}


/**
* print_dlistint - prints all elements of a double-linked list
* @h: Pointer to first element of list
* Return: Number of elements in a list
*/
void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr2;
	int num, i;

	(void)line_number;
	ptr2 = monty_head;
	*stack = monty_head;
	while ((*stack)->next != NULL)
		*stack = (*stack)->next;

	num = monty_calc(ptr2);
	for (i = 0; i < num; i++)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->prev;
	}
}

/**
* free_dlistint - Frees nodes of a d-list
* @head: Pointer to first node
* Return: Void
*/
void monty_free(void)
{
	stack_t *ptr;

	if (monty_head == NULL)
		return;
	while (monty_head != NULL)
	{
		ptr = monty_head;
		monty_head = monty_head->next;
		free(ptr);
	}
	ptr = NULL;
}
