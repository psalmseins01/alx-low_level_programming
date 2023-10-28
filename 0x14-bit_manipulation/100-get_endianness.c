#include "main.h"
/**
 * get_endianness - Function that checks the endianness
 * Return: return 1 or 0
 */
int get_endianness(void)
{
	char *d;
	unsigned int i;

	i = 1;
	d = (char *) &i;

	return ((int)*d);
}
