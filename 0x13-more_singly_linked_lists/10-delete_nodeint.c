#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index - 1 && current->next != NULL)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
