#ifndef MONTY_H
#define MONTY_H

/* libraries */
#include <stdio.h>
#include <stdlib.h> /* exit status */
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define DELIM "\t\n "

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct glovar - global variable structs
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: global variables for Monty project
 */
struct glovar
{
	int stackorqueue;
} glovar_t;

/* prototypes */
void readfile(FILE *fp);
bool push_validate(char *push_value, int line_n);
int get_opcode(const char *opcode, stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
size_t lililen(stack_t **stack);
/* function prototypes for opcodes */

void push(stack_t **stack, unsigned int line, int push_value);
void pall(stack_t **stack, unsigned int line);
void pint(stack_t **stack, unsigned int line);
void pop(stack_t **stack, unsigned int line);
void swap(stack_t **stack, unsigned int line);
void nop(stack_t **stack, unsigned int line);
void add(stack_t **stack, unsigned int line);
void sub(stack_t **stack, unsigned int line);
void mul(stack_t **stack, unsigned int line);
void _div(stack_t **stack, unsigned int line);
void mod(stack_t **stack, unsigned int line);
void f_rotl(stack_t **stack, unsigned int line);
void f_rotr(stack_t **stack, unsigned int line);

#endif /* MONTY_H */
