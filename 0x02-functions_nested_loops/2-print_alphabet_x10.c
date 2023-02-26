#include "main.h"

/**
 * print_alphabet_x10 - code found below will print 10 times the alphabet
 *
 * Return: always 0;
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
