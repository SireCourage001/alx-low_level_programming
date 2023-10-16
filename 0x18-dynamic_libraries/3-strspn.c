#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Initial segment.
 * @accept: Accepted bytes.
 * Return: The num of accepted bytees.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
			return (i);
		}
	}
}
