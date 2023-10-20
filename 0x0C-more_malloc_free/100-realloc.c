#include "main.h"
#include <stdio.h>
/**
 * _realloc - function to reallocate memory
 * @ptr: pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: return mptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *mptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mptr = malloc(new_size);

		if (mptr == NULL)
			return (NULL);
		return (mptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	mptr = malloc(new_size);

	if (mptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		mptr[i] = ((char *) ptr)[i];

	free(ptr);
	return (mptr);
}
