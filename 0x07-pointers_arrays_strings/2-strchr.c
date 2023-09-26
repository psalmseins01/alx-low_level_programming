#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: return c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
