#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */
void select_funct(int func_num)
{
	void (*f1[15])(stack_t **stack, unsigned int line_number);

	f1[0] = monty_push;
	f1[1] = monty_pall;
	f1[2] = monty_pint;
	f1[3] = monty_pop;
	f1[4] = monty_swap;
	f1[5] = monty_add;
	f1[6] = monty_nop;
	f1[7] = monty_sub;
	f1[8] = monty_div;
	f1[9] = monty_mul;
	f1[10] = monty_mod;
	f1[11] = monty_pchar;
	f1[12] = monty_pstr;
	f1[13] = monty_rotl;
	f1[14] = monty_rotr;


}
