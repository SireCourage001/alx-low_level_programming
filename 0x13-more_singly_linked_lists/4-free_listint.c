#include "lists.h"
/**
<<<<<<< HEAD
 * free_listint - frees a linked list.
 * @head: listint_t list to be freed.
=======
 * free_listint - free a linked list
 * @head: listint_t list list to be freed
>>>>>>> 26244602881d0491d22db1eef716627018811779
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
<<<<<<< HEAD
	while (head);
=======
	while (head)
>>>>>>> 26244602881d0491d22db1eef716627018811779
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
