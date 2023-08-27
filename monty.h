#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *monty_head;

char **monty_tok(char *str, int *num);
void monty_space(char *command);
int monty_search(char **str, unsigned int line_number);
int valid_int(char *str);
instruction_t *select_funct(int func_num, char *buf);
int monty_exe(char **b, int func_num, unsigned int num);
int check_validity(char *buffer);
int count_tokens(char **buffer);
stack_t *add_node(stack_t *node1);
stack_t *monty_add__end(stack_t *node1);
void monty_print();
void monty_push(stack_t **stack, unsigned int line_number);
int monty_calc(stack_t *h);


#endif /* MONTY_H */
