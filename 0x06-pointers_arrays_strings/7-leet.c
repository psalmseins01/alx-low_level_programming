#include "main.h"
/**
 * leet - function to encode strings to digits
 * @a: string requiring encoding
 * Return: return string
 */

char *leet(char *a)
{
	int i, j;
	char *s = "aAeEoOtTlL";
	char *t = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s[j])
			{
				a[i] = t[j];
			}
		}
	}
	return (a);
}
