#include "monty.h"

/**
 * pint - prints the top o the stack.
 * @head: head of the stack.
 * @counter: the line number.
 *
 * Return: Always 0.
 */
void pint(stack_t **head, unsigned int counter)
{
	(*head == NULL)
		? fprintf(stderr, "L%u: can't pint, stack empty\n", counter)
		: printf("%d\n", (*head)->n);
	if (*head == NULL)
	{
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}	
