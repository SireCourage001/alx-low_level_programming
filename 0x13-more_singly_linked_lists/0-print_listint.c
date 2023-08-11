#include "lists.h"
<<<<<<< HEAD
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
=======

/**
 * print_listint - print all the elements of a linked list
 * @h: linked list of type listint_t to print
>>>>>>> 26244602881d0491d22db1eef716627018811779
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
