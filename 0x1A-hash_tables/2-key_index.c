#include "hash_tbles.h"

/**
 * key_index - Get index at which a key/value
 * pair should be stored in an array of hash tables.
 * @key: Key to get index.
 * @size: Size of the array of hash table.
 *
 * Return: Index of the key.
 * Description: Uses djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
