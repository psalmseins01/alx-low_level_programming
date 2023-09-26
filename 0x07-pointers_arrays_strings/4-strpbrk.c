#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - locates string
 * @s: string to locate
 * @accept: arrays
 *
 * Return: returns value
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
