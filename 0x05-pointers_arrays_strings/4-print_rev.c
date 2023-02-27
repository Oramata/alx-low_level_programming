#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse
 *
 * @s: Pointer to string
 */

void print_rev(char *s)
{
	int i, len = 0;

	/* Get the length of the string */
	while (s[len])
		len++;

	/* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
