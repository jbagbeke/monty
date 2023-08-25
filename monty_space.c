#include "monty.h"

/**
 * monty_space - Removes leading and trailing spaces
 * @command: Pointer to string to de-spaced
 * Return: Void
 */
void monty_space(char *command)
{
	char *src = command, *end;

	while (*src == ' ')
	{
	src++;
	}

	if (*src == '\0')
	{
	*command = '\0';
	return;
	}

	end = src;
	while (*end)
	{
	end++;
	}
	end--;
	while (end > src && *end == ' ')
	{
	end--;
	}
	end++;

	while (src < end)
	{
	*command = *src;
	command++;
	src++;
	}

	*command = '\0';
}
