#include "main.h"

/**
 * string_toupper - Capitalize all words of a string
 * @s: the input string
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= 32;
		}
	}
	return (s);
}
