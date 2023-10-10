#include "main.h"
/**
 * _calloc - allocates memory using calloc
 * @nmemb: elements of array
 * @size: size of the array
 * Return: return pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	return (output);
}
