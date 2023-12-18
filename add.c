#include "monty.h"
<<<<<<< HEAD
/**
 * add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
=======

/**
 * add - adds the top elemsts of the stack.
 * @head: The head of the stack.
 * @counter: the line number.
 *
 * Return: always 0
 */
void add(stack_t **head, unsigned int counter)
{
stack_t *h;
int length = 0, current;

h = *head;
while (h)
{
h = h->next;
length++;
}
if (length < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
current = h->n + h->next->n;
h->n = current;
*head = h->next;
free(h);
>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
}
