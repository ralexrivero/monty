#include "monty.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: position to add node
 * @n: node data
 * Return: The address of the new element, or NULL if it failed
 */
stack_t *push(dlistint_t **head, unsigned int n) /*push*/
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: node
 * Return: Number of nodes
 */
size_t pall(const stack_t *h) /*pall*/
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
/**
 * pint - Function that prints the value at the top of the stack.
 * @h: node
 * Return: Number of nodes
 */
void pint(stack_t **stack, unsigned int line)
{
	int value;
	if(!stack || !*stack)
	{
		printf("L<line_number>: can't pint, stack empt\n", line);
		exit(EXIT_FAILURE);
	}
	value = (*stack*)->n;
	printf("%d\n",value);
}

/**
 * delete_dnodeint_at_index - deletes the node at index
	*	of a dlistint_t linked list
 * @head: A pointer to the head of the dlistint_t.
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index) /*pop- specify positiion*/
{
	stack_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
