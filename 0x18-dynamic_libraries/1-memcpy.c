#include "main.h"

/**
 * _memcpy - Copy mem area.
 * @dest: Pointer to return.
 * @src: Source mem area.
 * @n: Bytes from mem area to copy.
 *
 * Return: The pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
