#include "main.h"
/**
* print_diagonal - function to print diagonal line using backslah
* @n: function parameter
* Return: return the value of n
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
