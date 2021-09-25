#include "monty.h"
/**
 * stack - change to a stack (LIFO, default)
 * @s: pointer to stack
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
 * queue - change to a queue (FIFO)
 * @s: pointer to stack
 * @n: line num of .m
 *
 */
void que(stack_t **stack, unsigned int n)
{
	glovar_t.stackorqueue = 1;

	(void) stack;
	(void) n;
}