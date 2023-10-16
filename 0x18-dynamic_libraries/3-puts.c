#include "main.h"
/**
 * _puts - Prints a string, followed by a new line.
 * @str: Pointer to the str to print.
 * Return: Void
 */
void _puts(char *str)
{
	int index = 0;
	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
