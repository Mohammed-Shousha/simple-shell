#include "main.h"

/**
 * exit_shell - exits the shell
 *
 * @line_buffer: the buffer that contains the command and it's arguments
 * @argv: array of strings
 *
 * Return: void
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
 * _env - outputs all environmental variables
 *
 * Return: void
 */
void _env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
}
