#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	char *key;
	char *value;
	struct Node *next;
}Node;

typedef struct
{
	unsigned long int *size;
	Node **array;
}hash_table_t

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return NULL;

    new_table->size = size;
    new_table->array = malloc(sizeof(Node *) * size);
    if (new_table->array = NULL)
    {
	    free(new_table);
	    return NULL
    }

    for (unsigned long int i = 0; i < size; ++i)
    {
	    new_table->array[i] = NULL;
    }
    return new_table;
}
