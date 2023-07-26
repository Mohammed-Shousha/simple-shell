#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_str - prints a string to stdout
 *
 * @s: pointer to an array of chars
 */

void print_str(char *s)
{
	int i;

	i = _strlen(s);

	write(STDOUT_FILENO, s, i);
}
