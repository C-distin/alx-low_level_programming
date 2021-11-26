#include "lists.h"

/**
 * sum_dlistint - function that sums the data of all the nodes in a dlistint_t linked list
 * @head: pointer to the first node of the list
 * 
 * Return: the sum of all the data (nodes) in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
