#include "variadic_functions.h"
/**
  * print_all - anything
  * @format: arguments list
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list arg;
	char *s, *separator;

	va_start(arg, format);

	separator = "";

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
