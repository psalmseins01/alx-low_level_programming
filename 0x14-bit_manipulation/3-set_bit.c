#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: bit index
 * Return: return 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result;

	if (index > 63)
		return (-1);

	result = 1 << index;
	*n |= result;

	return (1);
}
