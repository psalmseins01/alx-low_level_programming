#include "main.h"
/**
 * factorial - function that finds factorial of a number
 * @n: parameter representing the number n
 * Return: return -1 or 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
