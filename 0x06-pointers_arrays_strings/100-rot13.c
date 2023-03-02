#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the input string
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_alphabet = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; *(alphabet + j); j++)
		{
			if (*(str + i) == *(alphabet + j))
			{
				*(str + i) = *(rot13_alphabet + j);
				break;
			}
		}
	}

	return (str);
}
