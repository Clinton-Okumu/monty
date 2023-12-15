#include "monty.h"

/**
 * pall - prints the stack
 * @head: the head of stack.
 * @counter: the number line.
 *
 * Return: 0
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}	
