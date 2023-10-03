#include "main.h"
/**
 * _atoi - convertion of string to integer
 * @s: parameter s
 *
 * Return: returns value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1; /* 1 for positive, -1 for negative*/
	int num = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (sign * num);
}
