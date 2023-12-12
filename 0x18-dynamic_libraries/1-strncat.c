#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strncat - concatenate two strings together
* @dest: function parameter pointer dest
* @src: function parameter pointer src
* @n: parameter n
* Return: return dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
