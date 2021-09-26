#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * @stack: pointer to stack
 * @n: line number to convert in char while be an ASCII code
 *
 */
void pchar(stack_t **stack, unsigned int n)
{
	stack_t *head;

	head = *stack;

	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", n);
/*		free_stack(s); */
		exit(EXIT_FAILURE);
	}
	if (head->n < 0 || head->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", n);
/*		free_stack(s); */
		exit(EXIT_FAILURE);
	}
	putchar((*stack)->n);
	putchar('\n');
}
/**
 * pstr - prints the string starting at the top of the stack
 * @s: pointer to stack
 * @n: line number
 *
 */
void pstr(stack_t **stack, unsigned int n)
{
	stack_t *head;

	(void) stack;
	(void) n;

	head = *stack;
	if (*stack == NULL)
	{
		putchar('\n');
		return;
	}
	while (head && head->n > 0 && head->n <= 127)
	{
		putchar(head->n);
		head = head->next;
	}
	putchar('\n');
}