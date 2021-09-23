#include "monty.h"

bool push_validate(char *push_value, int line_n)
{
	int i = 0;
	bool test = true;
	printf("to validate: %s \12", push_value);
	while(push_value[i])
	{
	/* si el valor es negativo continuar */
	if ((push_value[i] >= 48 && push_value[i] <= 57) || push_value[i] == 45)
		test = true;
	else
	{
		test = false;
		break;
	}
	i++;
	}

	if (test == false)
	{
		fprintf(stderr, "L%d: usage: push integer\12", line_n);
		exit (EXIT_FAILURE);
	}
return (test);
}
