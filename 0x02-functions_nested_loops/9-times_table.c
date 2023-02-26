#include "main.h"

/**
 * times_table - function prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				if (column != 0)
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
