#include "monty.h"
<<<<<<< HEAD
/**
 * push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int counter)
{
    int n, j = 0, flag = 0;

    if (bus.arg)
    {
        if (bus.arg[0] == '-')
            j++;
        while (bus.arg[j] != '\0')
        {
            if (bus.arg[j] > '9' || bus.arg[j] < '0')
            {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag == 1)
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            fclose(bus.file);
            free(bus.content);
            free_stack(*head);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    n = atoi(bus.arg);
    if (bus.lifi == 0)
        addnode(head, n);
    else
        addqueue(head, n);
=======

/**
 * push - add node to the stack.
 * @head: head of the stack.
 * @counter: The number line.
 *
 * Return: Zero (0)
 */
void push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
	    if (bus.arg[0] == '-')
    		j++;
	    while (bus.arg[j] != '\0')
	    {
		if (bus.arg[j] > '9' || bus.arg[j] < '0')
    		{
		    flag = 1;
	      	    break;
		}
		j++;
	     }
	     if (flag == 1)
	     {
		fprintf(stderr, "L%d: usage: push interger\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	      }
	}
	else
	{
	    fprintf(stderr, "L%d: usage: push interger\n", counter);
	    fclose(bus.file);
	    free(bus.content);
	    free_stack(head);
	    exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
	    addnode(head, n);
	else
	    addqueue(head, n);
>>>>>>> 6eeffec683d67e3c73a44307ebaf6db0941863c8
}
