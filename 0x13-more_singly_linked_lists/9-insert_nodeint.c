#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer
 * @idx: index
 * @n: data input
 *
 * Return: the address of the new node,
 * otherwise, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int hj;
	listint_t *ori;
	listint_t *hin;

	hj = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		hin = *head;
		for (; hj < idx - 1 && hin != NULL; hj++)
			hin = hin->next;

	if (hin == NULL)
		return (NULL);
	}

	ori = malloc(sizeof(listint_t));
	if (ori == NULL)
		return (NULL);
	ori->n = n;

	if (idx == 0)
	{
		ori->next = *head;
		*head = ori;
		return (ori);
	}
		ori->next = hin->next;
		hin->next = ori;

	return (ori);
}
