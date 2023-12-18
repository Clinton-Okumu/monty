#include "monty.h"


/**
 * pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void pall(stack_t **head, unsigned int counter)
{
	stack_t *k;
	(void)counter;

	k = *head;
	if (k == NULL)
		return;
	while (k)
	{
		printf("%d\n", k->n);
		k = k->next;
	}
}
