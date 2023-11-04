#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: hash table
 * @key: is the key. Key can not be an empty string
 * @value: Value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 0 on success, 1 on failurre
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *node;
hash_node_t *new_node;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (1);
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (1);

	ht->array[index] = new_node;
	return (0);
}

while (node != NULL)
{
	if (strcmp(key, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (0);
	}
	node = node->next;
}

new_node = create_new_node(key, value);
if (new_node == NULL)
	return (1);

new_node->next = ht->array[index];
ht->array[index] = new_node;
return (0);
}

/**
 * create_new_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 0 on success, 1 on failurre
 */

hash_node_t *create_new_node (const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
