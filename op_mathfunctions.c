#include "monty.h"

/**
 * add - adds top two elements of the stacks
 * @stack: pointer to the head of the stack
 * @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	int a, b, r;

	if ((*stack)->next == NULL || !(*stack))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	r = a + b;

	pop(stack, line_number);

	(*stack)->n = r;
}

/**
 * sub - subtracts tje top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int a, b, r;

	if ((*stack)->next == NULL || !(*stack))
	{
		fprintf(stderr, "L%d: can't ub stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	r = b - a;

	pop(stack, line_number);

	(*stack)->n = r;
}

/**
 * mul - multiplies the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int a, b, r;

	if ((*stack)->next == NULL || !(*stack))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	r = a * b;

	pop(stack, line_number);

	(*stack)->n = r;
}

/**
 * _div - divides the top two elements of the stack
 * @stack: pointer to the head the stack
 * @line_number: line number
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int a, b, r;

	if ((*stack)->next == NULL || !(*stack))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	if (a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	r = b / a;

	pop(stack, line_number);

	(*stack)->n = r;
}

/**
 * mod - divides top two elements of the stack and obtains the module
 * @stack: pointer to the head of the stack
 * @line_number: line number
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int a, b, r;

	if ((*stack)->next == NULL || !(*stack))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;
	if (a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	r = b % a;

	pop(stack, line_number);

	(*stack)->n = r;
}
