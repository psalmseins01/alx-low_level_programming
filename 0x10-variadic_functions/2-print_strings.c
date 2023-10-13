#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - function that prints a string
 * @separator: seperator character
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *strArg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(args, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(args);
	printf("\n");
}
