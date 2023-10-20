#include "lists.h"
/**
 * list_len - function to find the lenght of a list
 * @h: the head node
 * Return: returns the node lenght
 */

size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);

}
