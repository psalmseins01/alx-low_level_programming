#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds the five functions
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtracts
 * @a: int a
 * @b: int b
 * Return: returns difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: int a
 * @b: int b
 * Return: returns result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int a
 * @b: int b
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo function
 * @a: int a
 * @b: int b
 * Return: modulo of ints
 */

int op_mod(int a, int b)
{
	return (a % b);
}
