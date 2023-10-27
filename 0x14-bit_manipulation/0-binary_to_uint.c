#include "main.h"
/**
 * binary_to_uint - binary digit to unsigned int
 * @b: representing binary
 * Return: return int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;
	int base_2;
	int len;

	if (!b)
		return (0);

	unint = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_2 = 1; len >= 0; len--, base_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			unint = unint + base_2;
		}
	}

	return (unint);
}
