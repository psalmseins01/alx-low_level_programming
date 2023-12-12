#include <stdio.h>
/**
* _strcat - concatenate two strings together
* @src: function parameter pointer src
* @dest: function parameter pointer dest
* Return: return dest
*/

char *_strcat(char *dest, char *src)
{
	char deststr = 0;
	char srcstr = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		deststr++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srcstr++;
	}
	for (i = 0; i <= srcstr; i++)
	{
		dest[deststr + i] = src[i];
	}
	return (dest);
}
