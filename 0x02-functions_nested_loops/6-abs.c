#include "main.h"

/**
 * _abs - function compute the absolute value of an integer.
 *
 * @a: The integer to compute the absolute value of.
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
