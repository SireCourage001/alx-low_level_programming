#include "main.h"

/**
* flip_bit - Count the num of bit to change,
* to get from one num to another.
* @n: First num.
* @m: Second num.
* Return: Num of bit to change.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> 1;
if (current & 1)
count++;
}

return (count);
}
