#include "monty.h"

/**
<<<<<<< HEAD
 * pint - prints the top .
 * @head: head of the stack.
 * @counter: the line number.
 *
 * Return: Always Zero.
=======
 * pint - prints the top o the stack.
 * @head: head of the stack.
 * @counter: the line number.
 *
 * Return: Always 0.
>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
 */
void pint(stack_t **head, unsigned int counter)
{
	(*head == NULL)
		? fprintf(stderr, "L%u: can't pint, stack empty\n", counter)
		: printf("%d\n", (*head)->n);
<<<<<<< HEAD

=======
>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
	if (*head == NULL)
	{
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
<<<<<<< HEAD
}	

	
=======
}

>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
