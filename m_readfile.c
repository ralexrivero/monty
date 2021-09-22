#include "monty.h"
/**
 * readfile - read a monty file
 * @fp: file pointer
 */

void readfile(FILE *fp)
{
	char *buffer = NULL;
	size_t size = 0;
	unsigned int line_n = 0; /* line number */
	char *opcode = NULL;

/* invalid instruction print error messege */
	while (getline(&buffer, &size, fp) != -1)
	{
		line_n++;
		opcode = strtok(buffer, DELIM);
		printf("%s\12", opcode);
	}
}