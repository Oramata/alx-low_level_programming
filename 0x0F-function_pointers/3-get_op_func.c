#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Returns a function pointer to the
 * appropriate operator function.
 * @s: The operator as a string.
 *
 * Return: A function pointer to the corresponding operator function,
 * or NULL if not found.
 */
op_func get_op_func(char *s)
{
	op_t ops[] = {
		{"+", add},
		{"-", sub},
		{"*", mul},
		{"/", div_op},
		{"%", mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].operator != NULL)
	{
		if (*(ops[i].operator) == *s)
			return (ops[i].func);
		i++;
	}

	return (NULL);
}
