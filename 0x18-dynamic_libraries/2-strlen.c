#include "main.h"

/**
 * _strlen - Find the length of a str.
 * @s: Pointer to the str to check.
 * Return: Void.
 */
int _strlen(char *s)
{
	int count = 0;
	while (s[count])
		count++;

	return (count);
}
