#include "monty.h"
/**
 * stk - change to a stack (LIFO, default)
 * @stack: pointer to stack
 * @line_number: line num of .m
 *
 */
void stk(stack_t **stack, unsigned int line_number)
{
	glovar_t.stackorqueue = 0;

	(void) stack;
	(void) line_number;
}
/**
 * que - change to a queue (FIFO)
 * @stack: pointer to stack
 * @line_number: line num of .m
 *
 */
void queue(stack_t **stack, unsigned int line_number)
{
	glovar_t.stackorqueue = 1;

	(void) stack;
	(void) line_number;
}
