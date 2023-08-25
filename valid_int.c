#include "monty.h"

/**
 *
 *
 *
 *
 *
 *
 */
void valid_int(char *str)
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
