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
	stack_t *monty_stack;

	count = count_tokens(b);

	/*monty_head = malloc(sizeof(stack_t));
	if (!monty_head)
		exit(EXIT_FAILURE);*/

	for (i = 1; i < count; i++)
	{
		if (check_validity(b[i]) == 0)
	{
		inst = select_funct(func_num, b[0]);
	
	if (strcmp(b[0], "push") == 0)
	{
		monty_stack = malloc(sizeof(stack_t));
		if (monty_stack == NULL)
	{
		fprintf(stderr, "Error: Malloc\n");
		exit(EXIT_FAILURE);
	}
		monty_stack->n = atoi(b[i]);
	}

		inst->f(&monty_stack, num);
	}
	}
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

	/*monty_head = *stack;
	if (monty_head == NULL)
	{
	
	printf("I AM NULL\n");
	}
	monty_head = *stack;*/

}


/**
* print_dlistint - prints all elements of a double-linked list
* @h: Pointer to first element of list
* Return: Number of elements in a list
*/
void monty_print(void)
{
	stack_t *ptr, *ptr2;
	int num, i;

	ptr = monty_head;
	ptr2 = monty_head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	num = monty_calc(ptr2);
	for (i = 0; i < num; i++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->prev;
	}
}
