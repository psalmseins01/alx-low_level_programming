#include "main.h"
/**
* _strcpy - function to copy src to dest including nullbyte
* @dest: function parameter pointer
* @src: function parameter pointer
* Return: return dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
