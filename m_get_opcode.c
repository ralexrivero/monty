#include "monty.h"
int get_opcode(const char *opcode, stack_t **stack, unsigned int line_number)
{

int i = 0;

instruction_t opcode_list[] = {
/* 	{"push", push},
	{"pall", pall}, */
	{"pint",pint},
	{"pop",pop},
	{NULL, NULL}
};

int size = sizeof(opcode_list) / sizeof(instruction_t) - 1;

while (i < size)
{
	if (opcode_list[i].opcode == opcode)
	{
		opcode_list[i].f(stack, line_number);
		return (0);
	}
	fprintf(stderr, "no inst\n");
	exit(EXIT_FAILURE);
}
return (EXIT_SUCCESS);
}