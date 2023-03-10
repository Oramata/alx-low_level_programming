#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to the measured.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
