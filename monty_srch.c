#include "monty.h"

/**
 *
 *
 *
 *
 *
 */
int monty_search(char **str)
{
	char *com, *com2, *token, *joined;
	int t_len, func_num = 1;

	com = "push pall pint pop swap add nop sub";
	com2 = " div mul mod pchar pstr rotl rotr";
	t_len = strlen(com) + strlen(com2) + 1;
	joined = malloc(t_len);

	if (!joined)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	strcpy(joined, com);
	strcat(joined, com2);
	token = strtok(joined, " ");

	while (token != NULL)
	{
		if (strcmp(token, str[0]) == 0)
		{
			free(joined);
			return (func_num);
		}

		func_num++;
		token = strtok(NULL, " ");
	}
	free(joined);
	return (0);
}
