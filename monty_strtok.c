#include "monty.h"

/**
 * monty_tok - Function to tokenize a string
 * @str: String to be tokenized
 * Return: Char **(tokens)
 */
char **monty_tok(char *str, int *num)
{
	char **args, *delim = " \t\n$";
	char *token, *str_cpy;
	int i = 0;

	*num = 0;
	args = malloc(strlen(str) * sizeof(char *));

	str_cpy = malloc(strlen(str) * sizeof(char *));

	if (args == NULL || str_cpy == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	strcpy(str_cpy, str);
	token = strtok(str_cpy, delim);

	while (token != NULL)
	{
	args[i] = malloc((strlen(token) * sizeof(char *)) + 1);

	if (args[i] == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	free(args);
	exit(EXIT_FAILURE);
	}
	strcpy(args[i], token);
	token = strtok(NULL, delim);
	i++;
	(*num)++;
	}
	args[i] = NULL;

	free(str_cpy);
	return (args);
}
