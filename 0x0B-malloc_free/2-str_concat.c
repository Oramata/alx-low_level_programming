#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: a pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null is passed, treat it as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length])
		s1_length++;
	while (s2[s2_length])
		s2_length++;

	concatenated = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < s2_length; j++)
		concatenated[i + j] = s2[j];

	concatenated[s1_length + s2_length] = '\0';

	return (concatenated);
}
