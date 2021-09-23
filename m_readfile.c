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

/* invalid instruction print error messege */
	while (getline(&buffer, &size, fp) != -1)
	{
		line_n++;
		opcode = strtok(buffer, DELIM);
		printf("%s >>", opcode);
		if (strcmp(opcode,"push") == 0)
		{
			push_value = strtok(NULL, DELIM);
			if (push_validate(push_value, line_n) == true)
			push_int = atol(push_value);
			printf("int value to push: %d\12", push_int);
		}
		else
		{
			printf("get_opcode\12");
		}
	}
}