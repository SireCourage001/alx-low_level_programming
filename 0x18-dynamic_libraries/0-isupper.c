#include "main.h"
#include <stdio.h>


/**
 * _isupper - Checks if c is upper
 *
 * @c: Input for char
 *
 * Return: 1 if it is uppercase, & 0 if not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
