#include "monty.h"

/**
 * pop -prints the top part od stack.
 * @head: indicates the head of the stack.
 * @counter: The number line.
 *
 * Return: 0
 */
void pop(stack_t **head, unsigned int coi=unter)
{
	stack_t *h;
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}	
