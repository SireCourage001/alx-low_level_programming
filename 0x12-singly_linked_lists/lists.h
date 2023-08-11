#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
<<<<<<< HEAD
 * @str: string - (malloc string)
 * @len: length of the string
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 * by Courage for ALX project
 * typedef struct list_s
=======
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * ALX_project
 */
typedef struct list_s
>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

