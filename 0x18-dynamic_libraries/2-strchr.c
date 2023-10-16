#include "main.h"

/**
 * _strchr - Locate char in string.
 * @s: Source string
 * @c: Char to find.
 *
 * Return: The string from char found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
