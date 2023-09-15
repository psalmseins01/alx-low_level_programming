#include "main.h"
/**
* print_line - function to print _ or newline
* @n: function parameter
* Return: return value of n
*
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
