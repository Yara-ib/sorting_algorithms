#include "sort.h"

/**
 * switch_nodes - switching the nodes in the doubly linked list.
 * @head: double pointer to doubly linked list of integers.
 * @node: first node in either forward or going backwards the list.
 * @node1: node that follows *node or comes before it.
 * Return: nothing.
*/

void switch_nodes(listint_t **head, listint_t *node, listint_t *node1)
{
	listint_t *anchor;

	anchor = node1->next;
	node->next = node1->next;

	if (node1->next != NULL)
		anchor->prev = node;

	node1->prev = node->prev;
	node1->next = node;

	anchor = node->prev;
	if (node->prev != NULL)
		anchor->next = node1;
	else
		*head = node1;

	node->prev = node1;
}

/**
 * cocktail_sort_list - sorts list in ascending order (Cocktail shaker sort).
 * @head: double pointer to doubly linked list of integers.
 * Return: nothing.
*/

void cocktail_sort_list(listint_t **head)
{
	listint_t *node;
	int check_swap = 1;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;

	while (check_swap)
	{
		check_swap = 0;
		node = *head;

		while (node->next != NULL)
		{
			if (node->n > node->next->n)
			{
				switch_nodes(head, node, node->next);
				print_list(*head);
			}
			else
				node = node->next;
		}

		node = node->prev;

		while (node->prev != NULL)
		{
			if (node->n < node->prev->n)
			{
				switch_nodes(head, node->prev, node);
				print_list(*head);
				check_swap = 1;
			}
			else
				node = node->prev;
		}
	}
}
