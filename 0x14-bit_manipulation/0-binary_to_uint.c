#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 * Return: The converted number, or 0 if there's an error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
		b++;
	}

	return (num);
}
