#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the head of stack
 * @line: line number
 * Return: Nothing on success, EXIT_FALURE if failure
 */
void swap(stack_t **stack, unsigned int line)
{
	int first_tmp = 0, second_tmp = 0, len = 0;

	len = lililen(stack);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	first_tmp = (*stack)->n;
	second_tmp = (*stack)->next->n;

	(*stack)->n = second_tmp;
	(*stack)->next->n = first_tmp;
}
/**
 * nop - does nothing
 * @stack: pointer to stack
 * @line: line number
 */
void nop(stack_t **stack, unsigned int line)
{
	(void)stack;
	(void)line;
}
