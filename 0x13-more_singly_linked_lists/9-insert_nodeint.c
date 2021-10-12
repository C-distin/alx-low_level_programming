#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * new_node - creates a LL data node.
 * @n: data to insert into new node.
 * Return: address of new node or NULL if failed.
 */

static listint_t *new_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	return (node);
}

/**
 * insert_nodeint_at_index - inserts a data node at given index into LL
 * @head: pointer to the head of the list
 * @idx: index to insert into
 * @n: data to insert into idx spot in LL
 * Return: address of new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
