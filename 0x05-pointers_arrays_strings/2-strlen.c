/**
* _strlen - function that returns lenght of string
* @s: function pointer
* Return: return string lenght
*
*/

int _strlen(char *s)
{
	int i;

	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
