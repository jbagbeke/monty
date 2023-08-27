#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */
int valid_int(char *str)
{
	if (*str == '-' || *str == '+')
		str++;

	if (*str == '\0')
		return (1);

	while(*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
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
int check_validity(char *buffer)
{
	if (valid_int(buffer) == 1)
		return (1);

	return (0);
}
