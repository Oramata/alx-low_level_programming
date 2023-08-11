#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	char *new_ptr;
	char *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
		memcpy(new_ptr, old_ptr, new_size);
	else
		memcpy(new_ptr, old_ptr, old_size);

	free(ptr);
	return (new_ptr);
}
