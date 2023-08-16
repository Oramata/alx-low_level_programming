#ifndef CALC_H
#define CALC_H

typedef int (*op_func)(int, int);
op_func get_op_func(char *s);

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */
typedef struct op
{
	char *operator;
	op_func func;
} op_t;

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b);

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction.
 */
int sub(int a, int b);

/**
 * div_op - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the division.
 */
int div_op(int a, int b);

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b);

/**
 * mod - Calculates the modulo of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The remainder of the division.
 */
int mod(int a, int b);

#endif
