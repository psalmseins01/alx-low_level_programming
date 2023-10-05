#include "main.h"
/**
 * argstostr - function that concatenates arguments
 * @ac: argument to count
 * @av: argument to store characters
 * Return: return pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int count = 0;
	char *result;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}

	result = malloc(sizeof(char) * count + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
