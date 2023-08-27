#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */
void push_error(unsigned int num)
{
	fprintf(stderr, "L%u: usage: push integer\n", num);
	fflush(stdout);
	exit(EXIT_FAILURE);
}
