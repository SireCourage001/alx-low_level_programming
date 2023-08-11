#include "lists.h"
/**
<<<<<<< HEAD
 * free_listint2 - free a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
        if (head == NULL)
                return;
        while (*head)
        {
                temp = (*head)->next;
                free(*head);
                *head = temp;
        }
        *head = NULL;
}
=======
* free_listint2 - free a linked list
* @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
listint_t *actual_node;
listint_t *next_node;

if (!head)
return;

actual_node = *head;
next_node = (*head)->next;
while (next_node)
{
free(actual_node);
actual_node = next_node;
next_node = next_node->next;
}
free(actual_node);
*head = NULL;
}

>>>>>>> 26244602881d0491d22db1eef716627018811779
