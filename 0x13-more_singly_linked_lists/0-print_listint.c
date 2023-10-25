#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of a linked list
 * @h: head of the list nodes
 * Return: return number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
