#include "main.h"
/**
 * _strdup - function that returns a pointer to a space in memory
 * @str: string to copy new memory
 * Return: return a pointer
 */

char *_strdup(char *str)
{
	int i;
	int cnt = 0;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		cnt++;
	}
	cpy = malloc(sizeof(char) * cnt + 1);

	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
