#include "main.h"
/**
 * _pow_recursion - function for x to the power of y
 * @x: parameter x
 * @y: parameter y
 * Return: return -1 or 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
