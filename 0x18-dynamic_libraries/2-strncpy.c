#include "main.h"
/**
* _strncpy - function to copy string
* @dest: function parameter pointer dest
* @src: function parameter pointer src
* @n: function parameter n
* Return: return dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
