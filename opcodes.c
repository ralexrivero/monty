#include "monty.h"
int opcode_search(const char *opcode)
{

int i = 0;

instruction_t opcode_list[] = {
    {"push", push},
    {"pall", pall},
    {NULL, NULL}
};

int size = sizeof(opcode_list) / sizeof(instruction_t) - 1;

while (i < size)
{
    if (opcode_list[i].opcode == opcode)
}
return (EXIT_SUCCESS);
}