#include "main.h"
/**
 * malloc_checked - function to allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: return pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
	{
		exit(98);
	}
	else
	{
		return (output);
	}
}
