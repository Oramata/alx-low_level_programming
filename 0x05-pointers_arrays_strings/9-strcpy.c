#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src to the buffer pointed to by dest
 * @dest: A pointer to the destination buffer
 * @src: A pointer to the source string
 *
 * Return: A pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*(src + index))
	{
		*(dest + index) = *(src + index);
		index++;
	}

	*(dest + index) = *(src + index);

	return (dest);
}
