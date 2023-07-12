#include "main.h"

/**
 * _getenv - Gets an environmental variable.
 *
 * @var: the name of the environmental variable.
 *
 * Return: Null if environmental variable doesnt exist.
 *		   Otherwise, value of environmental variable.
 */

char *_getenv(char *var)
{
	int idx, len;

	if (var == NULL)
		return (NULL);

	len = strlen(var);

	for (idx = 0; environ[idx]; idx++)
	{
		if (strncmp(var, environ[idx], len) == 0)
			return (environ[idx] + len + 1);
	}

	return (NULL);
}
