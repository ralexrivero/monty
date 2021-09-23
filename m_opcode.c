#include "monty.h"
/**
 * push - Adds a new node at the beginning of a stack_t list.
 * @stack: pointer to stack
 * @line: line number of .m file
 * @push_value: value to push
 */
void push(stack_t **stack, unsigned int line, int push_value)
{
	stack_t *new_node;

	(void)line;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = push_value;
	if (*stack)
	{
		(*stack)->prev = new_node;
		new_node->next = *stack;
		new_node->prev = NULL;
	}
	*stack = new_node;
}
/**
 * pall - Function that prints all the elements of a stack_t list.
 * @stack: pointer to the head of the stack_t list
 * @line: line number of .m file
 * Return: Number of nodes
 */
void pall(stack_t **stack, unsigned int line)
{
	stack_t *tmp = *stack;
	(void)line;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * pint - Function that prints the value at the top of the stack.
 * @line: node value
 * @stack: pointer to the head of the stack_t list
 */
void pint(stack_t **stack, unsigned int line)
{
	int value;

	(void)line;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empt\n", line);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;
	printf("%d\n", value);
}
/**
 * pop - deletes the node at the top of te stack
 * @stack: A pointer to the head of the stack_t.
 * @line: index of the node that should be deleted.
 */
void pop(stack_t **stack, unsigned int line)
{
	stack_t *tmp = *stack;

	(void)line;
	
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
}
