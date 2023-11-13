#include "main.h"
/**
 * flip_bits - number of bits to flip from one number to another
 * @n: representing number one
 * @m: representing number two
 * Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_of_bits;

	for (number_of_bits = 0; n || m; n = n >> 1, m = m >> 1)
	{
		if ((n & 1) != (m & 1))
			number_of_bits++;
	}

	return (number_of_bits);
}
