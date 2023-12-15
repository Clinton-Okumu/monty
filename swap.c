#include "monty.h"

/**
 * swap - adds the top elements of the stack.
 * @head: stack ahead.
 * @counter: the number line.
 *Return: Always Zero.
 */
void swap(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d;can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
current = h->n;
h->n = current;
}
