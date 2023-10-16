#include "main.h"

/**
 * _strstr - Locate a substring.
 * @haystack: The str to search.
 * @needle: The str to find.
 *
 * Return: Char value.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
