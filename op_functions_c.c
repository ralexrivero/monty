#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: double linked list head
 * @line_number: line of code of .m file
 **/
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *new;
	unsigned int temp;
	int len = 0;

	(void)line_number;
	len = lililen(stack);
	if (*stack != NULL && len >= 2)
	{
		new = malloc(sizeof(stack_t));
		if (!new)
		{
			fprintf(stderr, "Error: malloc failed\n");
/*			free_stack(stack); */
			exit(EXIT_FAILURE);
		}
		tmp = *stack;
		temp = tmp->n;
		*stack = tmp->next;
		free(tmp);
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->n = temp;
		new->prev = tmp;
		new->next = NULL;
	}
}
/**
 * rotr - rotates the stack to the bottom
 * @stack: double linked list pointer to head
 * @line_number: line of code of .m file
 **/
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL, *new = NULL;
	int len = 0;

	(void)line_number;
	len = lililen(stack);
	if (*stack != NULL && len >= 2)
	{
		new = malloc(sizeof(stack_t));
		if (!new)
		{
			fprintf(stderr, "Error: malloc failed\n");
/*			free_stack(stack); */
			exit(EXIT_FAILURE);
		}
		new->prev = NULL;
		tmp = *stack;
		while (tmp->next->next)
			tmp = tmp->next;
		new->n = tmp->next->n;
		free(tmp->next);
		tmp->next = NULL;
		tmp = *stack;
		new->next = tmp;
		*stack = new;
	}
}
