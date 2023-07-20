#include "main.h"

/**
 * _atoi - Convert a string to an integer
 *
 * @s: The string
 *
 * Return: Always 0 (sucess)
 */
int _atoi(char *s)
{
	int i, len, num, neg_count;

	len = _strlen(s);
	num = 0;
	neg_count = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (num == 214748364 && s[i] == '8')
				num = -(num * 10 + (s[i] - 48));
			else
				num = num * 10 + (s[i] - 48);
		}
		else if (s[i] == '-' && num == 0)
			neg_count++;
		else if (!(s[i] >= '0' && s[i] <= '9') && (num > 0))
			break;
	}
	if (neg_count % 2 != 0 && num != -2147483648)
		num = num * -1;
	return (num);
}

/**
 * exit_shell_with_status - exits the shell with status
 *
 * @line_buffer: the buffer that contains the command and it's arguments
 * @argv: array of strings
 * @status: the integer value that shell exit with
 *
 * Return: void
 */
void exit_shell_with_status(char *line_buffer, char **argv, int status)
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
		free(argv[i]);

	free(line_buffer);
	exit(status);
}
