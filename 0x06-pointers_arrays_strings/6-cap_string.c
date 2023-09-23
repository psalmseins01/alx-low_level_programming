#include "main.h"
/**
 * cap_string - function to capitalize all strings
 * @a: pointer to the string
 * Return: return string
 */

char *cap_string(char *a)
{
	int i, j;
	char p[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (a[i] == p[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] = a[i + 1] - 32;
				}
			}
		}
	}
	return (a);
}
