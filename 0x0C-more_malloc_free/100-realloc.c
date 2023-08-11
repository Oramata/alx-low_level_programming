#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory block to be reallocated.
 * @old_size: The current size of the allocated space for ptr.
 * @new_size: The new size of the memory block.
 *
 * Return: A pointer to the reallocated memory block,
 * or NULL if new_size is zero or if allocation fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (new_ptr);
}
