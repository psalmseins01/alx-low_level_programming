#include "main.h"
/**
 * str_concat - function to concatenate two strings
 * @s1: parameter s1
 * @s2: parameter s2
 * Return: return a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;

	int i;
	char *output;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len_1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len_2++;
	}
	output = malloc(sizeof(char) * (len_1 + len_2) + 1);

	if (output == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		output[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		output[len_1 + i] = s2[i];
	}
	return (output);
}
