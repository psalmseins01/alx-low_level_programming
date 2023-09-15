#include "main.h"
/**
* _isdigit - function that returns ascii characters from 48 to 57
* @c: function parameter
* Retrun: retrun 1 or 0
*
*
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
