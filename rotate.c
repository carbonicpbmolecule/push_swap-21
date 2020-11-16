#include <push_swap.h>

t_node	*rotate(t_stack *stack)
{
	// r  первый элемент в конец
	// rr последний элемент в начало

	if (stack == NULL
			|| stack->head == NULL
			|| stack->head->next == NULL)
	{
		return (NULL);
	}
	
}