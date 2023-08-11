#include "lists.h"
<<<<<<< HEAD

/**
 * add_node int - add a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
=======
/**
* add_nodeint - add a new node at the beginning of a linked list
* @head: pointer to the first node in the list
* @n: data to insert in that new node
* Return: pointer to the new node, or NULL if it fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
>>>>>>> 26244602881d0491d22db1eef716627018811779
}
