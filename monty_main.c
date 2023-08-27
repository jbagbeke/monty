#include "monty.h"

/**
 *
 *
 *
 *
 *
 */
int main(int argc, char **argv)
{
	char **buffer, *m_line = NULL;
	unsigned int line_num = 0;
	size_t m_len = 0;
	int *cnt, count, funct_s;
	ssize_t m_read;
	FILE *f_open;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	cnt = &count;
	f_open = fopen(argv[1], "r");
	if (!f_open)
	{
		fprintf(stderr, " Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((m_read = getline(&m_line, &m_len, f_open)) != -1)
	{
		monty_space(m_line);
		buffer = monty_tok(m_line, cnt);
		line_num++;
		funct_s = monty_search(buffer);
		if (funct_s == 0)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, buffer[0]);
			exit(EXIT_FAILURE);
		}
		monty_exe(buffer, funct_s, line_num);
	}
	fclose(f_open);
	free(buffer);
	monty_free();
	return (0);
}
