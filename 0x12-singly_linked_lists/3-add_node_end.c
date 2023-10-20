#include "lists.h"
/**
 * add_node_end - add a node at the end of list_t
 * @str: string
 * @head: node head
 * Return: return new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nNode, *temp;
	unsigned int i, cnt = 0;

	nNode = malloc(sizeof(list_t));
	if (nNode == NULL)
		return (NULL);
	nNode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		cnt++;
	nNode->len = cnt;
	nNode->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = nNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nNode;
	}
	return (*head);
}
