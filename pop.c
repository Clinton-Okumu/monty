#include "monty.h"

/**
<<<<<<< HEAD
 * pop - prints the top part.
 * @head: indicates the head of the stack.
 * @conter: The number line.
 *
 * Return: Always zero.
=======
 * pop -prints the top part od stack.
 * @head: indicates the head of the stack.
 * @counter: The number line.
 *
 * Return: 0
>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
 */
void pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
<<<<<<< HEAD
		free(bus.content);
=======
>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
<<<<<<< HEAD
}	
=======
}

>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
