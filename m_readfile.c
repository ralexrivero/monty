#include "monty.h"
/**
 * readfile - read a monty file
 * @fp: file pointer
 */

void readfile(FILE *fp)
{
	char *buffer = NULL, *push_value = NULL;
	size_t size = 0;
	unsigned int line_n = 0; /* line number */
	int push_int = 0;
	char *opcode = NULL;
	stack_t *stack = NULL;

/* invalid instruction print error messege */
	while (getline(&buffer, &size, fp) != -1)
	{
		line_n++;
		opcode = strtok(buffer, DELIM);
		/* if not exist opcode */
		if (opcode == NULL)
			continue;
		/* if found the '#' char for comment code */
		if (strchr(opcode, '#') != NULL)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			push_value = strtok(NULL, DELIM);
			if (push_validate(push_value, line_n) == true)
			{
				push_int = atol(push_value);
				push(&stack, line_n, push_int);
			}
		}
		else
		{
			get_opcode(opcode, &stack, line_n);
		}
	}
}
