#include "monty.h"
/**
 * stk - change to a stack (LIFO, default)
 * @stack: pointer to stack
 * @n: line num of .m
 *
 */
void stk(stack_t **stack, unsigned int n)
{
	glovar_t.stackorqueue = 0;

	(void) stack;
	(void) n;
}
/**
 * que - change to a queue (FIFO)
 * @stack: pointer to stack
 * @n: line num of .m
 *
 */
void queue(stack_t **stack, unsigned int n)
{
	glovar_t.stackorqueue = 1;

	(void) stack;
	(void) n;
}