#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: A function pointer used to compare values.
 *
 * Return: Index of the first element for which cmp function does not return 0,
 * or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
