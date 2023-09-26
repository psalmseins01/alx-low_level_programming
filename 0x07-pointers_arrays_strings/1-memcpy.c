#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination location
 * @src: source location
 * @n: number of bytes to copy
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
