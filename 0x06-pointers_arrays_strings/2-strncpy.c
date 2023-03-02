#include "main.h"

/**
 * strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
