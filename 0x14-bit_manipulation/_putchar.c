#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout.
 * @c: The char to print.
 *
 * Return: On suceess 1.
 * On error, -1 is returned & errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
