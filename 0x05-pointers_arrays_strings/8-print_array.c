#include "main.h"
#include <stdio.h>
/**
* print_array - function that prints an array of elements
* @a: pointer parameter
* @n: array of elements n
* Return: return void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
