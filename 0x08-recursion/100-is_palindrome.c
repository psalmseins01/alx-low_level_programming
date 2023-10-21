#include "main.h"
/**
  * _string_lenght - checks for string lenght
  * @s: string to check
  * Return: return the lenght
**/
int _string_lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _string_lenght(s + 1));
}
/**
 * check_p - checks if the string is palindrome
 * @index: represents the index
 * @stlen: string length
 * @s: pointer to the string
 * Return: 1 if is polindrome or 0
**/
int check_p(int index, int stlen, char *s)
{
	if (stlen > 0)
	{
		if (s[index] == s[stlen])
		{
			return (check_p(index + 1, stlen - 1, s));
		}
		else if (s[index] != s[stlen])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check
 * Return: return 1 or 0
 */

int is_palindrome(char *s)
{
	return (check_p(0, _string_lenght(s) - 1, s));
}
