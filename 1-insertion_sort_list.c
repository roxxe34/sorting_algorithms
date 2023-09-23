#include "sort.h"
/**
 * insert_node - Inserts a node into a sorted doubly-linked list.
 * @sorted: Pointer to the sorted list.
 * @node: Node to be inserted.
 */
void insert_node(listint_t **sorted, listint_t *node)
{
	if (*sorted == NULL || node->n <= (*sorted)->n)
	{
		node->prev = NULL;
		node->next = *sorted;
		if (*sorted != NULL)
		{
			(*sorted)->prev = node;
		}
		*sorted = node;
	}
	else
	{
		listint_t *temp = *sorted;

		while (temp->next != NULL && temp->next->n < node->n)
		{
			temp = temp->next;
		}

		node->prev = temp;
		node->next = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = node;
		}
		temp->next = node;
	}
}
/**
 * insertion_sort_list - Sorts a doubly-linked list using the insertion sort.
 * @list: Pointer to the head of the list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted;
	listint_t *current;

	if (list == NULL || *list == NULL)
	{
		return;
	}

	sorted = NULL;

	current = *list;
	while (current != NULL)
	{
		listint_t *next = current->next;

		insert_node(&sorted, current);
		current = next;
	}

	*list = sorted;
}
