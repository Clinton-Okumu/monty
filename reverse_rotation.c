#include "monty.h"
/**
 * _rotr - reverse stack
 * @doubly: linked list head
 * @cline: line number
 */
void reverse_rotation(stack_t **doubly, unsigned int cline)
{
	stack_t *aux = NULL;
	(void)cline;

	if (*doubly == NULL)
		return;

	if ((*doubly)->next == NULL)
		return;

	aux = *doubly;

	for (; aux->next != NULL; aux = aux->next)
		;

	aux->prev->next = NULL;
	aux->next = *doubly;
	aux->prev = NULL;
	(*doubly)->prev = aux;
	*doubly = aux;
}
