#include "main.h"
/**
 * _memset - fills memory a constant byte
 * @n: number of bytes
 * @b: constant byte
 * @s: area to fill with byte
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
