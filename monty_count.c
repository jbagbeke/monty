#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */
int count_tokens(char **buffer)             {
	int count = 0;

	while (buffer[count] != NULL)
		count++;

	return (count);
}
