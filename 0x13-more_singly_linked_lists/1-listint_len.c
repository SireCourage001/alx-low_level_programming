#include "lists.h"
<<<<<<< HEAD

/**
* listint_len - returns the number of elements in a linked lists
* @h: linked list of type listint_t to traverse
*
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h);
{
num++;
h = h->next;
}
return (num);
=======
/**
* listint_len - return the number of elements in a linked lists
* @h: linked list of type listint_t to traverse
* Return: number of nodes
*/
size_t listint_len(const listint_t *h);
{
const listint_t *node = h;
size_t cont = 0;

while (node)
{
cont++;
node = node->next;
}
return (cont);
>>>>>>> 26244602881d0491d22db1eef716627018811779
}

