#include "monty.h"
/**
 * stack - change to a stack (LIFO, default)
 * @s: pointer to stack
 * @n: line num of .m
 *
 */
void stack(stack_t **s, unsigned int n)
{
	glovar_t.stackorqueue = 0;

	(void) s;
	(void) n;
}
/**
 * queue - change to a queue (FIFO)
 * @s: pointer to stack
 * @n: line num of .m
 *
 */
void queue(stack_t **s, unsigned int n)
{
	glovar_t.stackorqueue = 1;

	(void) s;
	(void) n;
}