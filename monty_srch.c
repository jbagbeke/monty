#include "monty.h"

/**
 *
 *
 *
 *
 *
 */
int monty_search(char *str)
{
	char *com, *com2, *token, *token2, *joined;
	int t_len, valid = 0, func_num = 0;
	
	com = "push pall pint pop swap add nop sub";
	com2 = " div mul mod pchar pstr rotl rotr";
	t_len = strlen(com) + strlen(com2) + 1;
	joined = malloc(t_len);

	if (!joined)
	{
		fprintf(stderr, "Error: Malloc\n");
		exit(EXIT_FAILURE);
	}
	strcpy(joined, com);
	strcat(joined, com2);
	token = strtok(joined, " ");

	while (token != NULL)
	{
		if (strcmp(token, str) == 0)
		{
			valid++;
			token2 = strtok(joined, " ");
			while (token2 != NULL)
			{
			if (strcmp(str, token2) == 0)
				break;
			token2 = strtok(NULL, " ");
			func_num++;
			}
			select_funct(func_num);
			break;
		}
		token = strtok(NULL, " ");
	}
	free(joined);
	return (valid);
}
