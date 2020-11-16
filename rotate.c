#include "push_swap.h"
/*
** r - первый элемент в конец
*/
t_node	*revrotate(t_stack *stack)
{
	t_node *pointer;

	if (stack == NULL
			|| stack->head == NULL
			|| stack->head->next == NULL)
	{
		return (NULL);
	}
	pointer = stack->head;
	while (pointer->next != stack->tail)
	{
		pointer = pointer->next;
	}
	pointer->next = NULL;
	stack->tail->next = stack->head;
	stack->head = stack->tail;
	stack->tail = pointer;
	return (stack->head);
}
/*
** rr - последний элемент в начало
*/
t_node	*rotate(t_stack *stack)
{
	t_node	*tail;
	t_node	*head;

	if (stack == NULL
			|| stack->head == NULL
			|| stack->head->next == NULL)
	{
		return (NULL);
	}
	tail = stack->head;
	head = stack->head->next;
	stack->tail->next = tail;
	stack->tail = tail;
	tail->next = NULL;
	stack->head = head;
	return (stack->head);
}
