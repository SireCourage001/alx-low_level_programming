#include "main.h"
/**
 * _islower - Checks for a lowercase char.
 * @c: Letter being tested.
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
