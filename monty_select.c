#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */
instruction_t *select_funct(int func_num, char *buf)
{
	void (*f1[15])(stack_t **stack, unsigned int line_number);
	instruction_t *monty_instruct;
	instruction_t **inst_ptr = &monty_instruct;

	monty_instruct = malloc(sizeof(instruction_t));
	if (monty_instruct == NULL)
	{
		fprintf(stderr, "Error: Malloc\n");
		exit(EXIT_FAILURE);
	}
	f1[1] = monty_push;
	/*f1[2] = monty_pall;
	f1[3] = monty_pint;
	f1[4] = monty_pop;
	f1[5] = monty_swap;
	f1[6] = monty_add;
	f1[7] = monty_nop;
	f1[8] = monty_sub;
	f1[9] = monty_div;
	f1[10] = monty_mul;
	f1[11] = monty_mod;
	f1[12] = monty_pchar;
	f1[13] = monty_pstr;
	f1[14] = monty_rotl;
	f1[15] = monty_rotr;*/

	(*inst_ptr)->opcode = buf;
	(*inst_ptr)->f = f1[func_num];

	return (*inst_ptr);
}
