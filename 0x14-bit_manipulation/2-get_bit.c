#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: unsigned long int n
 * @index: represents bit index
 * Return: returns index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}

	return (-1);
}
