#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 *
 *@n: function parameter
 *
 *Return: k
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;

	if (k < 0)
		k = -k;

	_putchar(k + '0');

	return (k);
}
