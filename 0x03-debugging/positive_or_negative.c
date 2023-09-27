#include <stdio.h>
#include "main.h"
/**
* positive_or_negative - function to debug
* @i: function parameter
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	printf("%d is negative", i);
}
