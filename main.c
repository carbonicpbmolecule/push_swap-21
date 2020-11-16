#include "push_swap.h"

void print_stack(t_stack *stack)
{
	t_node *pointer = stack->head;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->value);
		pointer = pointer->next;
	}
}

int main()
{
	t_stack *a = new_stack();

	a->push_node(a, 1);
	a->push_node(a, 2);
	a->push_node(a, 3);
	
	a->pop_node(a);

	print_stack(a);

	rm_stack(a);

	return (0);
}
