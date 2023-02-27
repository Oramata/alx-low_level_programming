#include "main.h"

/**
 * rev_string - Reverses a string in place
 *
 * @s: Pointer to string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	/* Find length of string */
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	/* Reverse string */
	j = i - 1;
	i = 0;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
		}
}
