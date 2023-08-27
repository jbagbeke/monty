#include "monty.h"

extern Node* head = NULL;

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

	for (i = 1; i < count; i++)
	{
		if (check_validity(b[i]) == 0)
	{
		inst = select_funct(func_num, b[0]);
	
	if (inst->opcode == "push")
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
		monty_print(monty_head);
		free(monty_stack);
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
	if (monty_head == NULL)
		monty_head = add_node(stack);
	if (monty_head != NULL)
		monty_head = monty_add__end(stack);
}
