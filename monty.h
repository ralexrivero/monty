#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L

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
 * @stackorqueue: value to switch between modes
 * Description: global variables to switch mode
 */
struct glovar
{
	int stackorqueue;
} glovar_t;

/* prototypes */
void readfile(FILE *fp);
bool push_validate(char *push_value, int line_n);
int get_opcode(const char *opcode, stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
size_t lililen(stack_t **stack);
/* function prototypes for opcodes */

void push(stack_t **stack, unsigned int line_number, int push_value);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_mnumber);
void mul(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int n);
void pstr(stack_t **stack, unsigned int n);
void stk(stack_t **stack, unsigned int n);
void queue(stack_t **stack, unsigned int n);


#endif /* MONTY_H */
