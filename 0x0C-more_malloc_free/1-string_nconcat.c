#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate strings
 * @s1: pointer to string1
 * @s2: pointer to string2
 * @n: represent number of characters
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int st1len, st2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		st1len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
		st2len++;

	output = malloc(sizeof(char) * (st1len + n) + 1);
	if (output == NULL)
		return (NULL);

	if (n >= st2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];

		for (i = 0; s2[i] != '\0'; i++)
			output[st1len + i] = s2[i];
		output[st1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];

		for (i = 0; i < n; i++)
			output[st1len + i] = s2[i];
		output[st1len + i] = '\0';
	}
	return (output);
}
