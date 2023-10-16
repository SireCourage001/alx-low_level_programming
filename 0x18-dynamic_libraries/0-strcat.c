#include "main.h"

/**
 * _strcat - Appends src to the dest string.
 * @dest: String to append by src.
 * @src: String to append to dest
 *
 * Return: Address of dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
