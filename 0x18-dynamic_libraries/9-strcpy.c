#include "main.h"

/**
 * _strcpy - Copy the str pointede to by src.
 * @dest: Char type string
 * @src: Char type string.
 * Description: Copy the str pointed to by the pointer "src" to,
 * the buffer pointed to by dest.
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do{
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
