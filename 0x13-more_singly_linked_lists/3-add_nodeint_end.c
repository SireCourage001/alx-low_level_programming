#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: pointer to list head.
 * @n: integer to be included in the new node.
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *tmp_node = NULL, *new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		if (*head)
		{
			tmp_node = *head;
			while (tmp_node->next)
				tmp_node = tmp_node->next;
			tmp_node->next = new_node;
			new_node->prev = tmp_node;
		}
		else
			*head = new_node;
	}
	return (new_node);
}
