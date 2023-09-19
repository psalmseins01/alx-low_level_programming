#include "main.h"
/**
* swap_int - function that swaps two numbers
* @a: function parameter a
* @b: function parameter b
* Return: return void
*/

void swap_int(int *a, int *b)
{
	int c;
	 c = *a;
	*a = *b;
	*b = c;
}
