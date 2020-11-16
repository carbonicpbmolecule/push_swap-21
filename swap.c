#include "push_swap.h"

t_node	*swap(t_stack *stack)
{
	t_node	*head;
	t_node	*second;

	if (stack == NULL
			|| stack->head == NULL
			|| stack->head->next == NULL)
	{
		return (NULL);
	}
	head = stack->head;
	second = stack->head->next;
	head->next = second->next;
	second->next = head;
	stack->head = second;
	return (stack->head);
}
