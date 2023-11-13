#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to ul int
 * @index: index of bit
 * Return: return 1 or 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int result;

	if (index > 63)
		return (-1);

	result = 1 << index;

	if (*n & result)
		*n = *n ^ result;
	return (1);
}
