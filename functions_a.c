#include "monty.h"

/**
 * push - Adds a new node at the beginning of a stack_t list.
 * @stack: pointer to stack
 * @line: line number
 * Return: The address of the new element, or NULL if it failed
 */
void push(stack_t **stack, unsigned int line) 
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
	return (new_node);
}

/**
 * pall - Function that prints all the elements of a stack_t list.
 * @stack
 * Return: Number of nodes
 */
size_t pall(const stack_t *stack) 
{
	size_t num_of_nodes = 0;

	while (stack)
	{
		printf("%d\n", stack->n);
		num_of_nodes++;
		stack = stack->next;
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
		fprintf(stderr, "L<line_number>: can't pint, stack empt\n", line);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;
	printf("%d\n",value);
}

/**
 * pop - deletes the node at the top of te stack
 * @stack: A pointer to the head of the stack_t.
 * @line: index of the node that should be deleted.
 * Return: -1 if it failed
 */
void pop(stack_t **stack, unsigned int line) 
{
	stack_t *tmp = *stack
+
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line)
		exit(EXIT_FAILURE):
	}
	tmp = stack->next; 
	free(*stack);
	*stack = next; 
}
