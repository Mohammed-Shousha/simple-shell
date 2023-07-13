#include "main.h"

/**
 * _getenv - gets an environmental variable
 *
 * @var: the name of the environmental variable
 *
 * Return: value of the environmental variable or NULL if not found
 */

char *_getenv(char *var)
{
	int i, len;

	if (var == NULL)
		return (NULL);

	len = strlen(var);

	for (i = 0; environ[i]; i++)
	{
		if (strncmp(var, environ[i], len) == 0)
			return (environ[i] + len + 1);
	}

	return (NULL);
}
