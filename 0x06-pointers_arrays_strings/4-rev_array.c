#include "main.h"
/**
* reverse_array - reverses an array
* @a: array to reverse
* @n: size of array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int z;

	for (i = 0; i < n / 2; i++)
	{
		z = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = z;
	}
}
