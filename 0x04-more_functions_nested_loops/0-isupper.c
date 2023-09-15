#include "main.h"
/**
*_isupper - function that returns 1 for uppercase character if not 0
*@c: function parameter
*Return: returns 1 or 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
