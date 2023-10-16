#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination.
 * @src: Source.
 * @n: Amount of bytes used from source.
 * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int space1 = 0, space2 = 0;

	while (*(dest + space1) != '\0')
	{
		space1++;
	}

	while (space2 < n)
	{
		*(dest + space1) = *(src + space2);
		if (*(src + space2) == '\0')
			break;
		space1++;
		space2++;
	}
	return (dest);
}
