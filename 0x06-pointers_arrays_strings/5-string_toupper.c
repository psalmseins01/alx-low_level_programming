#include "main.h"
/**
 * string_toupper - function lowercase to uppercase letters of a string
 * @s: function parameter pointer
 * Return: return value
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
