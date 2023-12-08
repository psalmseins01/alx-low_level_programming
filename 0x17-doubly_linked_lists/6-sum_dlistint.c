#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: pointer to head
 * Return: return sum of int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_ = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_ = sum_ + head->n;
			head = head->next;
		}
	}
	return (sum_);
}
