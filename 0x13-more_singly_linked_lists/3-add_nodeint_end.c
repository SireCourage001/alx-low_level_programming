#include "lists.h"
<<<<<<< HEAD

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: pointer to list head.
 * @n: integer to be included in the new node.
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end_rec(listint_t *head, listint_t *tmp_node)
{
	if (head->next)
		tmp_node = add_nodeint_end_rec(head->next, tmp_node);
	else
		head->next = tmp_node;
	return (tmp_node);
}
/**
 * add_nodeint_end - adds the element at the end  of a listint_t
 * list recursively.
 * @head: double pointer to list.
 * @n: integer to be added into the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp_node = malloc(sizeof(listint_t));

	if (!tmp_node)
		return (NULL);
	if (*head)
		tmp_node = add_nodeint_end_rec(*head, tmp_node);
	else
		*head = tmp_node;
	tmp_node->n = n;
	tmp_node->next = NULL;
	return (tmp_node);
=======
/**
* add_nodeint_end - add a node at the end of a linked list
* @head: pointer to the first element in the list
* @n: data to insert in the new element 
* Return: pointer to the new node node, or NULL if it fails,
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
>>>>>>> 26244602881d0491d22db1eef716627018811779
}
