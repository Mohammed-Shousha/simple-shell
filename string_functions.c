#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The pointer of string
 *
 * Return: The length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - copy string
 *
 * @dest: The copy of string
 * @src: The string
 *
 * Return: dest (the copy of string)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strcmp - compair two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: >0 if first char is less than second equal, 0 if are equal
 * otherwise <0
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	res = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			res = (s1[i] - '0') - (s2[i] - '0');
			break;
		}
	}
	if (res == 0)
		res = 0;
	return (res);
}

/**
 * _strncmp - compair two substrings.
 *
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes
 *
 * Return: >0 if first char is less than second equal, 0 if are equal
 * otherwise <0
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i, res;

	res = 0;
	for (i = 0; (i < n) && (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			res = (s1[i] - '0') - (s2[i] - '0');
			break;
		}
	}
	if (res == 0)
		res = 0;

	return (res);
}

/**
 * _strdup - dublicates string
 *
 * @src: string to be dublicated
 *
 * Return: string after dublication process
 */
char *_strdup(char *src)
{
	char *dupstr;

	dubstr = malloc(_strlen(src) + 1);
	if (dubstr == NULL)
		return (NULL);

	_strcpy(dupstr, src);
	return (dupstr);
}
