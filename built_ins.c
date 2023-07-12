#include "main.h"

/**
 * exit_shell - clears all allocated memory, prints exit meassage and
 * exits the shell
 *
 * @line_buffer: the buffer that contains the command and it's arguments
 * @argv: array of strings
 */
void exit_shell(char *line_buffer, char **argv)
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
		free(argv[i]);

	free(line_buffer);
	exit(0);
}

/**
 * _env - Outputs all environmental variables.
 *
 * Return: nothing.
 */
void _env(void)
{
	int idx;

	for (idx = 0; environ[idx]; idx++)
		printf("%s\n", environ[idx]);
}
