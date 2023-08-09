#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: On success, returns a pointer to the newly
 * allocated duplicated string. If str is NULL or
 * if there is insufficient memory, returns NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}
