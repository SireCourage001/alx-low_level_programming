#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - print all the elements of a linked list
=======
 * print_list - prints all the elements of a linked list
>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
<<<<<<< HEAD
=======
size_t print_list(const list_t *h)
>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

