#include "main.h"

/**
 * _strncpy - Copies a str.
 * @dest: Destination.
 * @src: Source
 * @n: Amount of bytes from src.
 * Return: The pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
